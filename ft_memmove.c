/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apappas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:11:49 by apappas           #+#    #+#             */
/*   Updated: 2019/05/29 13:29:26 by apappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *srcptr;
	char *destptr;

	*srcptr = (char *)src;
	*destptr = (char *)dest;
	if (destptr < srcptr)
		while (n)
		{
			*destptr = *srcptr;
			*destptr++;
			*srcptr++;
			n--;
		}
	else if (srcptr < destptr && destptr < srcptr + n)
	{
		srcptr += (n + 1);
		destptr += (n + 1);
		while (n--)
		{
			*destptr = *srcptr;
			*destptr--;
			*srcptr--;
		}
	}
	return (dest);
}
