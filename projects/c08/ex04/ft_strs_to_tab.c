/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:30:59 by daepark           #+#    #+#             */
/*   Updated: 2025/02/10 10:31:00 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++ != '\0')
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	int		src_length;
	char	*copy;
	char	*start;

	if (src == 0)
		return (0);
	src_length = ft_strlen(src);
	copy = (char *)malloc(sizeof(char) * (src_length + 1));
	if (copy == 0)
		return (0);
	start = copy;
	while (*src)
		*copy++ = *src++;
	*copy = '\0';
	return (start);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*data;
	int			i;

	i = 0;
	data = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!data)
		return (NULL);
	while (i < ac)
	{
		data[i].size = ft_strlen(av[i]);
		data[i].str = av[i];
		data[i].copy = ft_strdup(av[i]);
		i++;
	}
	data[i].str = 0;
	return (data);
}
