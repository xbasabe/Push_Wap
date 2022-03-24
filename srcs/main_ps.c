/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ps.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:14:31 by xbasabe-          #+#    #+#             */
/*   Updated: 2022/02/08 13:12:43 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

int	main(int argc, const char **argv)
{
	int	*stack_a;
	int	*stack_a_converted;
	int	*stack_b;

	if (argc == 1)
		exit(EXIT_FAILURE);
	stack_a = init_stack_a(argc, argv);
	stack_a_converted = convert(stack_a);
	stack_b = init_stack_b(argc, argv);
	entry(stack_a);
	if (in_order(stack_a) == 1)
		select_order(stack_a_converted, stack_b);
	free(stack_a);
	free(stack_b);
	free(stack_a_converted);
	return (0);
}
