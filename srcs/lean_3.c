/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lean_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:23:40 by xbasabe-          #+#    #+#             */
/*   Updated: 2022/01/26 12:14:23 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

void	lean_3(int *stack_a)
{
	if (stack_a[1] == 3 && stack_a[2] == 1 && stack_a[3] == 2)
		sa(stack_a);
	else if (stack_a[1] == 1 && stack_a[2] == 2 && stack_a[3] == 3)
	{
		sa(stack_a);
		rra(stack_a);
	}	
	else if (stack_a[1] == 2 && stack_a[2] == 1 && stack_a[3] == 3)
		ra(stack_a);
	else if (stack_a[1] == 2 && stack_a[2] == 3 && stack_a[3] == 1)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (stack_a[1] == 1 && stack_a[2] == 3 && stack_a[3] == 2)
		rra(stack_a);
}
