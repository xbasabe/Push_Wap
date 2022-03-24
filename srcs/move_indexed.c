/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_indexed.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:23:40 by xbasabe-          #+#    #+#             */
/*   Updated: 2022/01/24 12:05:08 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

void	move_indexed(int *stack_a, int *stack_b, int upper, int lower)
{
	int	to_top;
	int	to_down;

	to_top = stack_a[0] - upper;
	to_down = lower;
	if (to_top <= (stack_b[0] / 2))
	{
		while (to_top-- > 0)
			ra(stack_a);
	}		
	else if (to_top > (stack_b[0] / 2))
	{
		while (to_down-- > 0)
			rra(stack_a);
	}		
	pb(stack_a, stack_b);
}
