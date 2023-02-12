NAME = libft.a
OBJ = ft_isprint.o ft_putchar_fd.o ft_strlcat.o ft_tolower.o ft_itoa.o ft_putendl_fd.o ft_strlcpy.o	ft_toupper.o ft_atoi.o	ft_memchr.o	ft_putnbr_fd.o \
	ft_strlen.o	ft_bzero.o ft_memcmp.o ft_putstr_fd.o ft_strmapi.o ft_calloc.o ft_memcpy.o ft_split.o ft_strncmp.o ft_isalnum.o	ft_strchr.o	ft_strnstr.o \
	ft_isalpha.o ft_memmove.o ft_strdup.o ft_strrchr.o ft_isascii.o ft_striteri.o ft_strtrim.o \
	ft_isdigit.o ft_memset.o ft_strjoin.o ft_substr.o
CC = cc
FLAGS = -Wall -Wextra -Werror
HEADER = libft.h

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rc $(NAME) $(OBJ)
%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< 
clean : 
	rm -rf $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all
.PHONY : all re fclean clean