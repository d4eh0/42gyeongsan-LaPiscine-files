/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 15:26:50 by daepark           #+#    #+#             */
/*   Updated: 2025/02/08 15:26:50 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_length(char *str)
{
	int	length;

	length = 0;
	while (*str++ != '\0')
		length++;
	return (length);
}

int	skip(char **str)
{
	int	sign;

	sign = 1;
	while (**str == 32 || (**str >= 9 && **str <= 13))
		(*str)++;
	while (**str == '+' || **str == '-')
	{
		if (**str == '-')
			sign *= -1;
		(*str)++;
	}
	return (sign);
}

int	is_valid_base(char *base, int base_len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base_len == 0 || base_len == 1)
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

int	find_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base, int *error)
{
	int	base_len;
	int	result;
	int	digit;
	int	is_minus;

	result = 0;
	base_len = get_length(base);
	if (!is_valid_base(base, base_len))
	{
		*error = 1;
		return (0);
	}
	is_minus = skip(&str);
	while (*str)
	{
		if (find_in_base(*str, base) == -1)
			return (is_minus * result);
		digit = find_in_base(*str, base);
		result = result * base_len + digit;
		str++;
	}
	return (is_minus * result);
}
