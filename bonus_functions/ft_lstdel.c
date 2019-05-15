#include "../includes/libft.h"
#include <stdlib.h>

void        ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list  *temp;

	if (!alst || !del || !(*alst))
		return ;
	while (*alst)
	{
		temp = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = temp;
	}
	*alst = NULL;
}
