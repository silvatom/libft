#include "libft.h"

static int	ft_wc(char *str, char c);

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		nstrs;
	int		i;

	if (!s)
		return (0);
	nstrs = ft_wc((char *)s, c);
	tab = malloc(nstrs * sizeof(char *));
	i = 0;
	while (i < nstrs)
	{
		tab[i] = malloc((7+1) * sizeof(char));
		ft_strlcpy(tab[i], "antonio", 8);
		i++;
	}
	return (tab);
}

static int	ft_wc(char *str, char c)
{
	int	count;
	int i;

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
