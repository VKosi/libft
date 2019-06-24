# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkosi <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/25 12:09:01 by vkosi             #+#    #+#              #
#    Updated: 2019/06/24 12:15:27 by vkosi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =  ft_atoi.c ft_atoi_base.c ft_bzero.c ft_dup.c \
		ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_islower.c \
		ft_isprint.c ft_isupper.c ft_itoa.c ft_itoa_base.c ft_memalloc.c \
		ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c \
		ft_memmove.c ft_memset.c ft_putchar.c ft_putchar_fd.c ft_putendl.c \
		ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c \
		ft_putstr_fd.c ft_strcapitalize.c ft_strcat.c ft_strchr.c ft_strclr.c \
		ft_strcmp.c ft_strcntfirstchar.c ft_strcntlastchar.c \
		ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c \
		ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c \
		ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c \
		ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strrev.c ft_strsplit \
		ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c \

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
