/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggep <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:19:12 by seonggep          #+#    #+#             */
/*   Updated: 2025/01/25 16:20:16 by seonggep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int width, int height)
{
	
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (y < height)
	{
		x = 0;
		while (x < width)
		{
			if(y == 0 || y == height - 1 || x == 0 || x == width - 1)
			{
				if ((y == 0 && x == 0) || ((y == height -1 && x == width -1) && (height != 1 && width != 1)))
                                        ft_putchar('/');
				else if ((y == 0 && x == width - 1) || (y == height -1 && x == 0))
					ft_putchar('\\');
				else
					ft_putchar('*');
			}
			else
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
