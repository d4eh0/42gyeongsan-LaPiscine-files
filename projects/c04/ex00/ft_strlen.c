/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:06:57 by daepark           #+#    #+#             */
/*   Updated: 2025/01/30 18:06:58 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++ != '\0')
		count++;
	return (count);
}
/*
#ifdef TEST

#include <stdio.h>

int	main(void)
{
	char *str = "HELLO";
	printf("%d", ft_strlen(str));
}
#endif
*/
