/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:31:10 by daepark           #+#    #+#             */
/*   Updated: 2025/02/05 15:31:11 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++ != '\0')
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	int		src_length;
	char	*copy;
	char	*start;

	if (src == 0)
		return (0);
	src_length = ft_strlen(src);
	copy = (char *)malloc(sizeof(char) * (src_length + 1));
	if (copy == 0)
		return (0);
	start = copy;
	while (*src)
		*copy++ = *src++;
	*copy = '\0';
	return (start);
}
/*
#ifdef TEST

#include <stdio.h>

int main() {
    // 테스트 케이스 1: 일반적인 문자열 복사
    char *str1 = "Hello, world!";
    char *copy1 = ft_strdup(str1);
    if (copy1 != 0) {
        printf("Test 1 - Original: %s, Copy: %s\n", str1, copy1);
        free(copy1);  // 할당된 메모리 해제
    } else {
        printf("Test 1 failed: Memory allocation failed\n");
    }

    // 테스트 케이스 2: 빈 문자열 복사
    char *str2 = "";
    char *copy2 = ft_strdup(str2);
    printf("Test 2 - Original: '%s', Copy: '%s'\n", str2, copy2);

    // 테스트 케이스 3: 널 문자열 입력
    char *str3 = 0;
    char *copy3 = ft_strdup(str3);
    printf("Test 3 - Original: '%s', Copy: '%s'\n", str3, copy3);

    return 0;
}


#endif
*/
