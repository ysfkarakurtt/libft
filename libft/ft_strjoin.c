/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarakur <ykarakur@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:28:15 by ykarakur          #+#    #+#             */
/*   Updated: 2023/10/20 13:28:33 by ykarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	first;
	size_t	total;

	first = ft_strlen(s1) + 1;
	total = ft_strlen(s2) + first;
	new = (char *)malloc(total * sizeof(char));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1, first);
	ft_strlcat(new, s2, total);
	return (new);
}
