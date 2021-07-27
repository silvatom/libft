#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr_d;
	char	*ptr_s;
	int		i;

	ptr_d = (char *)dst;
	ptr_s = (char *)src;
	if (!src && !dst)
		return (0);
	if (src == dst)
		return (dst);
	if (dst > src)
	{
		i = len;
		while (i)
		{
			ptr_d[i - 1] = ptr_s[i - 1];
			i--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (ptr_d);
}
