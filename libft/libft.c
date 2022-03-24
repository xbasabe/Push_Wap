/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbasabe- <xbasabe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:47:29 by xbasabe-          #+#    #+#             */
/*   Updated: 2022/02/07 11:09:54 by xbasabe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	char	*csrc;

	if (dst == NULL || src == NULL)
		return (0);
	i = 0;
	csrc = (char *)src;
	if (size == 0)
		return (ft_strlen(csrc));
	while ((i < (size) - 1) && csrc[i] != '\0')
	{
		dst[i] = csrc [i];
		i++;
	}
	if (size > i)
		dst[i] = '\0';
	return (ft_strlen(csrc));
}
