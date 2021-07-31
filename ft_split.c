#include "libft.h"

static int	ft_wc(char *str, char c);

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		nstrs;
	int		i;
	int		strlen;

	if (!s)
		return (0);
	nstrs = ft_wc((char *)s, c);
	tab = malloc(nstrs * sizeof(char *));
	if (!tab)
		return (0);
	i = 0;
	while (i < nstrs)
	{
		while (*s && *s == c)
			s++;
		strlen = 0;
		while (s[strlen] && s[strlen] != c)
			strlen++;
		tab[i] = ft_substr(s, 0, strlen);
		// free
		s += strlen /* +1 */;
		i++;
	}
	tab[i] = 0;
	return (tab);
}

static int	ft_wc(char *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
			count++;
		while (str[i] != c && str[i + 1])
			i++;
		i++;
	}
	return (count);
}
