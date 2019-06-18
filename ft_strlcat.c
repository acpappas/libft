/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apappas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 08:08:16 by apappas           #+#    #+#             */
/*   Updated: 2019/06/12 08:46:41 by apappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	len = 0;
	i = 0;
	j = 0;
	while (dst[i] && len < dstsize)
	{
		i++;
		len++;
	}
	while (src[j] && len + 1 < dstsize)
	{
		dst[len] = src[j];
		j++;
		len++;
	}
	if (len < dstsize)
	dst[len] = '\0';
	return(i + ft_strlen(src));
}
