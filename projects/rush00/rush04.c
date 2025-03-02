/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonggep <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:14:59 by seonggep          #+#    #+#             */
/*   Updated: 2025/01/25 15:49:11 by seonggep         ###   ########.fr       */
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
		while(x<width)
		{
			if(y == 0 || y == height - 1 || x == 0 || x == width - 1)
			{
				if ((y == 0 && x == 0) || ((y == height -1 && x == width -1) && (height != 1 && width != 1)))
                                        ft_putchar('A');
				else if ( (y == 0 && x == width - 1) || (y == height -1 && x == 0))
					ft_putchar('C');
				else
					ft_putchar('B');
			}
			else
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
