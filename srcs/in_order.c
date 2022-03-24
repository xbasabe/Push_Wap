/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_order.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:02:43 by xbasabe-          #+#    #+#             */
/*   Updated: 2022/02/08 12:33:08 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

int	in_order(int *stack_a)
{
	int	i;

	i = 1;
	while (i < stack_a[0])
	{
		if (stack_a[i] < stack_a[i + 1])
			return (1);
		i++;
	}
	return (0);
}

void	check_max_min_srcs(long numb)
{
	printf("check srcs '%ld'", numb);
	if (numb < INT32_MIN || numb > INT32_MAX)
	{
		write(1, "ErrorC\n", 7);
		exit(EXIT_FAILURE);
	}	
}
