#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;
	char	*lst_occ;

	ptr = (char *)s;
	lst_occ = 0;
	i = 0;
	while (ptr[i])
	{
		if (ptr[i] == c)
			lst_occ = &ptr[i];
		i++;
	}
	if (c == ptr[i])
		return (ptr + i);
	return (lst_occ);
}
