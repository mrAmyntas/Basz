NAME = libft.a
HEADER_FILES = libft.h
SRC =	ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_bzero.c\
		ft_memcmp.c\
		ft_memchr.c\
		ft_memcpy.c\
		ft_memccpy.c\
		ft_memset.c\
		ft_memmove.c\
		ft_strchr.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strmapi.c\
		ft_strtrim.c\
		ft_strjoin.c\
		ft_putnbr_fd.c\
  		ft_putendl_fd.c\
   		ft_putstr_fd.c\
    	ft_putchar_fd.c\
	  	ft_itoa.c\
		ft_atoi.c\
		ft_strdup.c\
		ft_calloc.c\
		ft_substr.c\
		ft_split.c
OBJECTS = $(SRC:.c=.o)
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJECTS)
		ar rcs $@ $^

%.o: %.c &(HEADER_FILES)
		gcc -c $(CFLAGS) -o $@ $<

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
