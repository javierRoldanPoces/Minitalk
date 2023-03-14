# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javier <javier@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/08 15:09:54 by Jroldan-          #+#    #+#              #
#    Updated: 2023/03/14 12:08:13 by javier           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_SERVER = server
NAME_CLIENT = client

CFLAG = -Wall -Wextra -Werror

SRC = minitalk.c
SRC_SERVER = server.c 
SRC_CLIENT = client.c

OBJ_SERVER = $(SRC_SERVER:.c=.o)
OBJ_CLIENT = $(SRC_CLIENT:.c=.0)

CC = gcc

$(NAME_SERVER) : 
	$(CC) $(CFLAG) $(SRC_SERVER) -o $(NAME_SERVER)
$(NAME_CLIENT) : 
	$(CC) $(CFLAG) $(SRC_CLIENT) -o $(NAME_CLIENT)
	
all : $(NAME_SERVER) $(NAME_CLIENT)

re : fclean all

clean :
	rm -f $(OBJ_SERVER)
	rm -f $(OBJ_CLIENT)
fclean : clean
	rm  -f $(NAME_SERVER)
	rm	-f $(NAME_CLIENT)

.PHONY : clean fclean all re