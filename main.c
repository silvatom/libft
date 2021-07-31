#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include "libft.h"
#include <bsd/string.h>
#include <bsd/stdlib.h>
#include <ctype.h>
#include <unistd.h>


static void	ft_lero(unsigned int n, char *s);
int	main(void)
{
	/*void	*ptr1;
	void	*ptr2;
	char	str1[] = "antonio";
	char	str2[] = "antonio";
	char	str3[] = "bola";
	unsigned int	n;

	ptr1 = malloc(sizeof(ptr1) * 10);
	ptr2 = malloc(sizeof(ptr2) * 10);
	unsigned char	c;

	c = 126;
	printf("atoi(): %d\n", atoi(str1));
	printf("ft_atoi(): %d\n", ft_atoi(str1));
	printf("\n");
	printf("strlen(): %lu\n", strlen(str1));
	printf("ft_strlen(): %lu\n", ft_strlen(str1));
	printf("\n");
	printf("isalpha(): %d\n", isalpha(c));
	printf("ft_isalpha(): %d\n", ft_isalpha(c));
	printf("\n");
	printf("isdigit(): %d\n", isdigit(c));
	printf("ft_isdigit(): %d\n", ft_isdigit(c));
	printf("\n");
	printf("isalnum(): %d\n", isalnum(c));
	printf("ft_isalnum(): %d\n", ft_isalnum(c));
	printf("\n");
	printf("isascii(): %d\n", isascii(c));
	printf("ft_isascii(): %d\n", ft_isascii(c));
	printf("\n");
	printf("isprint(): %d\n", isprint(c));
	printf("ft_isprint(): %d\n", ft_isprint(c));
	printf("\n");
	bzero(str1+1, 1);
	printf("bzero(): %s\n", str1);
	ft_bzero(str2+1, 1);
	printf("ft_bzero(): %s\n", str2);
	printf("\n");



	strcpy(str1, "antonio");
	strcpy(str2, "antonio");
	strcpy(str3, "bola");
	printf("%s\n", str1);
	n = strlcpy(str1, str3, 6);
	printf("strlcpy():%d\n%s\n", n, str1);
	printf("%s\n", str2);
	n = ft_strlcpy(str2, str3, 5);
	printf("ft_strlcpy(): %d\n%s\n", n, str2);

	char	str1[10];
	char	str2[10];
	char	str3[5];
	strcpy(str1, "amor");
	strcpy(str2, "amor");
	strcpy(str3, "bolada");
	printf("\n");

	unsigned int	n;
	printf("%s\n", str1);
	n = strlcat(str1, str3, 11);
	printf("strlcat():%d\n%s\n", n, str1);
	char	str4[10] = "amor";
	char	str5[10] = "bolada";
	printf("%s\n", str4);
	n = ft_strlcat(str4, str5, 11);
	printf("ft_strlcat(): %d\n%s\n", n, str4);*/

	//printf("%c\n%c\n", toupper('d'), ft_toupper('d'));

	//printf("%c\n%c\n", tolower('2'), ft_tolower('2'));

	/*
	char	str3[] = "amor";
	char	str4[] = "amor"
	char	*ptr;
	ptr = ft_strchr(str3, 1);
	printf("string: %s | %s | %s\n", str3, ptr, str3);

	char	str3[6] = {-1, 'm', 'o', 'a', 'r', 'a'};
	char	str4[] = "amoara";
	int		n;
	n = strncmp(str3, str4, 10);

	printf("string: %s | %s | %d\n", str3, str4, n);
	n = ft_strncmp(str3, str4, 10);
	printf("string: %s | %s | %d\n", str3, str4, n);*/


	/*char	str3[] = "amo a amora";
	char	str4[] = "amor";

	printf("big: %s | little: %s | ret: %s\n", str3, str4, strnstr(str3, str4, 50));
	printf("big: %s | little: %s | ret: %s\n", str3, str4, ft_strnstr(str3, str4, 50));*/

	/*char	str3[] = "amo a amora";
	void	*ptr = NULL;

	memset(ptr, 48, 10);
	printf("%s\n", ptr);
	char	str4[] = "amo a amora";
	ft_memset(ptr, 48, 10);
	printf("%s\n", ptr);

	char	str3[] = "antonio";
	char	str4[] = "amor";
	char	*ptr = NULL;
	char	*ptr1 = NULL;

	memcpy(str3, ptr, 5);
	printf("%s, %s, %s, %s\n", str3, str4, ptr, ptr1);*/

	/*char	str5[100] = "12345";
	char	str6[100] = "12345";
	//char	str6[] = "amorioasdf";
	ft_memmove(str5+2, str5, 3);
	memmove(str6+2, str6, 3);
	printf("deveria ser: %s\nEsta saindo: %s\n", str5, str6);
	//printf("%p\n%p\n", &str5[0], &str5[1]);*/

	/*char	str5[10] = "antonio";
	char	str6[10] = "antonio";
	void	*ptr;

	printf("%s\n%s\n", str5, memchr(ptr, 'o', 150));
	printf("%s\n%s\n", str6, ft_memchr(ptr, 'o', 150));*/

	/*char	str5[10] = "antonio";
	char	str6[10] = "anto";

	printf("%s\n%s\n\norigignal: %d\npessoal: %d\n",
	 str5, str6, memcmp(str5, str6, 11), \
				  ft_memcmp(str5, str6, 11));*/

	/*void	*ptr1;
	void	*ptr2;

	ptr1 = calloc(5, sizeof(char));
	ptr2 = ft_calloc(5, sizeof(char));

	printf("calloc: %s\nft_calloc: %s\n", (char*)ptr1, (char*)ptr2);

	//printf("%lu\n", strlen(ptr2));
	//strcpy(ptr2, "antonio");

	//printf("calloc: %s\nft_calloc: %s\n", (char*)ptr1, (char*)ptr2);
	*/

	/*void	*ptr;
	char	frase[] = "abbxcabcabcbabLinu axcabcbacba";
	char	nome[] = " abc";

	ptr = ft_strtrim(frase, nome);
	printf("%s\n", frase);
	printf("%s\n", ptr);
	printf("%lu\n", ft_strlen(ptr));*/

	/*char	**ptr;
	char	frase[] = "antoniotomttom";
	char	nome = 't';

	ptr = ft_split(frase, nome);
	printf("%s\n", ptr[0]);
	printf("%s\n", ptr[1]);
	printf("%s\n", ptr[2]);
	printf("%s\n", ptr[3]);
	printf("%s\n", ptr[4]);
	printf("%s\n", ptr[5]);*/

	/*int n0 = -2147483648;
	int n1 = 2147483647;
	int n2 = 0;
	int	n3 = -45;



	printf("%s\n", ft_itoa(n0));
	printf("%s\n", ft_itoa(n1));
	printf("%s\n", ft_itoa(n2));
	printf("%s\n", ft_itoa(n3));

	char	ptr[] = "antonio";

	printf("%s\n", ptr);
	ft_striteri(ptr, ft_lero);

	ft_putchar_fd('', 2);
	ft_putchar_fd('\n', 2);


	char	ptr[] = "antonio";
	ft_putendl_fd(ptr, 1);*/

	ft_putnbr_fd(-2147483648, 2);
	ft_putchar_fd('\n', 2);

	return (0);
}

static void	ft_lero(unsigned int n, char *s)
{
	if (n % 2 == 0)
		s[n] -= 32;
}
