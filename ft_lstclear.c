#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*delet;

	if (!lst)
		return ;
	tmp = *lst;
	while (tmp)
	{
		del(tmp->content);
		delet = tmp;
		tmp = tmp->next;
		free(delet);
	}
}
