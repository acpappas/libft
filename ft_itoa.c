/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apappas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 09:52:44 by apappas           #+#    #+#             */
/*   Updated: 2019/06/04 09:53:30 by apappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*res;
	int	i;

	i = 0;
if(n)
{
	i = ft_intlen(n);

	*res = ((char *)malloc(sizeof((char)(i + 1))));
}
return (res);
}
