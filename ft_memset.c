/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apappas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:06:12 by apappas           #+#    #+#             */
/*   Updated: 2019/05/29 14:15:02 by apappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr;

	*ptr = b;
	while (len > 0)
	{
		*ptr = (unsigned char)c;
		len--;
		*ptr++;
	}
	return (b);
}
