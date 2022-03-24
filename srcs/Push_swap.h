/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:18:21 by xbasabe-          #+#    #+#             */
/*   Updated: 2022/02/08 13:11:56 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdio.h> /*quitar al quitasr printf*/
# include <stdlib.h>
# include <string.h>
# include <stddef.h>
# include <fcntl.h>
# include <stdarg.h>

char	*push_swap_entry(int argc, char *argv[], int *stack_a);
int		entry(int *stack_a);
void	first(const char *argv);
void	show(int *stack_a, int *stack_b);
void	show_one(int *stack);
void	reverse(const char **stack, int argc, int *stack_a);
void	pb(int	*stack_a, int *stack_b);
void	pa(int	*stack_a, int *stack_b);
void	sa(int	*stack_a);
void	sb(int	*stack_b);
void	ss(int	*stack_a, int *stack_b);
void	ra(int *stack_a);
void	rb(int *stack_b);
void	rr(int *stack_a, int *stack_b);
void	rra(int *stack_a);
void	rrb(int *stack_b);
void	rrr(int *stack_a, int *stack_b);
void	order_moves(int *stack_a, int *stack_b, int in_lef, int in_rig);
void	order_3(int *stack_a, int *stack_b);
void	lean_3(int *stack_a);
void	order_5_down(int *stack_a, int *stack_b);
void	order_up(int *stack_a, int *stack_b);
void	order_short(int *stack_a, int *stack_b);
int		in_order(int *stack_a);
void	lean_order(int *stack_a, int *stack_b);
void	unstack(int *stack_a, int *stack_b);
int		smallest(int *stack_a);
void	direct(const char **stack, int size, int *stack_a);
void	direct_string(const char *argv, int *stack_a);
int		bigger(int *stack_a);
//static int	ft_integer(const char *str);
int		ft_atoi(const char *str);
int		ft_strlen(const char *str);
char	**ft_split(const char *s, char c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_digit(char c);
void	preorder(int *stack_a, int *stack_b);
void	lean_5(int	*stack_a, int *stack_b);
void	init_stacks(int *stack_a, int *stack_b, int argc, const char **argv);
void	select_order(int *stack_a, int *stack_b);
void	lean_up(int *stack_a, int *stack_b);
void	reverse_string(const char *argv, int *stack_a);
int		aux_len(char **str);
int		*indexing(int	*stack_a);
int		*init_stack_a(int argc, const char **argv);
int		*init_stack_b(int argc, const char **argv);
void	lean_2(int *stack_a);
void	ft_strintcpy(int *dst, int *src, int size);
int		**do_chunks(int *stack_a, int *stack_b, int chunk);
void	unstack_chunk(int *stack_a, int *stack_b);
int		*convert(int	*stack_a);
int		*order_aux(int	*stack_a);
int		biggest(int *stack_a);
void	ft_strintcpy_old(int *dst, int *src, int size);
int		*order(int	*stack_a);
void	pb_chunk(int *stack_a, int *stack_b, int size, int **chunk_index);
void	lean_chunks(int *stack_a, int *stack_b, int chunk);
void	move_indexed(int *stack_a, int *stack_b, int upper, int lower);
void	v1_chunks(int *stack_a, int *stack_b, int chunk);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	lean_chunks(int *stack_a, int *stack_b, int chunks);
int		ft_atoi(const char *str);
int		ft_strlen(const char *str);
int		aux_len(char **str);
void	ft_strintcpy(int *dst, int *stack_a, int size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	check_int(const char *numb);
void	check_max_min_srcs(long numb);
int		ft_isalpha_string(char *str);

#endif