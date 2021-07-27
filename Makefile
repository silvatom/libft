NAME=libft.a
FLAGS=-Wall -Wextra -Werror
CC=clang
#deletar REGRA A NO FINAL DO ARQUIVO antes de entregar
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
		ft_memcmp.c


OBJECTS=$(SOURCES:.c=.o)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $(SOURCES)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

all: $(NAME)

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
#deletar esta regra antes de entregar
a: $(SOURCES) $(HEADER) 
	@$(CC) main.c $(SOURCES) -lbsd