/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 00:29:33 by daepark           #+#    #+#             */
/*   Updated: 2025/01/31 00:29:36 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb != 0)
	{
		result *= nb--;
	}
	return (result);
}
/*
#ifdef TEST

#include <stdio.h>

int main() 
{
    printf("Factorial of 5: %d\n", ft_iterative_factorial(5));
    printf("Factorial of 0: %d\n", ft_iterative_factorial(0)); // 0! = 1
    printf("Factorial of -3: %d\n", ft_iterative_factorial(-3));
    printf("Factorial of 7: %d\n", ft_iterative_factorial(7));
    printf("Factorial of 10: %d\n", ft_iterative_factorial(10));
    
    return 0;
}

#endif
*/
