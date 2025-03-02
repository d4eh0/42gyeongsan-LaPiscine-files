/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:13:49 by daepark           #+#    #+#             */
/*   Updated: 2025/02/13 17:13:50 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int j = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][j + 1])
		j++;
	while (argv[1][j] == ' ' || argv[1][j] == '\t')
	{
		if (j = 0)
		{
			write(1, "\n", 1);
			return (0);
		}
		j--;
		
	}
	while (argv[1][j - 1] != ' ' && argv[1][j - 1] != '\t')
	{
		if (j = 1)
		{
			write(1, "\n", 1);
			return (0);
		}
		j--;
		
	}
	while (argv[1][j] != ' ' && argv[1][j] != '\t')
		write(1, &argv[1][j++], 1);
	write(1, "\n", 1);
	return (0);
}
