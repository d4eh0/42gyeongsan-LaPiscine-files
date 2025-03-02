/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:13:27 by daepark           #+#    #+#             */
/*   Updated: 2025/02/13 16:34:52 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int j = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][j])
	{
		if ('a' <= argv[1][j] && argv[1][j] <= 'z')
		{
			argv[1][j] = 'z' - (argv[1][j] - 'a');
		}
		else if ('A' <= argv[1][j] && argv[1][j] <= 'Z')
		{
			argv[1][j] = 'Z' - (argv[1][j] - 'A');
		}
		write(1, &argv[1][j++], 1);
	}
	return (0);
}
