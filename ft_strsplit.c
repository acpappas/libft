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
	splstrs = ((char **)malloc(sizeof(char *) * (count + 1)));
	if (splstrs == NULL)
		return (NULL);
	while (i < count)
	{
		
