/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:13:27 by daepark           #+#    #+#             */
/*   Updated: 2025/02/13 16:13:28 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int i;
	int j = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][j])
	{
		i = 0;
		if ('a' <= argv[1][j] && argv[1][j] <= 'z')
		{
			while (i < 13)
			{
				argv[1][j] += 1;
				if (argv[1][j] > 'z')
					argv[1][j] = 'a';
				i++;
			}
		}
		else if ('A' <= argv[1][j] && argv[1][j] <= 'Z')
		{
			while (i < 13)
			{
				argv[1][j] += 1;
				if (argv[1][j] > 'Z')
					argv[1][j] = 'A';
				i++;
			}
		}
		write(1, &argv[1][j++], 1);
	}
	return (0);
}
