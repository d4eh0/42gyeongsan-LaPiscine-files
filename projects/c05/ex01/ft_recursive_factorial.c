/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 00:34:33 by daepark           #+#    #+#             */
/*   Updated: 2025/01/31 00:34:34 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#ifdef TEST

#include <stdio.h>

int main()
{
	printf("Factorial of 5: %d\n", ft_recursive_factorial(5));
	printf("Factorial of 0: %d\n", ft_recursive_factorial(0)); // 0! = 1
	printf("Factorial of -3: %d\n", ft_recursive_factorial(-3));
	printf("Factorial of 7: %d\n", ft_recursive_factorial(7));
	printf("Factorial of 10: %d\n", ft_recursive_factorial(10));

	return 0;
}

#endif
*/
