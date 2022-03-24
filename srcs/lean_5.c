/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lean_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 10:36:47 by xbasabe-          #+#    #+#             */
/*   Updated: 2022/02/02 14:08:28 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

void	jump(int *stack_a, int *stack_b);

void	lean_5(int	*stack_a, int *stack_b)
{
	int	c;
	int	*convert_a;

	jump(stack_a, stack_b);
	convert_a = convert(stack_a);
	lean_3(convert_a);
	c = stack_b[0];
	while (c > 0)
	{
		write(1, "pa\n", 3);
		c--;
	}
	free (convert_a);
}

void	jump(int *stack_a, int *stack_b)
{
	int	c;
	int	to_top;
	int	to_down;

	c = stack_a[0];
	while (c > 3)
	{
		to_top = stack_a[0] - smallest(stack_a);
		to_down = smallest(stack_a);
		if (to_top <= (stack_a[0] / 2))
			while (to_top-- > 0)
				ra(stack_a);
		else if (to_top > (stack_a[0] / 2))
			while (to_down-- > 0)
				rra(stack_a);
		pb(stack_a, stack_b);
		c--;
	}
}

/*
void	lean_5(int	*stack_a, int *stack_b)
{
	int	c;
	int	to_top;
	int	to_down;

	c = stack_a[0];
	while (c > 3)
	{
		to_top = stack_a[0] - smallest(stack_a);
		to_down = smallest(stack_a);
		if (to_top <= (stack_a[0] / 2))
			while (to_top-- > 0)
				ra(stack_a);
		else if (to_top > (stack_a[0] / 2))
			while (to_down-- > 0)
				rra(stack_a);
		pb(stack_a, stack_b);
		c--;
	}
	lean_3(convert(stack_a));
	c = stack_b[0];
	while (c > 0)
	{
		write(1, "pa\n", 3);
		c--;
	}
}
*/