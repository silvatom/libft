#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dst_s;
	unsigned int	src_s;

	dst_s = 0;
	src_s = 0;
	i = 0;
	while (src[src_s])
		src_s++;
	if (dstsize == 0)
		return (src_s);
	while (dst_s < dstsize && dst[dst_s])
		dst_s++;
	if (dstsize <= dst_s)
		return (dstsize + src_s);
	i = dst_s;
	j = 0;
	while (i < dstsize && src[j])
	{
		dst[i++] = src[j];
		j++;
	}
	dst[i] = '\0';
	return (src_s + dst_s);
}
