/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apappas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 10:07:41 by apappas           #+#    #+#             */
/*   Updated: 2019/06/14 10:08:52 by apappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*while the list exists pass the link to the function then
**set pointer to next link
*/

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	while (lst)
	{
		f(lst);
		lst = lst->next;
	}
}
