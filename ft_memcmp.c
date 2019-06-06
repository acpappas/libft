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

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = 0;
	while (sa[i] == sb[i] && i < n)
		i++;
	if (sa == sb)
		return(0);
	else if (sa[i] < sb[i])
		return(-1);
	else if (sa[i] > sb[i])
		return(1);
}
