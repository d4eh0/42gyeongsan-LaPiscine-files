/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 19:19:45 by daepark           #+#    #+#             */
/*   Updated: 2025/02/11 19:19:46 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	order;
	int	cur;

	i = 0;
	order = 0;
	while (i < length - 1)
	{
		cur = f(tab[i], tab[i + 1]);
		if (cur != 0)
		{
			if (order == 0)
				order = cur;
			else if ((order < 0 && cur > 0) || (order > 0 && cur < 0))
				return (0);
		}
		i++;
	}
	return (1);
}
