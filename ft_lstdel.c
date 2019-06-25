#include "libft.h"

/*declare a pointer to iterate down the list,
**set temp to point at head of list,
**point the head pointer to the next node,
**pass content and content size of temp to the function del.
**free temp, the first link is now deleted,
**set temp to the pointer to the head of the list'
**repeat while the list exists,
**set head pointer to NULL
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;

	temp = *alst;
	while (*alst)
	{
		*alst = (*alst)->next;
		del(temp->content, temp->content_size);
		free(temp);
		temp = *alst;
	}
	*alst = NULL;
}
