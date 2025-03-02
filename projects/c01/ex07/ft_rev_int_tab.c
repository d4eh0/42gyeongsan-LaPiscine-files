/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:43:33 by daepark           #+#    #+#             */
/*   Updated: 2025/01/25 19:43:36 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	*start;
	int	*last;

	if (size == 0)
		return ;
	start = tab;
	last = tab + size -1;
	while (start < last)
	{
		ft_swap(start, last);
		start++;
		last--;
	}
}
/*
#ifdef TEST

#include <stdio.h>

int	main(void)
{
	
	int arr1[4] = {10, 20, 30 ,40};
	for (int i = 0; i < 4; i++) {
        	printf("%d ", arr1[i]);  // 배열의 각 요소 출력
    	}
    	printf("\n");
	ft_rev_int_tab(arr1,4);
	for (int i = 0; i < 4; i++) {
        	printf("%d ", arr1[i]);  // 배열의 각 요소 출력
    	}
    	
    	printf("\n");
    	
    	int arr2[5] = {50, 40, 30, 20 ,10};
	for (int i = 0; i < 5; i++) {
        	printf("%d ", arr2[i]);  // 배열의 각 요소 출력
    	}
    	
    	printf("\n");
    	
	ft_rev_int_tab(arr2,5);
	for (int i = 0; i < 5; i++) {
        	printf("%d ", arr2[i]);  // 배열의 각 요소 출력
    	}
}
#endif
*/
