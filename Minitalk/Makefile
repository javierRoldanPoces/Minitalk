# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Jroldan- <jroldan-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/08 15:09:54 by Jroldan-          #+#    #+#              #
#    Updated: 2023/03/09 15:55:08 by Jroldan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_SERVER = server
NAME_CLIENT = client
CFLAG = -Wall -Wextra -Werror

SRC = minitalk.c
SRC_SERVER = server.c 
SRC_CLIENT = client.c

CC = gcc


$(NAME_SERVER) : 
	$(CC) $(CFLAG) $(SRC_SERVER) -o $(NAME_SERVER) minitalk.c
$(NAME_CLIENT) : 
	$(CC) $(CFLAG) $(SRC_CLIENT) -o $(NAME_CLIENT) minitalk.c
	
all : $(NAME_SERVER) $(NAME_CLIENT)

re : fclean all

clean :
	rm -f $(OBJ_SERVER)
	rm -f $(OBJ_CLIENT)
fclean : clean
	rm  -f $(NAME_SERVER)
	rm	-f $(NAME_CLIENT)

.PHONY : clean fclean all re