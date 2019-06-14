/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcount.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apappas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 14:56:13 by apappas           #+#    #+#             */
/*   Updated: 2019/06/13 14:56:22 by apappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wcount(const char *str, char delim)
{
	int count;

	count = 0;
	while (*str)
	{
	while (*str == delim)
		str++;
	if (*str != delim)
	{
		count++;
		while (*str != delim && *str)
		str++;
	}
	}
	return (count);
}
