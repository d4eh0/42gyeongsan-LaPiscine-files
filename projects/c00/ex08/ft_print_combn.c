/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:59:04 by daepark           #+#    #+#             */
/*   Updated: 2025/02/03 12:59:05 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display(int *arr, int size)
{
	int		i;
	char	c;

	i = 0;
	while (i < size)
	{
		c = arr[i++] + '0';
		write(1, &c, 1);
	}
	if (arr[0] != 10 - size)
		write(1, ", ", 2);
}

void	backtrack(int *arr, int index, int start, int size)
{
	int	num;

	if (index == size)
	{
		display(arr, size);
		return ;
	}
	num = start;
	while (num <= 9)
	{
		arr[index] = num;
		backtrack(arr, index + 1, num + 1, size);
		num++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int	i;

	i = 0;
	while (i < n)
		arr[i++] = 0;
	backtrack(arr, 0, 0, n);
}
/*
#ifdef TEST

int	main(void)
{
	ft_print_combn(3);
}

#endif
*/
