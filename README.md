# LIBFT

## Introduction
This project aims to code a C library with usual functions.

* [**Part 1**](Part-1-_-Libc-functions) - re-code a set of the **libc** functions, as defined in their **man**
* [**Part 2**](Part-2-_-Additional-functions) - code functions not included in the **libc**
* [**Bonus part**](Bonus-part) - code functions to manipulate lists

### Part 1 - Libc functions
| Function | Description |
| --- | --- |
| **ft_isalpha** | Checks for an alphabetic character. |
| **ft_isdigit** | Checks for a digit (0 through 9). |
| **ft_isalnum** | Checks for an alphanumeric character; it is equivalent to (isalpha(c) \|\| isdigit(c)). |
| **ft_isascii** | Checks whether c is a 7-bit unsigned char value that fits into the ASCII character set. |
| **ft_isprint** | Checks for any printable character including space. |
| **ft_strlen** | Calculates the length of the string pointed to by s, excluding the terminating null byte. |
| **ft_memset** | Fills the first n bytes of the memory area pointed to by s with the constant byte c. |
| **ft_bzero** | Set n bytes of s to 0. |
| **ft_memcpy** | Copies n bytes from memory area src to memory area dst. The memory areas must not overlap. Use ft_memmove if the memory areas do overlap. |
| **ft_memmove** | Copies n bytes from memory area src to memory area dest. The memory area may overlap. The copy is always done in a non-destructive manner. |
| **ft_strlcpy** | Copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result. |
| **ft_strlcat** | Appends the NUL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result. |
| **ft_toupper** | Convert a lowercase letter to uppercase. |
| **ft_tolower** | Convert a uppercase letter to lowercase. |
| **ft_strchr** | Locate character in string and returns a pointer to the first occurrence. |
| **ft_strrchr** | Locate character in string and returns a pointer to the last occurrence. |
| **ft_strncmp** | Compares the two strings s1 and s2, only the first (at most) n bytes of them. |
| **ft_memchr** | Scans the initial n bytes of the memory area pointed by s for the first instance of c. |
| **ft_memcmp** | Compares the first n bytes of the memory areas s1 and s2. |
| **ft_strnstr** | Locate the first occurrence of the null-terminated substring in the bigstring, where not more than len characters are searched. |
| **ft_atoi** | Converts the initial portion of the string pointed to by str to int. |
| **ft_calloc** | Allocate and free dynamic memory, setting the memory to zero. |
| **ft_strdup** | Allocated and returns a duplication of the str. |

### Part 2 - Additional functions

| Function | Description |
| --- | --- |
| **ft_substr** |  Allocates and returns a substring from the string s. |
| **ft_strjoin** | Allocates and returns a new string, which is the result of the concatenation of 's1' and 's2'. |
| **ft_strtrim** | Allocates and returns a copy of 's1' with the characters specified in 'set' removed from the beginning and the end of the string. |
| **ft_split** | Allocates and returns an array of strings obtwained by splitting 's' using the character 'c' as a delimiter. |
| **ft_itoa** | Allocates and returns a string representing the integer received as an argument. |
| **ft_strmapi** | Applies the function 'f' to each character of the string 's' to create a new string resulting from successive applications of 'f'. |
| **ft_striteri** | Applies the function 'f' to each character of the string passed as argument, and passing its index as first argument. |
| **ft_putchar_fd** | Outputs the character 'c' to the given file descriptor. |
| **ft_putstr_fd** | Outputs the string 's' to the given file descriptor. |
| **ft_putendl_fd** | Outputs the string 's' to the given file descriptor, followed by a newline. |
| **ft_putnbr_fd** | Outputs the integer 'n' to the given file descriptor. |

### Bonus part

| Function | Description |
| --- | --- |
| **ft_lstnew** | Allocates and returns a new element. |
| **ft_lstadd_front** | Adds the element ’new’ at the beginning of the list. |
| **ft_lstsize** | Counts the number of elements in a list. |
| **ft_lstlast** | Returns the last element of the list. |
| **ft_lstadd_back** | Adds the element ’new’ at the end of the list. |
| **ft_lstdelone** | Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element. |
| **ft_lstclear** | Deletes and frees the given element and every successor of that element, using the function ’del’ and free(3). |
| **ft_lstiter** | Iterates the list ’lst’ and applies the function ’f’ to the content of each element. |
| **ft_lstmap** | Iterates the list ’lst’ and applies the function ’f’ to the content of each element. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of an element if needed. |
