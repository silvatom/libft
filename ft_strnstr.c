#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lit_s;
	unsigned int	count;

	lit_s = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (needle[lit_s])
		lit_s++;
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		count = 0;
		while (haystack[i + j] == needle[j] && j < lit_s)
		{
			j++;
			count++;
		}
		if (count == lit_s)
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
