#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	int		len_s1;
	int		i;

	len_s1 = 0;
	while (s1[len_s1])
		len_s1++;
	dst = (char *)malloc(sizeof(char) * len_s1 + 1);
	if (!dst)
		return (0);
	i = 0;
	while (i < len_s1)
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
