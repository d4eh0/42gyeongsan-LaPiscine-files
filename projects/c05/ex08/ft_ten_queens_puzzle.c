/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:15:11 by daepark           #+#    #+#             */
/*   Updated: 2025/02/01 15:15:13 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display(int *col)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = col[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	promising(int row, int *col)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (col[i] == col[row])
			return (0);
		else if (col[i] - col[row] == i - row)
			return (0);
		else if (col[i] - col[row] == row - i)
			return (0);
		i++;
	}
	return (1);
}

void	queens(int row, int *col, int *count)
{
	int	i;

	i = 0;
	if (row == 10)
	{
		(*count)++;
		display(col);
		return ;
	}
	while (i < 10)
	{
		col[row] = i;
		if (promising(row, col))
			queens(row + 1, col, count);
		col[row] = -1;
		i++;
	}
	return ;
}

int	ft_ten_queens_puzzle(void)
{
	int	i;
	int	count;
	int	col[10];

	i = 0;
	count = 0;
	while (i < 10)
		col[i++] = -1;
	queens(0, col, &count);
	return (count);
}
/*
#ifdef TEST

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_ten_queens_puzzle());
}

#endif
*/
