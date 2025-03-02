/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:44:31 by daepark           #+#    #+#             */
/*   Updated: 2025/01/30 19:44:40 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*jump_space(char *str)
{
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	return (str);
}

int	ft_atoi(char *str)
{
	int	result;
	int	is_minus;

	result = 0;
	is_minus = 1;
	str = jump_space(str);
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
