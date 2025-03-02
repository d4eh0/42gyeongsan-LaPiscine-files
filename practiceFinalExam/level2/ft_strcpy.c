/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 02:07:40 by daepark           #+#    #+#             */
/*   Updated: 2025/01/26 02:07:43 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (start);
}
/*
#ifdef TEST

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char src[] = "abcd";
	char dest[] = " ";
	
	    for (int i = 0; dest[i] != '\0'; i++)
	    {
		ft_putchar(dest[i]);
	    }
		ft_strcpy(dest, src);
	    for (int i = 0; dest[i] != '\0'; i++)
	    {
		ft_putchar(dest[i]);
	    }
}

#endif
*/
