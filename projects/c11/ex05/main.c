/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:39:27 by daepark           #+#    #+#             */
/*   Updated: 2025/02/11 20:39:28 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "operator.h"

void	(*g_operations[])(int, int) = {add, sub, mul, div, mod};

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++ != '\0')
		count++;
	return (count);
}

int	ft_atoi(char *str)
{
	int	result;
	int	is_minus;

	result = 0;
	is_minus = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			is_minus *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	result *= is_minus;
	return (result);
}

void	putnbr(int num)
{
	if (num < 0)
	{
		if (num == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		num = -num;
		write(1, "-", 1);
	}
	if (num >= 10)
		putnbr(num / 10);
	write(1, &"0123456789"[num % 10], 1);
}

void	calc(int value1, int value2, char *op)
{
	if (op[1] != '\0')
	{
		write(1, "0", 1);
		return ;
	}
	if (op[0] == '+')
		g_operations[0](value1, value2);
	else if (op[0] == '-')
		g_operations[1](value1, value2);
	else if (op[0] == '*')
		g_operations[2](value1, value2);
	else if (op[0] == '/')
		g_operations[3](value1, value2);
	else if (op[0] == '%')
		g_operations[4](value1, value2);
	else
		write(1, "0", 1);
}

int	main(int argc, char *argv[])
{
	char	*op;
	int		value1;
	int		value2;

	op = argv[2];
	if (argc != 4)
		return (0);
	value1 = ft_atoi(argv[1]);
	value2 = ft_atoi(argv[3]);
	calc(value1, value2, op);
	write(1, "\n", 1);
	return (0);
}
