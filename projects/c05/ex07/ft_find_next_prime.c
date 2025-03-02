/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 04:11:47 by daepark           #+#    #+#             */
/*   Updated: 2025/01/31 04:11:48 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (nb);
	if (nb % 2 == 0)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (nb);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) != 0)
		return (nb);
	else
	{
		while (ft_is_prime(nb) == 0)
			nb++;
	}
	return (nb);
}
/*
#ifdef TEST

#include <stdio.h>

int main() 
{
	printf("Is 2 prime? %d\n", ft_find_next_prime(2));  // 2는 소수
	printf("Is 3 prime? %d\n", ft_find_next_prime(3));  // 3은 소수
	printf("Is 4 prime? %d\n", ft_find_next_prime(4));  // 4는 소수 아님 : 5
	printf("Is 5 prime? %d\n", ft_find_next_prime(5));  // 5는 소수
	printf("Is 6 prime? %d\n", ft_find_next_prime(6));  // 6은 소수 아님 : 7
	printf("Is 7 prime? %d\n", ft_find_next_prime(7));  // 7은 소수
	printf("Is 10 prime? %d\n", ft_find_next_prime(10)); // 10은 소수 아님 : 11
	printf("Is 13 prime? %d\n", ft_find_next_prime(13)); // 13은 소수
	printf("Is 15 prime? %d\n", ft_find_next_prime(15)); // 15는 소수 아님 : 17
	printf("Is 17 prime? %d\n", ft_find_next_prime(17)); // 17은 소수
	printf("Is 19 prime? %d\n", ft_find_next_prime(19)); // 19는 소수
	printf("Is 20 prime? %d\n", ft_find_next_prime(20)); // 20은 소수 아님 : 23
	printf("Is -1 prime? %d\n", ft_find_next_prime(-1)); // 음수는 소수 아님 : 2
	printf("Is 0 prime? %d\n", ft_find_next_prime(0));   // 0은 소수 아님 : 2
	printf("Is 1 prime? %d\n", ft_find_next_prime(1));   // 1은 소수 아님 : 2

	return 0;
}
#endif
*/
