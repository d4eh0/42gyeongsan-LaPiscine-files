/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suju <suju@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 20:09:54 by suju              #+#    #+#             */
/*   Updated: 2025/02/02 21:44:16 by suju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	g_n;
int	*g_views;
int		validate_and_get_length(char *str, int *view);
int		**create_board(int n);
void	free_board(int **board, int n);
void	print_board(int **board, int n);
int		is_valid_col_up(int **board, int *g_views, int n);
int		is_valid_col_down(int **board, int *g_views, int n);
int		is_valid_row_left(int **board, int *g_views, int n);
int		is_valid_row_right(int **board, int *g_views, int n);

int	is_safe(int **board, int row, int col, int num)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < col)
	{
		if (board[row][x] == num)
			return (0);
		x++;
	}
	while (y < row)
	{
		if (board[y][col] == num)
			return (0);
		y++;
	}	
	return (1);
}

int	is_valid(int **board)
{
	int	c_u_res;
	int	c_d_res;
	int	r_l_res;
	int	r_r_res;

	c_u_res = is_valid_col_up(board, g_views, g_n);
	c_d_res = is_valid_col_down(board, g_views, g_n);
	r_l_res = is_valid_row_left(board, g_views, g_n);
	r_r_res = is_valid_row_right(board, g_views, g_n);
	return (c_u_res && c_d_res && r_l_res && r_r_res);
}

int	solve(int **board, int row, int col)
{
	int	num;

	num = 1;
	if (row == g_n)
		return (is_valid(board));
	if (col == g_n)
		return (solve(board, row + 1, 0));
	while (num <= g_n)
	{
		if (is_safe(board, row, col, num))
		{
			board[row][col] = num;
			if (solve(board, row, col + 1))
				return (1);
			board[row][col] = 0;
		}
		num++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	**board;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	g_views = (int *)malloc(sizeof(int) * 40);
	g_n = validate_and_get_length(argv[1], g_views) / 4;
	if (g_n == 0)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	board = create_board(g_n); // board가 NULL일때에 대한 예외처리빠짐.
	if (solve(board, 0, 0))
		print_board(board, g_n);
	else
		write(1, "Error\n", 6);
	free_board(board, g_n);
	free(g_views);
	return (0);
}
