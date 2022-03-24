/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:17:12 by xbasabe-          #+#    #+#             */
/*   Updated: 2021/12/30 11:27:58 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include"Push_swap.h"

void	pb(int	*stack_a, int *stack_b)
{
	if (stack_a[0] != 0)
	{
		(stack_b[0])++;
		stack_b[stack_b[0]] = stack_a[stack_a[0]];
		(stack_a[0])--;
	}
	write(1, "pb\n", 3);
}

void	sb(int	*stack_b)
{
	int	aux;

	if (stack_b[0] >= 2)
	{
		aux = stack_b[stack_b[0]];
		stack_b[stack_b[0]] = stack_b[stack_b[0] - 1];
		stack_b[stack_b[0] - 1] = aux;
	}
	write(1, "sb\n", 3);
}

void	rb(int *stack_b)
{
	int	first;
	int	i;

	i = stack_b[0];
	first = stack_b[stack_b[0]];
	while (i > 1)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[1] = first;
	write(1, "rb\n", 3);
}

void	rrb(int *stack_b)
{
	int	last;
	int	i;

	i = 1;
	last = stack_b[1];
	while (i < stack_b[0])
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[i] = last;
	write(1, "rrb\n", 4);
}
