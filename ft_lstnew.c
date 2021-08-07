#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nelem;

	nelem = malloc(sizeof(t_list));
	if (!nelem)
		return (0);
	nelem->content = content;
	nelem->next = NULL;

	return (nelem);
}
