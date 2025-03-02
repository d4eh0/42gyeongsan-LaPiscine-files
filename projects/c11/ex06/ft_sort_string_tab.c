/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 19:43:08 by daepark           #+#    #+#             */
/*   Updated: 2025/02/11 19:43:09 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cmp(char *str1, char *str2)
{
	while (*str1 && *str2 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_string_tab(char **tab)
{
	char	**start;

	start = tab;
	while (*(tab + 1))
	{
		if (cmp(*tab, *(tab + 1)) > 0)
		{
			swap(tab, (tab + 1));
			tab = start;
		}
		else
			tab++;
	}
}
/*
#ifdef TEST

#include <stdio.h>

int main(void)
{
    char *tab[] = {
        "kiwi",
        "bear",
        "banana",
        "grape",
        "apple",
        NULL
    };

    printf("Before sorting:\n");
    for (int i = 0; tab[i] != NULL; i++) {
        printf("%s\n", tab[i]);
    }

    ft_sort_string_tab(tab);  // 문자열 배열 정렬 함수 호출

    printf("\nAfter sorting:\n");
    for (int i = 0; tab[i] != NULL; i++) {
        printf("%s\n", tab[i]);
    }

    return 0;
}

#endif
*/
