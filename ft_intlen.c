/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apappas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 11:24:23 by apappas           #+#    #+#             */
/*   Updated: 2019/06/27 11:36:36 by apappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int c)
{
	int i;

	i = 0;
	if (c < 0)
	{
		c *= -1;
		i++;
	}
	while (c != 0)
	{
		c /= 10;
		i++;
	}
	return (i);
}
