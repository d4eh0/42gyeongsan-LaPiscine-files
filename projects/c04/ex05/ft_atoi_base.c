/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:26:17 by daepark           #+#    #+#             */
/*   Updated: 2025/02/04 15:26:22 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_length(char *str)
{
	int	length;

	length = 0;
	while (*str++ != '\0')
		length++;
	return (length);
}

char	*jump_space(char *str)
{
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	return (str);
}

int	is_valid_base(char *base, int base_len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base_len == 0 || base_len == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (i != j)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int	find_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	is_minus;
	int	base_len;
	int	result;
	int	digit;
	
	is_minus = 1;
	result = 0;
	base_len = get_length(base);
	if (!is_valid_base(base, base_len))
		return (0);
	str = jump_space(str);
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			is_minus *= -1;
		str++;
	}
	while (find_in_base(*str, base) != -1) 
	{
		digit = find_in_base(*str, base);
		result = result * base_len + digit;
		str++;
	}
	return (is_minus * result);
}
/*
#ifdef TEST

#include <stdio.h>

int main(void)
{
    // Test 1: 정상적인 2진수 변환 (binary)
    char *str1 = "1011"; // 11
    char *base1 = "01";
    printf("Test 1: %s in base %s = %d\n", str1, base1, ft_atoi_base(str1, base1));

    // Test 2: 정상적인 16진수 변환 (hexadecimal)
    char *str2 = "1A"; // 26
    char *base2 = "0123456789ABCDEF";
    printf("Test 2: %s in base %s = %d\n", str2, base2, ft_atoi_base(str2, base2));

    // Test 3: 유효하지 않은 base에서의 입력 (잘못된 문자가 있는 경우)
    char *str3 = "FF";  // 0
    char *base3 = "01";  // 16진수 문자 'F'는 2진수에서 허용되지 않음
    printf("Test 3: %s in base %s = %d\n", str3, base3, ft_atoi_base(str3, base3));

    // Test 4: base가 너무 짧거나 잘못된 경우 (base가 1이면 불가능)
    char *str4 = "123"; // 0
    char *base4 = "0";  // base가 하나라면 유효하지 않음
    printf("Test 4: %s in base %s = %d\n", str4, base4, ft_atoi_base(str4, base4));

    // Test 5: 정상적인 8진수 변환 (octal)
    char *str5 = "   -+-+-17"; // -17
    char *base5 = "0123456789";
    printf("Test 5: %s in base %s = %d\n", str5, base5, ft_atoi_base(str5, base5));

    char *str6 = "abab"; // 5
    char *base6 = "ab";
    printf("Test 5: %s in base %s = %d\n", str6, base6, ft_atoi_base(str6, base6));

    return 0;
}

#endif
*/
