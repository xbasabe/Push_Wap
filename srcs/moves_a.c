/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:17:12 by xbasabe-          #+#    #+#             */
/*   Updated: 2021/12/30 11:25:31 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include"Push_swap.h"

void	pa(int	*stack_a, int *stack_b)
{
	if (stack_b[0] != 0)
	{
		(stack_a[0])++;
		stack_a[stack_a[0]] = stack_b[stack_b[0]];
		stack_b[stack_b[0]] = 0;
		(stack_b[0])--;
	}
	write(1, "pa\n", 3);
}

void	show(int *stack_a, int *stack_b)
{
	int	i;
	int	j;

	j = stack_b[0];
	i = stack_a[0];
	while (j > 0 || i > 0)
	{
		if (stack_a[i] == 0 && i < stack_a[0])
			printf("  0");
		else
			printf("  a[%d]%d", i, stack_a[i]);
		if (stack_b[i] == 0 && i < stack_b[0])
			printf("        \n");
		else
			printf("        b[%d]%d\n", i, stack_b[i]);
		i--;
		j--;
	}
	printf(" -------   -------  \n");
	printf(" stack a   stack b\n");
}

void	sa(int	*stack_a)
{
	int	aux;

	if (stack_a[0] >= 2)
	{
		aux = stack_a[stack_a[0]];
		stack_a[stack_a[0]] = stack_a[stack_a[0] - 1];
		stack_a[stack_a[0] - 1] = aux;
	}
	write(1, "sa\n", 3);
}

void	ra(int *stack_a)
{
	int	first;
	int	i;

	i = stack_a[0];
	first = stack_a[stack_a[0]];
	while (i > 1)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[1] = first;
	write(1, "ra\n", 3);
}

void	rra(int *stack_a)
{
	int	last;
	int	i;

	i = 1;
	last = stack_a[1];
	while (i < stack_a[0])
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[i] = last;
	write(1, "rra\n", 4);
}
