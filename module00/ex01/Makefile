# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kirill <kirill@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 14:42:39 by kirill            #+#    #+#              #
#    Updated: 2022/11/11 13:23:17 by kirill           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp phonebook.cpp contact.cpp

CC = c++
NAME = phonebook

CFLAG = -Wall -Wextra -Werror -std=c++98
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