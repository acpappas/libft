/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apappas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 11:44:57 by apappas           #+#    #+#             */
/*   Updated: 2019/06/06 09:10:42 by apappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *memchr(const void *s, int c, size_t n)
{
	c = (unsigned char)c;
	size_t	i;
	char *ptr;

	ptr = 0;
	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
		ptr++;
	if (s[i] == c)
		return(ptr);
	else
		ptr = '\0';
	return(ptr);
}
	
		
