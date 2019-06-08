/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apappas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 11:44:57 by apappas           #+#    #+#             */
/*   Updated: 2019/06/06 13:19:33 by apappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	unsigned char	chr;
	unsigned char	*src;

	src = (unsigned char*)s; 
	chr = (unsigned char)c;
	i = 0;
	while (n)
	{
		if (src[i] == chr)
			return (src + i);
		i++;
		n--;
	}
	return(NULL);
}
	
		
