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

void *memchr(const void *s, int c, size_t n)
{
	char		*ptr;
	size_t		i;
	char		chr;
	unsigned char* src;

	src = (unsigned char*)s; 
	chr = (unsigned char)c;
	ptr = 0;
	i =	0;
	while (src[i] != chr && i != n)
		i++;
		ptr++;
	if (src[i] == chr)
		return(ptr);
	else
	return(NULL);
}
	
		
