/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:24:35 by daepark           #+#    #+#             */
/*   Updated: 2025/02/11 20:24:36 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
