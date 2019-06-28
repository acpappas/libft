/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddlast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apappas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 12:27:14 by apappas           #+#    #+#             */
/*   Updated: 2019/06/28 12:37:06 by apappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	ft_lstaddlast(t_list **alst, void const *content, size_t content_size)
{
	t_list	*new;
	t_list	*temp;

	new = ft_lstnew(content, content_size);
	if (*alst == NULL)
		*alst = new;
	else
	{
		temp = *alst;
		while (temp->next != NULL)
			temp = temp->next;
	}
	temp->next = new;
	return (*alst);
}

