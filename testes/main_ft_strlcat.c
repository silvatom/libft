#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"

int	main(void)
{
	int	n;
	size_t	ret;
	char	str1[10];
	char	str2[10];
	char	str3[10];
	strcpy(str1, "amor\0");
	strcpy(str3, "bolada\0");

	/*n = 0;
	printf("dst: %s\t | src: %s\n", str1, str3);
	printf("size: %d | strlcat: %zu | %s\n", n, ret = strlcat(str1, str3, n), str1);
	ret = ft_strlcat(str1, str3, n);
	printf("size: %d | ft_strlcat: %lu | %s\n", n, ret, str1);
	n++;
	strcpy(str1, "amor");
	strcpy(str3, "bolada");
	printf("dst: %s\t | src: %s\n", str1, str3);
	printf("size: %d | strlcat: %zu | %s\n",  n, ret = strlcat(str1, str3, n), str1);
	ret = ft_strlcat(str1, str3, n);
	printf("size: %d | ft_strlcat: %lu | %s\n", n, ret, str1);
	n++;
	strcpy(str1, "amor");
	strcpy(str3, "bolada");
	printf("dst: %s\t | src: %s\n", str1, str3);
	printf("size: %d | strlcat: %zu | %s\n",  n, ret = strlcat(str1, str3, n), str1);
	ret = ft_strlcat(str1, str3, n);
	printf("size: %d | ft_strlcat: %lu | %s\n", n, ret, str1);
	n++;
	strcpy(str1, "amor");
	strcpy(str3, "bolada");
	printf("dst: %s\t | src: %s\n", str1, str3);
	printf("size: %d | strlcat: %zu | %s\n",  n, ret = strlcat(str1, str3, n), str1);
	ret = ft_strlcat(str1, str3, n);
	printf("size: %d | ft_strlcat: %lu | %s\n", n, ret, str1);
	n++;
	strcpy(str1, "amor");
	strcpy(str3, "bolada");
	printf("dst: %s\t | src: %s\n", str1, str3);
	printf("size: %d | strlcat: %zu | %s\n",  n, ret = strlcat(str1, str3, n), str1);
	ret = ft_strlcat(str1, str3, n);
	printf("size: %d | ft_strlcat: %lu | %s\n", n, ret, str1);
	n++;
	strcpy(str1, "amor");
	strcpy(str3, "bolada");
	printf("dst: %s\t | src: %s\n", str1, str3);
	printf("size: %d | strlcat: %zu | %s\n",  n, ret = strlcat(str1, str3, n), str1);
	ret = ft_strlcat(str1, str3, n);
	printf("size: %d | ft_strlcat: %lu| %s\n", n, ret, str1);
	n++;
	strcpy(str1, "amor");
	strcpy(str3, "bolada");
	printf("dst: %s\t | src: %s\n", str1, str3);
	printf("size: %d | strlcat: %zu | %s\n",  n, ret = strlcat(str1, str3, n), str1);
	ret = ft_strlcat(str1, str3, n);
	printf("size: %d | ft_strlcat: %lu | %s\n", n, ret, str1);
	n++;
	strcpy(str1, "amor");
	strcpy(str3, "bolada");
	printf("dst: %s\t | src: %s\n", str1, str3);
	printf("size: %d | strlcat: %zu | %s\n",  n, ret = strlcat(str1, str3, n), str1);
	ret = ft_strlcat(str1, str3, n);
	printf("size: %d | ft_strlcat: %lu | %s\n", n, ret, str1);
	n++;
	strcpy(str1, "amor");
	strcpy(str3, "bolada");
	printf("dst: %s\t | src: %s\n", str1, str3);
	printf("size: %d | strlcat: %zu | %s\n",  n, ret = strlcat(str1, str3, n), str1);
	ret = ft_strlcat(str1, str3, n);
	printf("size: %d | ft_strlcat: %lu | %s\n", n, ret, str1);
	n++;
	strcpy(str1, "amor");
	strcpy(str3, "bolada");
	printf("dst: %s\t | src: %s\n", str1, str3);
	printf("size: %d | strlcat: %zu | %s\n",  n, ret = strlcat(str1, str3, n), str1);
	ret = ft_strlcat(str1, str3, n);
	printf("size: %d | ft_strlcat: %lu | %s\n", n, ret, str1);*/
	n = 15;
	//strcpy(str1, "amor");
	//strcpy(str3, "bolada");
	printf("dst: %s\t | src: %s\n", str1, str3);
	printf("size: %d | strlcat: %zu | %s\n",  n, ret = strlcat(str1, str3, n), str1);
	strcpy(str1, "amor");
	ret = ft_strlcat(str1, str3, n);
	printf("size: %d | ft_strlcat: %zu | %s\n", n, ret , str1);

	//printf("%lu\n%s\n", ft_strlcat(str1, str3, 25), str1);
	//printf("%lu\n%s\n", strlcat(str1, str3, 25), str1);
	return (0);
}
