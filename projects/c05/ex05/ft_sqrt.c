/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 03:45:03 by daepark           #+#    #+#             */
/*   Updated: 2025/01/31 03:45:04 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 1;
	while (i * i <= (long)nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#ifdef	TEST

#include <stdio.h>

int main() 
{
	printf("Number: 4, Square root: %d\n", ft_sqrt(4));
	printf("Number: 16, Square root: %d\n", ft_sqrt(16));
	printf("Number: 25, Square root: %d\n", ft_sqrt(25));
	printf("Number: 2, Square root: %d\n", ft_sqrt(2));
	printf("Number: 3, Square root: %d\n", ft_sqrt(17));
	printf("Number: 9, Square root: %d\n", ft_sqrt(9));
	printf("Number: -1, Square root: %d\n", ft_sqrt(-1));
	printf("Number: 0, Square root: %d\n", ft_sqrt(0));
	printf("Number: 121, Square root: %d\n", ft_sqrt(121));

	return 0;
}
#endif
*/
