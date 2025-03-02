/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daepark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:59:09 by daepark           #+#    #+#             */
/*   Updated: 2025/02/12 15:59:10 by daepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "operator.h"

void	add(int a, int b)
{
	putnbr(a + b);
}

void	sub(int a, int b)
{
	putnbr(a - b);
}

void	mul(int a, int b)
{
	putnbr(a * b);
}

void	div(int a, int b)
{
	if (b == 0)
		write(1, "Stop : division by zero", 23);
	else
		putnbr(a / b);
}

void	mod(int a, int b)
{
	if (b == 0)
		write(1, "Stop : modulo by zero", 21);
	else
		putnbr(a % b);
}
