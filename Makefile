# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anjose-d <anjose-d@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/03 00:12:28 by anjose-d          #+#    #+#              #
#    Updated: 2021/08/08 03:35:37 by anjose-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
FLAGS=-Wall -Wextra -Werror
CC=clang

HEADER=libft.h
SOURCES=ft_atoi.c \
		ft_strlen.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_bzero.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_memset.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c

SRCSBNS=ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

OBJECTS=$(SOURCES:.c=.o)
BONUS_OBJS=$(SRCSBNS:.c=.o)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $(SOURCES)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

all: $(NAME)

bonus: $(NAME) $(SRCSBNS)
	$(CC) $(FLAGS) -c $(SRCSBNS)
	ar -rcs $(NAME) $(BONUS_OBJS)

clean:
	rm -f $(OBJECTS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re
