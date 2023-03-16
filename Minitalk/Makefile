# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Jroldan- <jroldan-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/08 15:09:54 by Jroldan-          #+#    #+#              #
#    Updated: 2023/03/15 20:05:59 by Jroldan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_SERVER = server
NAME_CLIENT = client

CFLAG = -Wall -Wextra -Werror

SRC = minitalk.c
SRC_SERVER = server.c
SRC_CLIENT = client.c

OBJ_SERVER = $(SRC_SERVER:.c=.o)
OBJ_CLIENT = $(SRC_CLIENT:.c=.o)
OBJ = $(SRC:.c=.o)

CC = gcc

all : $(NAME_SERVER) $(NAME_CLIENT)

$(NAME_CLIENT) : $(OBJ_CLIENT) $(OBJ)
	$(CC) $(CFLAG) $(SRC_CLIENT) $(SRC) -o $(NAME_CLIENT) 
$(NAME_SERVER) : $(OBJ_SERVER) $(OBJ)
	$(CC) $(CFLAG) $(SRC_SERVER) $(SRC) -o $(NAME_SERVER)


re : fclean all

clean :
	rm -f $(OBJ_SERVER)
	rm -f $(OBJ_CLIENT)
fclean : clean
	rm  -f $(NAME_SERVER)
	rm	-f $(NAME_CLIENT)

.PHONY : clean fclean all re