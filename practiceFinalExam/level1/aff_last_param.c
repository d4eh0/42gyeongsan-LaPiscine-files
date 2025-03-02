/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:19:46 by daepark           #+#    #+#             */
/*   Updated: 2025/02/13 15:19:46 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i = 0	;
	int	j = 0;
	if (argc <= 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[i + 1])
		i++;
	while (argv[i][j])
		write(1, &argv[i][j++], 1);
	write(1, "\n", 1);
	return (0);
}
