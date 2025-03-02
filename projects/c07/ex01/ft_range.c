/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 17:22:03 by daepark           #+#    #+#             */
/*   Updated: 2025/02/05 17:22:05 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	*start;

	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (arr == 0)
		return (0);
	start = arr;
	while (min < max)
		*arr++ = min++;
	return (start);
}
/*
#ifdef TEST

#include <stdio.h>

int main() {
    int *range = ft_range(3, 7);  // 예시: 5부터 10 미만까지의 배열 생성
    for (int i = 0; i < 4; i++) {
        printf("%d ", range[i]);  // 5, 6, 7, 8, 9 출력
    }
    free(range);  // 할당된 메모리 해제
    return 0;
}

#endif
*/
