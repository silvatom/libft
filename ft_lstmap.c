#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
