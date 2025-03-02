/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 03:56:33 by daepark           #+#    #+#             */
/*   Updated: 2025/02/01 13:36:10 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#ifdef TEST

#include <stdio.h>

int	ft_is_prime(int n);  // ft_is_prime 함수의 선언

int main() 
{
	printf("Is 2 prime? %d\n", ft_is_prime(2));  // 2는 소수
	printf("Is 3 prime? %d\n", ft_is_prime(3));  // 3은 소수
	printf("Is 4 prime? %d\n", ft_is_prime(4));  // 4는 소수 아님
	printf("Is 5 prime? %d\n", ft_is_prime(5));  // 5는 소수
	printf("Is 6 prime? %d\n", ft_is_prime(6));  // 6은 소수 아님
	printf("Is 7 prime? %d\n", ft_is_prime(7));  // 7은 소수
	printf("Is 10 prime? %d\n", ft_is_prime(10)); // 10은 소수 아님
	printf("Is 13 prime? %d\n", ft_is_prime(13)); // 13은 소수
	printf("Is 15 prime? %d\n", ft_is_prime(15)); // 15는 소수 아님
	printf("Is 17 prime? %d\n", ft_is_prime(17)); // 17은 소수
	printf("Is 19 prime? %d\n", ft_is_prime(19)); // 19는 소수
	printf("Is 20 prime? %d\n", ft_is_prime(20)); // 20은 소수 아님
	printf("Is -1 prime? %d\n", ft_is_prime(-1)); // 음수는 소수 아님
	printf("Is 0 prime? %d\n", ft_is_prime(0));   // 0은 소수 아님
	printf("Is 1 prime? %d\n", ft_is_prime(1));   // 1은 소수 아님

	return 0;
}
#endif
*/
