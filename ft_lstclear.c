#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*old_elem;

	if (!del)
		return ;
	tmp = *lst;
	while (tmp)
	{
		del(tmp->content);
		old_elem = tmp;
		tmp = old_elem->next;
		free(old_elem);
	}
	*lst = NULL;
}
