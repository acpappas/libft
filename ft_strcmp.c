/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apappas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:41:05 by apappas           #+#    #+#             */
/*   Updated: 2019/06/06 16:01:48 by apappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (*s1 && *s2)
		if (s1[i] == s2[i])
			i++;
	return (0);
		else if(s1[i] > s2[i])
			return(s1[i] - s2[i]);
		else if(s1[i] < s2[i])
			return(s2[i] - s1[i]);
}
