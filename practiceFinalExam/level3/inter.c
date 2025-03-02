/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:09:01 by daepark           #+#    #+#             */
/*   Updated: 2025/02/13 18:09:01 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	found(char c, char* str)
{
	int i = 0;
	int result = 0;
	while (str[i])
	{
		j = 0;
		while (i != j)
		{
			if (c == str[i])
				result++;
			j++;
		}
		i++;
	}
	if (result > 1)
		return (0);
	else
		return (1);
}

int	main(int argc, char *argv[])
{
	int j;
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}

	int visited[128];
	for (int i = 0; i < 128; i++)
		visited[i] = 0;
	j = 0;
	while (argv[1][j])
	{
		if (visited[(int)argv[1][j]] == 0)
		{
			visited[(int)argv[1][j]] = 1;
		}
		j++;
	}
	/*
	j = 0;
	while (argv[2][j])
	{
		if ((visited[(int)argv[2][j]] == 0))
		{
			visited[(int)argv[2][j]] = 1;
		}
		j++;
	}	
	*/
	j = 0;
	int a = 0;
	int b = 0;
	while (argv[1][j])
	{
		if (visited[(int)argv[1][j]] == 1)
		{
			if (!found(argv[1][j], argv[1]))
				write(1, &argv[1][j], 1);
		}
		j++;
	}
}
