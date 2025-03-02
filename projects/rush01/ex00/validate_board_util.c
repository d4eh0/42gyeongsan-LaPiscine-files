/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_board_util.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suju <suju@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 14:19:30 by suju              #+#    #+#             */
/*   Updated: 2025/02/02 21:45:31 by suju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	count_visible(int *line, int n)
{
	int	max_height;
	int	count;
	int	index;

	max_height = 0;
	count = 0;
	index = 0;
	while (index < n)
	{
		if (line[index] > max_height)
		{
			max_height = line[index];
			count++;
		}
		index++;
	}
	return (count);
}

int	is_valid_col_up(int **board, int *views, int n)
{
	int	col;
	int	row;
	int	*board_column;

	board_column = (int *)malloc(n * sizeof(int));
	if (!board_column)
		return (0);
	col = 0;
	while (col < n)
	{
		row = 0;
		while (row < n)
		{
			board_column[row] = board[row][col];
			row++;
		}
		if (count_visible(board_column, n) != views[col])
		{
			free(board_column);
			return (0);
		}
		col++;
	}
	free(board_column);
	return (1);
}

int	is_valid_col_down(int **board, int *views, int n)
{
	int	col;
	int	row;
	int	*board_column;

	board_column = (int *)malloc(n * sizeof(int));
	col = 0;
	while (col < n)
	{
		row = 0;
		while (row < n)
		{
			board_column[row] = board[n - 1 - row][col];
			row++;
		}
		if (count_visible(board_column, n) != views[n + col])
		{
			free(board_column);
			return (0);
		}
		col++;
	}
	free(board_column);
	return (1);
}

int	is_valid_row_left(int **board, int *views, int n)
{
	int	row;
	int	col;
	int	*board_row;

	board_row = (int *)malloc(n * sizeof(int));
	row = 0;
	while (row < n)
	{
		col = 0;
		while (col < n)
		{
			board_row[col] = board[row][col];
			col++;
		}
		if (count_visible(board_row, n) != views[2 * n + row])
		{
			free(board_row);
			return (0);
		}
		row++;
	}
	free(board_row);
	return (1);
}

int	is_valid_row_right(int **board, int *views, int n)
{
	int	row;
	int	col;
	int	*board_row;

	board_row = (int *)malloc(n * sizeof(int));
	row = 0;
	while (row < n)
	{
		col = 0;
		while (col < n)
		{
			board_row[col] = board[row][n - 1 - col];
			col++;
		}
		if (count_visible(board_row, n) != views[3 * n + row])
		{
			free(board_row);
			return (0);
		}
		row++;
	}
	free(board_row);
	return (1);
}
