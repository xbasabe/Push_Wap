/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unstack_chunk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:23:40 by xbasabe-          #+#    #+#             */
/*   Updated: 2022/01/27 13:29:46 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

void	unstack_chunk(int *stack_a, int *stack_b)
{
	int	to_top;
	int	to_down;
	int	j;

	j = stack_b[0];
	while (j > 0)
	{
		to_top = stack_b[0] - biggest(stack_b);
		to_down = biggest(stack_b);
		if (to_top <= (stack_b[0] / 2))
			while (to_top-- > 0)
				rb(stack_b);
		else if (to_top > (stack_b[0] / 2))
			while (to_down-- > 0)
				rrb(stack_b);
		pa(stack_a, stack_b);
		j--;
	}
}
