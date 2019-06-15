/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apappas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 14:56:02 by apappas           #+#    #+#             */
/*   Updated: 2019/06/13 14:56:04 by apappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**splstr;
	int	count;
	int	i;

	count = 0;
	if (!s || !c)
		return (NULL);
	count = ft_wcount(s, c);
	splstr = ((char **)malloc(sizeof(char *) * (count + 1)));
	if (splstr == NULL)
		return (NULL);
	while (i < count)
	{
		while (*s == c && *s)
			s++;
		splstr[i] = (char *)malloc(sizeof(char) * (ft_wlength(s, c) + 1));
		while (*s != c && *s)
			*splstr[i]++ = *s++;
		*splstr[i] = '\0';
		i++;
	}
	splstr[i] = '\0';
	return (splstr);
}
