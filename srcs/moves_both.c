/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_both.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:17:12 by xbasabe-          #+#    #+#             */
/*   Updated: 2021/12/30 11:27:23 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include"Push_swap.h"

void	ss(int	*stack_a, int *stack_b)
{
	int	aux;

	if (stack_a[0] >= 2)
	{
		aux = stack_a[stack_a[0]];
		stack_a[stack_a[0]] = stack_a[stack_a[0] - 1];
		stack_a[stack_a[0] - 1] = aux;
	}
	if (stack_b[0] >= 2)
	{
		aux = stack_b[stack_b[0]];
		stack_b[stack_b[0]] = stack_b[stack_b[0] - 1];
		stack_b[stack_b[0] - 1] = aux;
	}
	write(1, "ss\n", 3);
}

void	rr(int *stack_a, int *stack_b)
{
	ra(stack_a);
	rb(stack_b);
	write(1, "rr\n", 3);
}

void	rrr(int *stack_a, int *stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	write(1, "rrr\n", 4);
}
