/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apappas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 14:20:31 by apappas           #+#    #+#             */
/*   Updated: 2019/06/06 13:45:09 by apappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if(dest)
		while (src != '\0')
			i++;
	while(dest != '\0')
	{
		i++;
		src[i] = dest[j];
		j++;
	}
	src[i + 1] = '\0';
return(src);
}
