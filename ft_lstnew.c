/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apappas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:45:03 by apappas           #+#    #+#             */
/*   Updated: 2019/06/14 10:02:49 by apappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *head = (t_list*)malloc(sizeof(node));
	if (head == NULL)
		return (NULL);

	if (content == NULL)
	{
		head.content = NULL;
		head.content_size = 0; 
	}
	else
	{
		head.content = content;
		head.content_size = content_size;
	}
	head->next = NULL;
	return (head);
}