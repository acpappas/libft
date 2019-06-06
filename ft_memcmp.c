/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apappas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:16:42 by apappas           #+#    #+#             */
/*   Updated: 2019/06/06 13:33:02 by apappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*sa;
	const unsigned char	*sb;
	
	sa = (const unsigned char *)s1;
	sb = (const unsigned char *)s2;
	while (*sa == *sb && n > 0)
	{
		sa++;
		sb++;
		n--;
	}
	if (*sa != *sb)
		return(*sa - *sb);
	else
	return(0);
}
