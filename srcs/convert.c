/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:20:37 by xbasabe-          #+#    #+#             */
/*   Updated: 2022/02/03 11:07:45 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

int	*convert(int	*stack_a)
{
	int	*converted;
	int	*ordered;
	int	c;
	int	i;

	converted = (int *)malloc(sizeof(int) * (stack_a[0] + 1));
	ordered = order(stack_a);
	c = 0;
	i = 1;
	while (++c <= stack_a[0])
	{
		while (i <= stack_a[0])
		{
			if (ordered[i] == stack_a[c])
			{
				converted[c] = i;
				break ;
			}
			i++;
		}
		i = 1;
	}
	converted[0] = stack_a[0];
	free(ordered);
	return (converted);
}
