/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:05:28 by xbasabe-          #+#    #+#             */
/*   Updated: 2022/02/21 11:06:31 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include"Push_swap.h"

void	first(const char *argv)
{
	int			c;
	const char	*entries;
	long		check_size;

	c = (int)argv[0];
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		write(1, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	entries = argv;
	ft_isalpha_string((char *)entries);
	check_int((char *)entries);
	check_size = (long)(argv);
}

void	check_int(const char *numb)
{
	if (ft_strlen(numb) > 11)
	{
		write(1, "Error\n", 6);
		exit (EXIT_FAILURE);
	}
	if (numb[0] == '-' && ft_strlen(numb) == 11 && numb[10] > '8')
	{
		write(1, "Error\n", 6);
		exit (EXIT_FAILURE);
	}
	if (ft_strlen(numb) == 11 && numb[0] != '-')
	{
		write(1, "Error\n", 6);
		exit (EXIT_FAILURE);
	}	
	if (numb[0] != '-' && ft_strlen(numb) == 10 && numb[9] > '7')
	{
		write(1, "Error\n", 6);
		exit (EXIT_FAILURE);
	}
}
