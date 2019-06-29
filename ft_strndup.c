/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apappas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 08:15:55 by apappas           #+#    #+#             */
/*   Updated: 2019/06/29 09:12:22 by apappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*dup;
	size_t	len;

	n += 1;
	len = ft_strlen(s1) + 1;
	if (len > n)
		len = n;
	dup = (char *)ft_memalloc(len);
	if (dup == 0)
		return (NULL);
		if (len == n)
		len = (n - 1);
	ft_memcpy(dup, s, len);
	return (dup);
}

