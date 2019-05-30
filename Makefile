# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkosi <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/25 12:09:01 by vkosi             #+#    #+#              #
#    Updated: 2019/05/30 17:35:19 by vkosi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRCS=ft_isprint.c\
	 ft_lstdelone.c\
	 ft_putendl_fd.c\
	 ft_strclr.c\
	 ft_strjoin.c\
	 ft_strnequ.c\
	 ft_toupper.c\
	 ft_atoi.c\
	 ft_isupper.c\
	 ft_lstiter.c\
	 ft_putnbr.c\
	 ft_strcmp.c\
	 ft_strlen.c\
	 ft_strnew.c\
	 ft_atoi_base.c\
	 ft_itoa.c\
	 ft_lstmap.c\
	 ft_putnbr_fd.c\
	 ft_strcpy.c\
	 ft_strmap.c\
	 ft_strrchr.c\
	 ft_isalnum.c\
	 ft_itoa_base.c\
	 ft_lstnew.c\
	 ft_putstr.c\
	 ft_strdup.c\
	 ft_strmapi.c\
	 ft_strrev.c\
	 ft_isalpha.c\
	 ft_lstadd.c\
	 ft_putchar.c\
	 ft_putstr_fd.c\
	 ft_strequ.c\
	 ft_strncat.c\
	 ft_strstr.c\
	 ft_isascii.c\
	 ft_lstaddend.c\
	 ft_putchar_fd.c\
	 ft_strcat.c\
	 ft_striter.c\
	 ft_strncmp.c\
	 ft_strsub.c\
	 ft_isdigit.c\
	 ft_lstdel.c\
	 ft_putendl.c\
	 ft_strchr.c\
	 ft_striteri.c\
	 ft_strncpy.c\
	 ft_tolower.c\

OBJECTS=ft_isprint.o\ ft_lstdelone.o\ ft_putendl_fd.o\ ft_strclr.o\ ft_strjoin.o\ ft_strnequ.o\ ft_toupper.o\
ft_atoi.o\ ft_isupper.o\ ft_lstiter.o\ ft_putnbr.o\ ft_strcmp.o\ ft_strlen.o\ ft_strnew.o\
ft_atoi_base.o\ ft_itoa.o\ ft_lstmap.o\ ft_putnbr_fd.o\ ft_strcpy.o\ ft_strmap.o\ ft_strrchr.o\
ft_isalnum.o ft_itoa_base.o ft_lstnew.o ft_putstr.o ft_strdup.o ft_strmapi.o\ ft_strrev.o\
ft_isalpha.o ft_lstadd.o ft_putchar.o ft_putstr_fd.o ft_strequ.o ft_strncat.o ft_strstr.o
ft_isascii.o ft_lstaddend.o ft_putchar_fd.o ft_strcat.o ft_striter.o ft_strncmp.o ft_strsub.o
ft_isdigit.o ft_lstdel.o ft_putendl.o ft_strchr.o ft_striteri.o ft_strncpy.o ft_tolower.o

all:
	$(NAME)

$(NAME):	$(SRCS)
	gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean:
	clean
	rm -f $(NAME)

re:
	fclean all
