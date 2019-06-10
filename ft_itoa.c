/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apappas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 09:52:44 by apappas           #+#    #+#             */
/*   Updated: 2019/06/10 12:05:57 by apappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*res;
	size_t	i;
	int		neg;

	neg = 0;
	i = ft_intlen(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return ("0");
	res = (ft_strnew(i));
	if (!res)
		return (NULL);
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	while (i)
	{
		res[--i] = (n % 10) + '0';
		n /= 10;
	}
	if (neg)
		res[0] = '-';
	return (res);
}
