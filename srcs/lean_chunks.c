/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lean_chunks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:23:40 by xbasabe-          #+#    #+#             */
/*   Updated: 2022/01/26 12:58:04 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

int	ft_lower(int *stack_a, int count, int size);
int	ft_upper(int *stack_a, int count, int size);

void	lean_chunks(int *stack_a, int *stack_b, int chunks)
{
	int	i;
	int	count;
	int	upper;
	int	lower;
	int	size;

	count = 1;
	size = stack_a[0] / chunks;
	while (count < chunks || stack_a[0] > 0)
	{
		i = 0;
		while (i < size)
		{
			lower = ft_lower(stack_a, count, size);
			upper = ft_upper(stack_a, count, size);
			if (upper == 0 && lower == 0)
				break ;
			move_indexed(stack_a, stack_b, upper, lower);
			i++;
		}
		count++;
	}
	unstack_chunk(stack_a, stack_b);
}

int	ft_lower(int *stack_a, int count, int size)
{
	int	c;
	int	lower;

	c = 1;
	lower = 0;
	while (c++ < stack_a[0])
	{
		if (stack_a[c] < size * count)
		{
			lower = c;
			break ;
		}
	}
	return (lower);
}

int	ft_upper(int *stack_a, int count, int size)
{
	int	c;
	int	upper;

	c = stack_a[0];
	upper = stack_a[0];
	while (c > 0)
	{
		if (stack_a[c] < size * count)
		{
			upper = c;
			break ;
		}
		c--;
	}
	return (upper);
}
