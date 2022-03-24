/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 12:07:58 by xbasabe-          #+#    #+#             */
/*   Updated: 2022/02/08 13:08:20 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Push_swap.h"

int		ft_isalpha_string(char *c);
void	check_int(const char *numb);
void	free_aux(char **aux);

int	*init_stack_a(int argc, const char **argv)
{
	int	*aux_a;

	if (argc > 2)
	{
		aux_a = (int *)malloc(sizeof(int) * argc);
		reverse(argv, argc, aux_a);
	}
	if (argc == 2)
	{
		aux_a = (int *)malloc(sizeof(int) * ft_strlen(argv[1]));
		reverse_string(argv[1], aux_a);
	}
	entry(aux_a);
	return (aux_a);
}

void	reverse_string(const char *argv, int *stack_a)
{
	int		i;
	int		size;
	char	**aux;

	i = 1;
	aux = ft_split(argv, ' ');
	size = aux_len(aux) - 1;
	if (size == 1)
		first(aux[0]);
	stack_a[0] = aux_len(aux);
	while (size >= 0)
	{
		ft_isalpha_string(aux[size]);
		check_int(aux[size]);
		stack_a[i] = (int)ft_atoi(aux[size]);
		i ++;
		size --;
	}
	free_aux(aux);
}

void	free_aux(char **aux)

{
	int	size;

	size = aux_len(aux);
	while (size >= 0)
	{
		free(aux[size]);
		size--;
	}
	free(aux);
}

void	reverse(const char **stack, int size, int *stack_a)
{
	int		i;
	int		c;
	char	*alpha;

	i = 1;
	c = size - 1;
	stack_a[0] = size - 1;
	while (i < size)
	{
		alpha = (char *)stack[c];
		if (ft_isalpha_string(alpha) == 1)
		{
			write(1, "Error\n", 6);
			exit (EXIT_FAILURE);
		}
		check_int(stack[c]);
		stack_a[i++] = (int)ft_atoi(stack[c--]);
	}
}

int	ft_isalpha_string(char *str)
{
	int	c;
	int	i;

	i = ft_strlen(str);
	while (i > 0)
	{
		c = (int)str[i - 1];
		if ((c > 64 && c < 91) || (c > 96 && c < 123))
		{
			write(1, "Error\n", 6);
			exit (EXIT_FAILURE);
		}
		i--;
	}
	return (0);
}
