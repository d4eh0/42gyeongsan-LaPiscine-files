/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 19:34:58 by daepark           #+#    #+#             */
/*   Updated: 2025/02/05 19:34:59 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_size(int size, char **strs, char *sep)
{
	int	result_length;
	int	sep_length;
	int	i;
	int	j;

	result_length = 0;
	sep_length = 0;
	i = 0;
	while (sep[sep_length])
		sep_length++;
	while (i < size)
	{
		j = 0;
		while (strs[i][j++])
			result_length++;
		if (i < size - 1)
			result_length += sep_length;
		i++;
	}
	return (result_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*result;
	char	*start_result;
	char	*start_sep;

	i = 0;
	result = (char *)malloc(sizeof(char) * (get_size(size, strs, sep) + 1));
	start_result = result;
	start_sep = sep;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			*result++ = strs[i][j++];
		if (i < size - 1)
			while (*sep)
				*result++ = *sep++;
		sep = start_sep;
		i++;
	}
	*result = '\0';
	return (start_result);
}
/*
#ifdef TEST

#include <stdio.h>

int	main(void)
{
    char *strs1[] = {"ab", "bc", "cd"};
    char *sep1 = "\\";
    int size1 = 3;
    char *result1 = ft_strjoin(size1, strs1, sep1);
    printf("Result 1: %s\n", result1); // 예상: ab\bc\cd
    free(result1);

    char *strs2[] = {"hello", "world"};
    char *sep2 = "-";
    int size2 = 2;
    char *result2 = ft_strjoin(size2, strs2, sep2);
    printf("Result 2: %s\n", result2); // 예상: hello-world
    free(result2);

    char *strs3[] = {};
    char *sep3 = "\\";
    int size3 = 0;
    char *result3 = ft_strjoin(size3, strs3, sep3);
    printf("Result 3: %s\n", result3); // 예상: (빈 문자열)
    free(result3);

    return (0);
}
#endif
*/
