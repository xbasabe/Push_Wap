/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:17:17 by xbasabe-          #+#    #+#             */
/*   Updated: 2021/12/30 11:10:16 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

int	smallest(int *stack_a)
{
	int	index;
	int	count;

	count = 1;
	index = count;
	while (count <= stack_a[0])
	{
		if (stack_a[count] < stack_a[index])
			index = count;
		count++;
	}
	return (index);
}
