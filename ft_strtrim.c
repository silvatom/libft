#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len_tmp;

	if (!s1 || *set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len_tmp = ft_strlen(s1);
	while (len_tmp && ft_strchr(set, s1[len_tmp]))
		len_tmp--;
	return (ft_substr(s1, 0, len_tmp + 1));
}
