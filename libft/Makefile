# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ltanisha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/31 00:46:05 by ltanisha          #+#    #+#              #
#    Updated: 2020/10/31 00:56:51 by ltanisha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc


SRC = ft_strlen.c ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isprint.c ft_isascii.c ft_toupper.c ft_tolower.c ft_memset.c ft_memcpy.c ft_atoi.c ft_bzero.c ft_memccpy.c ft_memcmp.c ft_memchr.c ft_memmove.c ft_strncmp.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c ft_strdup.c ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_substr.c ft_itoa.c ft_split.c ft_lstnew.c ft_lstadd_back.c ft_lstlast.c ft_putchar.c ft_putstr.c get_next_line.c ft_strcpy.c ft_lstsize.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror -c

%.o: %.c
	$(CC) $(FLAGS) $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

norm:
	norminetteV2 *.c *.h


.PHONY: clean fclean
