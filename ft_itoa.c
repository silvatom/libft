#include "libft.h"

static int	ft_nlen(int n);
char		*ft_alloc_nstr(int n, int nlen);

char	*ft_itoa(int n)
{
	char	*str;
	int		nlen;

	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		return ("0");
	nlen = ft_nlen(n);
	str = ft_alloc_nstr(n, nlen);
	if (n < 0)
	{
		str[0] = '-';
		nlen++;
		n *= (-1);
	}
	str[nlen] = '\0';
	while (n)
	{
		str[--nlen] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

static int	ft_nlen(int n)
{
	int			len;
	long int	tmpn;

	if (n == -2147483648)
		return (10);
	if (n < 0)
		n = n * (-1);
	len = 0;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_alloc_nstr(int n, int nlen)
{
	char	*ptr;

	if (n < 0)
		ptr = (char *)malloc(nlen + 1 + 1);
	else
		ptr = (char *)malloc(nlen + 1);
	if (!ptr)
		return (NULL);
	return (ptr);
}
