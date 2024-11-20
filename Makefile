# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibaaziz <ibaaziz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 12:23:45 by ibaaziz           #+#    #+#              #
#    Updated: 2024/11/19 19:17:52 by ibaaziz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INC = libft.h

SRC = ./ft_atoi.c\
	./ft_bzero.c\
	./ft_calloc.c\
	./ft_isalnum.c\
	./ft_isalpha.c\
	./ft_isascii.c\
	./ft_isdigit.c\
	./ft_isprint.c\
	./ft_memchr.c\
	./ft_memcmp.c\
	./ft_memcpy.c\
	./ft_memmove.c\
	./ft_memset.c\
	./ft_strchr.c\
	./ft_strrchr.c\
	./ft_strlcat.c\
	./ft_strlcpy.c\
	./ft_strlen.c\
	./ft_strncmp.c\
	./ft_strnstr.c\
	./ft_strchr.c\
	./ft_tolower.c\
	./ft_toupper.c\
	./ft_calloc.c\
	./ft_strdup.c\
	./ft_substr.c\
	./ft_strjoin.c\
	./ft_strtrim.c\
	./ft_split.c\



OBJ = $(SRC:.c=.o)

FLAGS += -Werror -Wextra -Wall -I $(INC)

all: $(OBJ)
	ar crs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)


re: fclean all
