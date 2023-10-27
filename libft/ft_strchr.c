/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarakur <ykarakur@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:00:42 by ykarakur          #+#    #+#             */
/*   Updated: 2023/10/14 16:03:17 by ykarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int k)
{
	int	i;

	i = 0;
	while (s[i] != (char)k)
	{
		if (!s[i])
			return (0);
		i++;
	}
	return ((char *)(s + i));
}
