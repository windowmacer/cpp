# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kirill <kirill@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 17:51:23 by kirill            #+#    #+#              #
#    Updated: 2022/11/17 14:40:26 by kirill           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CC = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp randomChump.cpp newZombie.cpp Zombie.cpp

HEAD = Zombie.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME) Makefile

$(NAME): $(OBJS) Makefile
	$(CC) $(CFLAG) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re