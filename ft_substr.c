#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (0);
	subs = (char *)malloc(sizeof(char) * (len + 1));
	if (!subs)
		return (0);
	s_len = ft_strlen(s);
	if (s_len < start)
	{
		subs[0] = '\0';
		return (subs);
	}
	i = 0;
	while (i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}
