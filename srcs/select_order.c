/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_order.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 12:30:55 by xbasabe-          #+#    #+#             */
/*   Updated: 2022/02/02 12:38:52 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

void	select_order(int *stack_a, int *stack_b)
{
	if (stack_a[0] == 2)
		lean_2(stack_a);
	else if (stack_a[0] == 3)
		lean_3(stack_a);
	else if (stack_a[0] > 3 && stack_a[0] <= 5)
		lean_5(stack_a, stack_b);
	else if (stack_a[0] > 5 && stack_a[0] < 500)
		lean_chunks(stack_a, stack_b, 5);
	else if (stack_a[0] > 499)
		lean_chunks(stack_a, stack_b, 13);
}
