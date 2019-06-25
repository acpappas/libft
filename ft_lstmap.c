/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apappas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 10:09:03 by apappas           #+#    #+#             */
/*   Updated: 2019/06/14 10:10:23 by apappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*declare two pointers one to iterate down the list and
**apply the function and one to point to the head of the list
**pass the first link to the function, set head to point to 
**this new link, set lst to next link, while the list exists
**next link of passed list is passed to the function
**set lst to next link, set fresh list to next link.
**Then return pointer to first link of fresh list.
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fresh;
	t_list	*head;

	if (!lst || !f)
		return (NULL);
	fresh = f(lst);
	if (!fresh)
		return (NULL);
	head = fresh;
	lst = lst->next;
	while (lst)
	{
		fresh->next = f(lst);
		lst = lst->next;
		fresh = fresh->next;
	}
	return (head);
}
