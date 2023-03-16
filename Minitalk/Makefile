# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Jroldan- <jroldan-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/08 15:09:54 by Jroldan-          #+#    #+#              #
#    Updated: 2023/03/16 18:33:45 by Jroldan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_SERVER = server
NAME_CLIENT = client
NAME_SERVER_BONUS = server_bonus
NAME_CLIENT_BONUS = client_bonus

CFLAG = -Wall -Wextra -Werror

SRC = minitalk.c
SRC_SERVER = server.c
SRC_CLIENT = client.c

SRC_BONUS = minitalk_bonus.c
SRC_SERVER_BONUS = server_bonus.c
SRC_CLIENT_BONUS = client_bonus.c

OBJ_SERVER = $(SRC_SERVER:.c=.o)
OBJ_CLIENT = $(SRC_CLIENT:.c=.o)
OBJ = $(SRC:.c=.o)

OBJ_SERVER_BONUS = $(SRC_SERVER_BONUS:.c=.o)
OBJ_CLIENT = $(SRC_CLIENT_BONUS:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

CC = gcc

all : $(NAME_SERVER) $(NAME_CLIENT) $(NAME_SERVER_BONUS) $(NAME_CLIENT_BONUS)

$(NAME_CLIENT) : $(OBJ_CLIENT) $(OBJ)
	$(CC) $(CFLAG) $(SRC_CLIENT) $(SRC) -o $(NAME_CLIENT) 
$(NAME_SERVER) : $(OBJ_SERVER) $(OBJ)
	$(CC) $(CFLAG) $(SRC_SERVER) $(SRC) -o $(NAME_SERVER)
	
$(NAME_CLIENT_BONUS) : $(OBJ_CLIENT_BONUS) $(OBJ_BONUS)
	$(CC) $(CFLAG) $(SRC_CLIENT_BONUS) $(SRC_BONUS) -o $(NAME_CLIENT_BONUS) 
$(NAME_SERVER_BONUS) : $(OBJ_SERVER_BONUS) $(OBJ_BONUS)
	$(CC) $(CFLAG) $(SRC_SERVER_BONUS) $(SRC_BONUS) -o $(NAME_SERVER_BONUS)


re : fclean all

clean :
	rm -f $(OBJ)
	rm -f $(OBJ_SERVER)
	rm -f $(OBJ_CLIENT)
	rm -f $(OBJ_BONUS)
	rm -f $(OBJ_SERVER_BONUS)
	rm -f $(OBJ_CLIENT_BONUS)
fclean : clean
	rm  -f $(NAME_SERVER)
	rm	-f $(NAME_CLIENT)
	rm  -f $(NAME_SERVER_BONUS)
	rm	-f $(NAME_CLIENT_BONUS)	

.PHONY : clean fclean all re