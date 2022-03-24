/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 12:07:58 by xbasabe-          #+#    #+#             */
/*   Updated: 2022/02/02 12:43:13 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

int	*init_stack_b(int argc, const char **argv)
{
	int	*aux_b;

	if (argc > 2)
		aux_b = (int *)malloc(sizeof(int) * argc);
	if (argc <= 2)
		aux_b = (int *)malloc(sizeof(int) * ft_strlen(argv[1]));
	aux_b[0] = 0;
	return (aux_b);
}
