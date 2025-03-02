/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 19:18:47 by daepark           #+#    #+#             */
/*   Updated: 2025/02/05 19:18:48 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	size;

	size = max - min;
	if (min >= max)
		return (0);
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (*range == 0)
		return (-1);
	ptr = *range;
	while (min < max)
		*ptr++ = min++;
	return (size);
}
/*
#ifdef TEST

#include <stdio.h>

int main()
{
	int *range1;
	int *range2;
	int *range3;
	int i;
	int size1, size2, size3;

	// 테스트 케이스 1: 정상적인 범위
	size1 = ft_ultimate_range(&range1, 1, 5);  // 1, 2, 3, 4
	printf("Test 1: ");
	for (i = 0; i < size1; i++)
		printf("%d ", range1[i]);
	printf("\nSize: %d\n", size1);
	free(range1);

	// 테스트 케이스 2: min이 max보다 큰 경우
	size2 = ft_ultimate_range(&range2, 5, 3);  // 빈 배열
	if (size2 == 0)
		printf("Test 2: Empty array as expected (size = 0)\n");
	else {
		for (i = 0; i < size2; i++)
			printf("%d ", range2[i]);
		printf("\n");
	}
	
	// 테스트 케이스 3: min과 max가 같을 경우
	size3 = ft_ultimate_range(&range3, 3, 3);  // 빈 배열
	if (size3 == 0)
		printf("Test 3: Empty array as expected (size = 0)\n");
	else {
		for (i = 0; i < size3; i++)
			printf("%d ", range3[i]);
		printf("\n");
	}

	return (0);
}
#endif
*/
