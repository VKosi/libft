# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkosi <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/25 12:09:01 by vkosi             #+#    #+#              #
#    Updated: 2019/06/10 17:55:14 by vkosi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = *.c	 

OBJECTS = *.o

all:
	gcc -Wall -Wextra -Werror -c $(SRCS)

$(NAME):
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean:
	clean
	rm -f $(NAME)

re:
	fclean all
