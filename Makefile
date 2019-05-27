# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnchabel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/27 14:11:21 by mnchabel          #+#    #+#              #
#    Updated: 2019/05/27 14:18:21 by mnchabel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/ft_atoi.c srcs/ft_isalnum.c srcs/ft_isascii.c srcs/ft_isprint.c srcs/ft_memchr.c \
	srcs/ft_memcpy.c srcs/ft_memset.c srcs/ft_strchr.c srcs/ft_strcpy.c srcs/ft_strlcat.c \
	srcs/ft_strncat.c srcs/ft_strncpy.c srcs/ft_strrchr.c srcs/ft_tolower.c srcs/ft_bzero.c \
	srcs/ft_isalpha.c srcs/ft_isdigit.c srcs/ft_memccpy.c srcs/ft_memcmp.c srcs/ft_memmove.c \
	srcs/ft_strcat.c srcs/ft_strcmp.c srcs/ft_strdup.c srcs/ft_strlen.c srcs/ft_strncmp.c \
	srcs/ft_strnstr.c srcs/ft_strstr.c srcs/ft_toupper.c

OUT = ft_atoi.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_memchr.o \
	ft_memcpy.o ft_memset.o ft_strchr.o ft_strcpy.o ft_strlcat.o \
	ft_strncat.o ft_strncpy.o ft_strrchr.o ft_tolower.o ft_bzero.o \
	ft_isalpha.o ft_isdigit.o ft_memccpy.o ft_memcmp.o ft_memmove.o \
	ft_strcat.o ft_strcmp.o ft_strdup.o ft_strlen.o ft_strncmp.o \
	ft_strnstr.o ft_strstr.o ft_toupper.o

LIB = libft.a

all:
	gcc -c -Wall -Weeror -Wextra $(SRC)
	ar -cvq $(LIB) $(OUT)

clean:
	rm -f $(OUT)

fclean:
	rm -f $(MAIN) $(LIB)

re: clean fclean all
