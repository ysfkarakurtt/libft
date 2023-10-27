/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarakur <ykarakur@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:23:26 by ykarakur          #+#    #+#             */
/*   Updated: 2023/10/14 18:23:30 by ykarakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	k;
	int	a;
	int	n;

	k = 0;
	a = 0;
	n = 1;
	while ((str[k] == 32) || (str[k] >= 9 && str[k] <= 13))
		k++;
	if (str[k] == '-' || str[k] == '+')
	{
		if (str[k] == '-')
			n *= -1;
		k++;
	}
	while (str[k] >= '0' && str[k] <= '9')
	{
		a = (str[k] - '0') + (a * 10);
		k++;
	}
	return (n * a);
}
