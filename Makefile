# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/27 14:11:21 by mnchabel          #+#    #+#              #
#    Updated: 2019/05/27 15:53:40 by mnchabel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/01/ft_atoi.c srcs/01/ft_isalnum.c srcs/01/ft_isascii.c srcs/01/ft_isprint.c srcs/01/ft_memchr.c \
	srcs/01/ft_memcpy.c srcs/01/ft_memset.c srcs/01/ft_strchr.c srcs/01/ft_strcpy.c srcs/01/ft_strlcat.c \
	srcs/01/ft_strncat.c srcs/01/ft_strncpy.c srcs/01/ft_strrchr.c srcs/01/ft_tolower.c srcs/01/ft_bzero.c \
	srcs/01/ft_isalpha.c srcs/01/ft_isdigit.c srcs/01/ft_memccpy.c srcs/01/ft_memcmp.c srcs/01/ft_memmove.c \
	srcs/01/ft_strcat.c srcs/01/ft_strcmp.c srcs/01/ft_strdup.c srcs/01/ft_strlen.c srcs/01/ft_strncmp.c \
	srcs/01/ft_strnstr.c srcs/01/ft_strstr.c srcs/01/ft_toupper.c

OUT = ft_atoi.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_memchr.o \
	ft_memcpy.o ft_memset.o ft_strchr.o ft_strcpy.o ft_strlcat.o \
	ft_strncat.o ft_strncpy.o ft_strrchr.o ft_tolower.o ft_bzero.o \
	ft_isalpha.o ft_isdigit.o ft_memccpy.o ft_memcmp.o ft_memmove.o \
	ft_strcat.o ft_strcmp.o ft_strdup.o ft_strlen.o ft_strncmp.o \
	ft_strnstr.o ft_strstr.o ft_toupper.o

LIB = libft.a

all:
	gcc -c -Wall -Werror -Wextra $(SRC)
	ar -cvq $(LIB) $(OUT)

clean:
	rm -f $(OUT)

fclean:
	rm -f $(MAIN) $(LIB)

re: clean fclean all
