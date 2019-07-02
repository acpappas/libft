/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createtestlist.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apappas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 10:28:56 by apappas           #+#    #+#             */
/*   Updated: 2019/07/02 10:41:05 by apappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	ft_createtestlist(void const *content, size_t content_size, size_t n)
{
	t_list *head;
	size_t	i;
	t_list	*temp;

	if (!n)
		return (NULL);
	if (!(head = (t_list*)ft_memalloc(sizeof(t_list * n))))
		return (NULL);
	temp = head;
	if (content == NULL)
	{
		head->content = NULL;
		head->content_size = 0;
	}
	else
	{
		while (n > i)
		{
			head->content = ft_memalloc(content_size);
			head->content = ft_memcpy(head->content, content, content_size);
			head->content_size = content_size;
			head = head->next
			i++;
		}
	}
	head->next = NULL;
	return (temp);
}
