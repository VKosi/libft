# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkosi <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/25 12:09:01 by vkosi             #+#    #+#              #
#    Updated: 2019/05/31 16:05:53 by vkosi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = *.c	 

OBJECTS = *.o

all: $(NAME)

$(NAME): libft.h $(SRCS)
	ar re $(NAME) $(OBJECTS)
	ranlib $(NAME)

CC: 
	gcc -Wall -Wextra -Werror -c $(SRCS)

clean:
	rm -f $(OBJECTS)

fclean:
	clean
	rm -f $(NAME)

re:
	fclean all
