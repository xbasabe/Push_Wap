/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entry.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:05:28 by xbasabe-          #+#    #+#             */
/*   Updated: 2022/02/08 11:30:59 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include"Push_swap.h"

int	entry(int *stack_a)
{
	int	i;
	int	j;

	i = 1;
	while (i <= stack_a[0])
	{
		j = i + 1;
		while (j <= stack_a[0])
		{
			if (stack_a[i] == stack_a[j])
			{
				write(1, "Error\n", 6);
				exit(EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
	return (0);
}
