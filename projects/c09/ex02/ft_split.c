/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:37:44 by daepark           #+#    #+#             */
/*   Updated: 2025/02/08 19:37:45 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	found_charset(char cur, char *charset)
{
	int	j;

	j = 0;
	while (charset[j])
	{
		if (cur == charset[j])
			return (1);
		j++;
	}
	return (0);
}

int	word_count(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (found_charset(*str, charset))
			str++;
		else
		{
			count++;
			while (*str && !found_charset(*str, charset))
				str++;
		}
	}
	return (count);
}

char	**fill_arr(char **arr, char *str, char *charset)
{
	int		i;
	int		j;

	i = 0;
	while (*str)
	{
		j = 0;
		while (str[j] && !found_charset(str[j], charset))
			j++;
		if (j)
		{
			arr[i] = (char *)malloc(sizeof(char) * (j + 1));
			if (!arr[i])
				return (NULL);
			j = 0;
			while (*str && !found_charset(*str, charset))
				arr[i][j++] = *str++;
			arr[i][j] = '\0';
			i++;
		}
		if (*str)
			str++;
	}
	return (arr);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		arr_size;

	arr_size = word_count(str, charset) + 1;
	arr = (char **)malloc(sizeof(char *) * (arr_size + 1));
	if (!arr)
		return (NULL);
	arr = fill_arr(arr, str, charset);
	arr[arr_size - 1] = 0;
	return (arr);
}
