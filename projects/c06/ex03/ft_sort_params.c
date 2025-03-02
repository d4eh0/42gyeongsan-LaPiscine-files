/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:26:46 by daepark           #+#    #+#             */
/*   Updated: 2025/02/04 17:26:47 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	cmp(char *argv1, char *argv2)
{
	while (*argv1 && *argv2 && *argv1 == *argv2)
	{
		argv1++;
		argv2++;
	}
	return (*argv1 - *argv2);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

int	main(int argc, char *argv[])
{
	char	*temp;
	int		i;

	i = 1;
	while (argc > 1)
	{
		while (i < argc && argv[i + 1])
		{
			if (cmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
			}
			i++;
		}
		i = 1;
		argc--;
	}
	while (*(++argv))
	{
		ft_putstr(*argv);
		write(1, "\n", 1);
	}
}
/*

./a.out Zebra apple Banana apple
	Banana Zebra apple apple

./a.out banana Apple orange 123 bbq
	123 Apple banana bbq orange

./a.out 9 1 5 0 -1 _underscore +plus
	+plus -1 0 1 5 9 _underscore

./a.out abc ABC Abc aBc aBC ABCD
	ABC ABCD Abc aBC aBc abc

./a.out "applebanana" "AppleBanana" "apple" "banana"
	AppleBanana apple applebanana banana

*/