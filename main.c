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

/* welton header */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <time.h>

#define BHRED "\e[1;91m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define reset "\e[0m"
/* end */

void	ft_print_result(char const *s);
static void		iter(unsigned int i, char *c);

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
	printf("ft_strlcpy(): %d\n%s\n", n, str2);*/

	/*int n;
	int	m;
	char	str[15];
	char	str1[15];
	str[14] = 'a'; //14
	str1[14] = 'a';
	printf("strlcat: %s\n", str1);
	printf("ft_strlcat: %s\n", str);
	m = strlcat(str1, "lorem ipsom", 9);
	n = ft_strlcat(str, "lorem ipsom", 9);

	printf("\nstrlcat(): %d\n%s\n", n, str1);
	printf("ft_strlcat(): %d\n%s\n", n, str);*/

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

	/*char	str5[10] = "bonjour";
	char	str6[10] = "antonio";
	void	*ptr;

	printf("%s\n%s\n", str5, memchr("bonjourno", 'n', 2));
	printf("%s\n%s\n", str5, ft_memchr("bonjourno", 'n', 2));*/

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


	/*ft_putnbr_fd(-2147483648, 2);
	ft_putchar_fd('\n', 2);*/

	/*char	**tabstr;
	int		i;

	i = 0;
	tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	while (tabstr[i])
	{
		ft_print_result(tabstr[i]);
		i++;
	}

	/*////////////////////////////////
    //         ft_split           //
    ////////////////////////////////

	/*clock_t t;
	double time_taken;

    t = clock();

    // char    *ft_split_str = { "The-semiotics-spherical-chamber." };
    char    *ft_split_str = { "--1-2-3-4-5-6-7-8--8-8--8-4------4--4" };
  //char    *ft_split_str = { "      split       this for   me !       " };
    char    **ft_split_res;

    ft_split_res = ft_split(ft_split_str, '-');*/

    // visual debug
	/*printf("\nRES[0]: $%s$", ft_split_res[0]);

    printf("\nRES[0]: $%s$", ft_split_res[0]);
    printf("\nRES[1]: $%s$", ft_split_res[1]);
    printf("\nRES[2]: $%s$", ft_split_res[2]);
    printf("\nRES[3]: $%s$", ft_split_res[3]);
    printf("\nRES[4]: $%s$", ft_split_res[4]);
    printf("\nRES[5]: $%s$", ft_split_res[5]);
	printf("\nRES[6]: $%s$", ft_split_res[6]);
	printf("\nRES[7]: $%s$", ft_split_res[7]);
	printf("\nRES[8]: $%s$", ft_split_res[8]);
	printf("\nRES[9]: $%s$", ft_split_res[9]);
	printf("\nRES[10]: $%s$", ft_split_res[10]);
	printf("\nRES[11]: $%s$", ft_split_res[11]);
	printf("\nRES[12]: $%s$", ft_split_res[12]);
	printf("\nRES[12]: $%s$", ft_split_res[13]);*/
    //printf("\nRES[6]: $%p$", ft_split_res[6]);
    //printf("\nRES[7]: $%p$", ft_split_res[7]);
	/*int i = 0;
	while (ft_split_res[i])
	{
		printf("\nRES[%d]: $%s$", i, ft_split_res[i]);
		free(ft_split_res[i]);
		//printf("indice: %i - address: %p\n", i, &ft_split_res[i]);
		i++;
	}
	free(ft_split_res);*/

    // printf("string 4 %s endereço 4 %p\n", ft_split_res[4] , ft_split_res[4]);
    // printf("string 5 %s endereço 5 %p\n", ft_split_res[5] , ft_split_res[5]);
    // printf("string 6 %s endereço 6 %p\n", ft_split_res[6] , ft_split_res[6]);
    // printf("string 7 %s endereço 7 %p\n", ft_split_res[7] , ft_split_res[7]);

    /*t = clock() - t;
    time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf(" %0.6fs \n", time_taken);*/


	/*char	*str;

	str = (char *)malloc(sizeof(*str) * 12);

	strcpy(str, "LoReM iPsUm"); //lOrEm IpSuM
	ft_striteri(str, &iter);
	ft_print_result(str);

	free(str);*/

	/*char s[] = "bonjour";
	char	*ptr;

	printf("%s\n", s);*/

	/*ptr = ft_strchr(s, 't' + 256);*/
	/* 5  printf("%s\n", ptr);
	ptr = strchr(s, 't' + 256);
	5 printf("%s\n", ptr);*/

	/*	TESTING ft_lstnew()	**
	**						**
	**						**
	**						*/

	/*t_list	*ptr;

	ptr = ft_lstnew("ant");

	printf("%s\n", (char *)ptr->content);
	printf("%s\n", (char *)ptr->next)*/

	/*	TESTING ft_lstadd_front()	**
	**								**
	**								**
	**								*/

	/*t_list	*elem1;
	t_list	*elem2;
	t_list	*head;
	t_list	*new_first;

	elem1 = ft_lstnew("primeiro");
	elem2 = ft_lstnew("segundo");
	head = elem1;
	head->next = elem2;
	new_first = ft_lstnew("novo primeiro");
	printf("%s\n", (char *)head->content);
	printf("%s\n\n", (char *)head->next->content);
	//printf("%s\n", (char *)head->next->next->content);

	ft_lstadd_front(&head, new_first);

	printf("%s\n", (char *)head->content);
	printf("%s\n", (char *)head->next->content);
	printf("%s\n", (char *)head->next->next->content);*/

	/*		TESTING ft_lstsize()	**
	**								**
	**								**
	**								*/

	/*t_list	*elem1 = ft_lstnew("primeiro");
	t_list	*elem2 = ft_lstnew("segundo");;
	t_list	*elem3 = ft_lstnew("terceiro");;
	t_list	*elem4 = ft_lstnew("quarto");;
	t_list	*head;

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	elem4->next = NULL;
	head = elem1;

	printf("%s\n", (char *)head->content);
	printf("%s\n", (char *)head->next->content);
	printf("%s\n", (char *)head->next->next->content);
	printf("%s\n", (char *)head->next->next->next->content);

	printf("qtd nodes: %d\n", ft_lstsize(head));

	printf("%s\n", (char *)head->content);
	printf("%s\n", (char *)head->next->content);
	printf("%s\n", (char *)head->next->next->content);
	printf("%s\n", (char *)head->next->next->next->content);

	printf("qtd nodes: %d\n", ft_lstsize(elem3));*/

	/*		TESTING ft_lstlast()	**
	**								**
	**								**
	**								*/

	/*t_list	*elem1 = ft_lstnew("primeiro");
	t_list	*elem2 = ft_lstnew("segundo");;
	t_list	*elem3 = ft_lstnew("terceiro");;
	t_list	*elem4 = ft_lstnew("quarto");;
	t_list	*head;
	t_list	*ptr;
	t_list	*test = NULL;

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	elem4->next = NULL;
	head = elem1;

	printf("%s\n", (char *)head->content);
	printf("%s\n", (char *)head->next->content);
	printf("%s\n", (char *)head->next->next->content);
	printf("%s\n", (char *)head->next->next->next->content);

	ptr = ft_lstlast(test);
	printf("content ultimo node: %s\n", (char *)ptr->content);*/

	/*	TESTING ft_lstadd_back()	**
	**								**
	**								**
	**								*/

	/*t_list	*elem1 = ft_lstnew("primeiro");
	t_list	*elem2 = ft_lstnew("segundo");;
	t_list	*elem3 = ft_lstnew("terceiro");;
	t_list	*elem4 = ft_lstnew("quarto");;
	t_list	*head;
	t_list	*ptr = ft_lstnew("novo");

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	elem4->next = NULL;
	head = elem1;

	ft_lstadd_back(&head, ptr);

	printf("%s\n", (char *)head->content);
	printf("%s\n", (char *)head->next->content);
	printf("%s\n", (char *)head->next->next->content);
	printf("%s\n", (char *)head->next->next->next->content);
	printf("%s\n", (char *)head->next->next->next->next->content);*/

	/*	TESTING ft_lstdelone()		**
	**								**
	**								**
	**								*/

	t_list	*elem1 = ft_lstnew("primeiro");
	t_list	*elem2 = ft_lstnew("segundo");;
	t_list	*elem3 = ft_lstnew("terceiro");;
	t_list	*elem4 = ft_lstnew("quarto");;
	t_list	*head;
	t_list	*ptr = ft_lstnew("novo");

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	elem4->next = NULL;
	head = elem1;

	ft_lstadd_back(&head, ptr);

	printf("%s\n", (char *)head->content);
	printf("%s\n", (char *)head->next->content);
	printf("%s\n", (char *)head->next->next->content);
	printf("%s\n", (char *)head->next->next->next->content);
	printf("%s\n", (char *)head->next->next->next->next->content);

	return (0);
}

static void	ft_lero(unsigned int n, char *s)
{
	if (n % 2 == 0)
		s[n] -= 32;
}

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
	write(1, "\n", 1);
}

static void		iter(unsigned int i, char *c)
{
	static int indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = 1;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	else if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

