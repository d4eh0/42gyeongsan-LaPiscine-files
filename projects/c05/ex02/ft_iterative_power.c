/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 00:56:01 by daepark           #+#    #+#             */
/*   Updated: 2025/01/31 00:56:03 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power-- > 0)
		result *= nb;
	return (result);
}
/*
#ifdef TEST

#include <stdio.h>

int	main(void) 
{
	printf("2^3 = %d\n", ft_iterative_power(2, 3));  // 8
	printf("2^0 = %d\n", ft_iterative_power(2, 0));  // 1
	printf("0^0 = %d\n", ft_iterative_power(0, 0));  // 1
	printf("5^2 = %d\n", ft_iterative_power(5, 2));  // 25
	printf("3^-2 = %d\n", ft_iterative_power(3, -2)); // 0
	printf("10^3 = %d\n", ft_iterative_power(10, 3)); // 1000
	printf("0^3 = %d\n", ft_iterative_power(0, 3));  // 0
	printf("3^1 = %d\n", ft_iterative_power(3, 1));   // 3

	return 0;
}

#endif
*/
