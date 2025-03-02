/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 15:27:03 by daepark           #+#    #+#             */
/*   Updated: 2025/02/08 15:27:04 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	get_length(char *str);
int	ft_atoi_base(char *str, char *base, int *error);
int	is_valid_base(char *base, int base_len);

int	get_result_size(long num, int base_to_len)
{
	int	size;

	if (num == 0)
		return (1);
	size = 0;
	while (num != 0)
	{
		num /= base_to_len;
		size++;
	}
	return (size);
}

char	*allocate_result(long num, int size)
{
	char	*result;

	if (num < 0)
		result = (char *)malloc(sizeof(char) * (size + 2));
	else
		result = (char *)malloc(sizeof(char) * (size + 1));
	if (!result)
		return (NULL);
	result[size] = '\0';
	return (result);
}

void	fill_result(char *result, long num, int base_to_len, char *base_to)
{
	int	i;

	i = get_result_size(num, base_to_len) - 1;
	if (num < 0)
	{
		result[0] = '-';
		num = -num;
		i++;
	}
	while (num != 0)
	{
		result[i--] = base_to[num % base_to_len];
		num /= base_to_len;
	}
}

char	*convert(long num, int base_to_len, char *base_to)
{
	char	*result;
	int		size;

	if (num == 0)
	{
		result = (char *)malloc(sizeof(char) * 2);
		if (!result)
			return (NULL);
		result[0] = base_to[0];
		result[1] = '\0';
		return (result);
	}
	size = get_result_size(num, base_to_len);
	result = allocate_result(num, size);
	if (!result)
		return (NULL);
	fill_result(result, num, base_to_len, base_to);
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	long	num;
	int		base_to_len;
	int		error;

	error = 0;
	num = (long)ft_atoi_base(nbr, base_from, &error);
	printf("%ld\n", num);
	base_to_len = get_length(base_to);
	if (!is_valid_base(base_to, base_to_len))
		return (NULL);
	if (error)
		return (NULL);
	result = convert(num, base_to_len, base_to);
	return (result);
}
