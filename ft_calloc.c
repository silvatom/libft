#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ret;
	int		i;

	ret = malloc(count * size);
	if (!ret)
		return (NULL);
	i = 0;
	while (i < count)
	{
		ret[i] = 0;
		i++;
	}
	return ((void *)ret);
}
