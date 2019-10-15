# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkosi <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/25 12:09:01 by vkosi             #+#    #+#              #
#    Updated: 2019/06/28 14:13:03 by vkosi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_itoa.c ft_putnbr.c ft_striter.c ft_strrchr.c ft_bzero.c \
	   ft_putnbr_fd.c ft_striteri.c ft_strrev.c ft_atoi.c ft_memccpy.c \
	   ft_putstr.c ft_strjoin.c ft_strsplit.c ft_memalloc.c ft_memchr.c \
	   ft_putstr_fd.c ft_strlcat.c ft_strstr.c ft_digit_size.c ft_memcmp.c \
	   ft_strcapitalize.c ft_strlen.c ft_strsub.c ft_dup.c ft_memcpy.c \
	   ft_strcat.c ft_strmap.c ft_strtrim.c ft_isalnum.c ft_memdel.c \
	   ft_strchr.c ft_strmapi.c ft_tolower.c ft_isalpha.c ft_memmove.c \
	   ft_strclr.c ft_strncat.c ft_toupper.c ft_isascii.c ft_memset.c \
	   ft_strcmp.c ft_strncmp.c ft_isdigit.c ft_putchar.c ft_strcpy.c \
	   ft_strncpy.c ft_islower.c ft_putchar_fd.c ft_strdel.c ft_strnequ.c \
	   ft_isprint.c ft_putendl.c ft_strdup.c ft_strnew.c ft_isupper.c \
	   ft_putendl_fd.c ft_strequ.c ft_strnstr.c

OBJECTS = 	$(SRCS:%.c=%.o)

INCLUDES =./

all:$(NAME)

$(NAME): $(OBJECTS) libft.h
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	@@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@printf "\e[1;32mlibft.a created\e[0m\n"

clean:
	@rm -f $(OBJECTS)
	@printf "\e[1;31mObject files removed\e[0m\n"

fclean: clean
	@rm -f $(NAME)
	@printf "\e[1;31mlibft.a removed\e[0m\n"

re: fclean all
