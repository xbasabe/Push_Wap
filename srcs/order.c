/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:20:37 by xbasabe-          #+#    #+#             */
/*   Updated: 2022/01/26 12:12:32 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

int	*order(int	*stack_a)
{
	int	*ordered;
	int	index;
	int	count;
	int	temp;

	ordered = (int *)malloc(sizeof(int) * (stack_a[0] + 1));
	ft_strintcpy(ordered, stack_a, (stack_a[0] + 1));
	count = 0;
	index = 0;
	while (++index < (stack_a[0] + 1))
	{
		while (++count < (stack_a[0] + 1))
		{
			if (ordered[count] > ordered[index])
			{
				temp = ordered [count];
				ordered[count] = ordered[index];
				ordered[index] = temp;
			}
		}
		count = 0;
	}
	ordered[0] = stack_a[0];
	return (ordered);
}
