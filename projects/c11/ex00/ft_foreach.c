/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:53:54 by daepark           #+#    #+#             */
/*   Updated: 2025/02/11 15:53:55 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}
/*
#ifdef TEST

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
	if (nb != 0)
	{
		if (!(nb / 10 == 0))
			ft_putnbr(nb / 10);
		write(1, &"0123456789"[nb % 10], 1);
	}
}

int	main(void) 
{
    int tab[] = {1, 2, 3, 4, 5};
    ft_foreach(tab, 5, &ft_putnbr);
    return 0;
}

#endif
*/
