/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apappas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 11:59:12 by apappas           #+#    #+#             */
/*   Updated: 2019/06/28 12:10:29 by apappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstfind(t_list **alst, void *key)
{
	t_list	*temp;

	temp = *alst;
	if (*alst == NULL)
		return (NULL);
	while (temp->content != key)
	{
		if (temp->next == NULL)
			return (NULL);
		else
			temp = temp->next;
	}
	return (temp);
}
