/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 20:52:23 by daepark           #+#    #+#             */
/*   Updated: 2025/01/30 20:52:24 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_length(char *base)
{
	int	length;

	length = 0;
	while (*base++ != '\0')
		length++;
	return (length);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;
	int	length;

	i = 0;
	j = 0;
	length = get_length(base);
	if (length == 0 || length == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (i != j)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

void	convert(long n, int n_base, char *base)
{
	if (n >= n_base)
	{
		convert(n / n_base, n_base, base);
		write(1, &base[n % n_base], 1);
	}
	else
	{
		write(1, &base[n], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		length;

	n = nbr;
	length = get_length(base);
	if (!is_valid_base(base))
		return ;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	convert(n, length, base);
}

/*
#ifdef TEST

#include <stdio.h>

int main() 
{
	ft_putnbr_base(-255, "01"); // -11111111
	printf("\n------------------------------\n");
	ft_putnbr_base(-255, "0123456789ABCDEF"); // -FF
	printf("\n------------------------------\n");
	ft_putnbr_base(-255, "poneyvif"); // -eff
	printf("\n------------------------------\n");

	ft_putnbr_base(0, "01"); // 0
	printf("\n------------------------------\n");
	ft_putnbr_base(0, "0123456789ABCDEF"); // 0
	printf("\n------------------------------\n");
	ft_putnbr_base(0, "poneyvif"); // 0
	printf("\n------------------------------\n");

	ft_putnbr_base(255, "01"); // 11111111
	printf("\n------------------------------\n");
	ft_putnbr_base(255, "0123456789ABCDEF"); // FF
	printf("\n------------------------------\n");
	ft_putnbr_base(255, "poneyvif"); // eff
	printf("\n------------------------------\n");

	ft_putnbr_base(2147483647, "01"); // 1111111111111111111111111111111
	printf("\n------------------------------\n");
	ft_putnbr_base(2147483647, "0123456789ABCDEF"); // 7FFFFFFF
	printf("\n------------------------------\n");
	ft_putnbr_base(2147483647, "poneyvif"); // offffffffff	
	printf("\n------------------------------\n");

	ft_putnbr_base(-2147483648, "01"); // -10000000000000000000000000000000
	printf("\n------------------------------\n");
	ft_putnbr_base(-2147483648, "0123456789ABCDEF"); // -80000000
	printf("\n------------------------------\n");
	ft_putnbr_base(-2147483648, "poneyvif"); // -npppppppppp
	printf("\n------------------------------\n");

	return 0;
}

#endif
*/
