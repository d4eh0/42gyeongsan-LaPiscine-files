/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_util.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suju <suju@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 15:50:50 by suju              #+#    #+#             */
/*   Updated: 2025/02/02 21:44:59 by suju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	free_board(int **board, int n)
{
	int	row;

	row = 0;
	while (row < n)
	{
		free(board[row]);
		row++;
	}
	free(board);
}

int	**create_board(int n)
{
	int	**board;
	int	row;
	int	col;

	row = 0;
	board = (int **)malloc(sizeof(int *) * n);
	if (!board)
		return (NULL);
	while (row < n)
	{
		board[row] = (int *)malloc(sizeof(int) * n);
		if (!board[row])
		{
			free_board(board, row);
			return (NULL);
		}
		col = 0;
		while (col < n)
			board[row][col++] = 0;
		row++;
	}
	return (board);
}

void	print_board(int **board, int n)
{
	int		row;
	int		col;
	char	num;

	row = 0;
	num = 0;
	while (row < n)
	{
		col = 0;
		while (col < n)
		{
			num = board[row][col] + '0';
			write(1, &num, 1);
			if (col < n - 1)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}
