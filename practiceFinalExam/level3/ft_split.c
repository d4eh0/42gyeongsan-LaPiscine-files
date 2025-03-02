/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 20:02:36 by daepark           #+#    #+#             */
/*   Updated: 2025/02/13 20:02:37 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	word_count(char *str)
{
	int count = 0;
	while (*str)
	{
		if (*str == ' ' || *str == '\t')
			str++;
		else
		{
			count++;
			while (*str != ' ' && *str !='\t')
				str++;
		}
		str++;
	}
	return (count);
}

char    **ft_split(char *str)
{
	char **result;
	char *ptr;
	int i = 0;
	int j = 0;
	int size = word_count(str);
	result =(char **)malloc(sizeof(char *) * (size + 1));
	if(!result)
		return (NULL);
	while (*str)
	{
		ptr = str;
		j = 0;
		while (*ptr != ' ' && *str != '\t') // 
		{
			j++;
			ptr++;
		}
		if (j)
		{
			result[i] = (char *)malloc(sizeof(char) * (j + 1));
			j = 0;
			while (*str != ' ' && *str !='\t')
			{
				result[i][j] = *str;
				j++;
				str++;
			}
			result[i++][j] = '\0';
		}
		if (*str)
			str++;
	}
	result[i] = 0;
	return (result);
}

int	main(void)
{	
	char **result = ft_split(" ab cd ef ");

	for (int i = 0; result[i]; i++)
	{
		printf("arr %d : ", i);
		printf("%s\n", result[i]);
	}
}
