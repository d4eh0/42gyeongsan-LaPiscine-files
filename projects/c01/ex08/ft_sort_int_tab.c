/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:22:47 by daepark           #+#    #+#             */
/*   Updated: 2025/01/25 20:22:49 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	*start;
	int	*last;

	count = 0;
	start = tab;
	last = tab + size - 1;
	while (count++ < size - 1)
	{
		while (tab != last)
		{
			if (*tab > *(tab + 1))
			{
				ft_swap(tab, tab + 1);
			}
			tab++;
		}
		last--;
		tab = start;
	}
}
