/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarakur <ykarakur@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:34:08 by ykarakur          #+#    #+#             */
/*   Updated: 2023/10/20 12:34:42 by ykarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*y;

	y = malloc(count * size);
	if (y == NULL)
		return (0);
	ft_bzero(y, count * size);
	return (y);
}
