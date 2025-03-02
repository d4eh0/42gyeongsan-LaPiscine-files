/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input_util.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suju <suju@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 15:49:04 by suju              #+#    #+#             */
/*   Updated: 2025/02/02 21:45:59 by suju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_input_length(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		if (*str >= '1' && *str <= '9')
			len++;
		str++;
	}
	return (len);
}

int	validate_and_get_length(char *str, int *views)
{
	int	count;
	int	length;
	int	i;

	count = 0;
	length = get_input_length(str);
	i = 0;
	if (length == 0 || length % 4 != 0)
		return (0);
	while (str[i])
	{
		if (i % 2 == 0 && str[i] >= '1' && str[i] <= '9')
		{
			if (str[i] - '0' < 1 || str[i] - '0' > length / 4)
				return (0);
			views[count++] = str[i] - '0' ;
		}
		else if (str[i] != ' ')
			return (0);
		i++;
	}
	if (str[i - 1] == ' ')
		return (0);
	return (count);
}
