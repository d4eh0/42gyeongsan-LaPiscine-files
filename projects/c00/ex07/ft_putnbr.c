/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:20:32 by daepark           #+#    #+#             */
/*   Updated: 2025/02/03 12:20:33 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}
/*
#ifdef TEST

#include <stdio.h>

int	main(void)
{
	ft_putnbr(42);
	printf("\n");
	ft_putnbr(421);
	printf("\n");
	ft_putnbr(4213);
	printf("\n");
	ft_putnbr(-42);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(1);
	printf("\n");
	ft_putnbr(-1);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
}

#endif
*/
