# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mszlicht <mszlicht@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/23 16:15:53 by mszlicht          #+#    #+#              #
#    Updated: 2024/07/23 19:03:03 by mszlicht         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SERVER		=	server.c

CLIENT		=	client.c

LIBFT		=	cd libft && make

LIB			=	libft/libft.a



SERVER_SRC	=	$(SERVER)

CLIENT_SRC	=	$(CLIENT)

SERVER_OBJS	=	$(SERVER_SRC:.c=.o)

CLIENT_OBJS =	$(CLIENT_SRC:.c=.o)

OBJS		=	$(CLIENT_OBJS) \
				$(SERVER_OBJS)

GCC			=	gcc

FLAGS		=	-Wall -Wextra -Werror

INCLUDE		=	-I include

SERVER_NAME	=	server

CLIENT_NAME =	client

NAME		=	server



COMP_START	=	echo "\nStarting the compilation...\n"

SERV_READY	=	echo "\nServer is ready!\n"

CLI_READY	=	echo "\nClient is ready!\n"

CLEANED		=	echo "\nRemoved all the \".o\" files \n"

FCLEANED	=	echo "\nRemoved the executables \n"



all: $(NAME)

$(NAME): comp_start server client

comp_start:
	@$(COMP_START)
	@$(LIBFT)

server: $(SERVER_OBJS)
	@$(GCC) $(FLAGS) $(SERVER_OBJS) $(LIB) -o $(SERVER_NAME)
	@$(SERV_READY)

client: $(CLIENT_OBJS)
	@$(GCC) $(FLAGS) $(CLIENT_OBJS) $(LIB) -o $(CLIENT_NAME)
	@$(CLI_READY)

clean:
	@rm -rf $(OBJS)
	@cd libft && make clean
	@$(CLEANED)

fclean: clean
	@rm -rf $(SERVER_NAME) $(CLIENT_NAME)
	@cd libft && make fclean
	@$(FCLEANED)

.c.o:
	@${GCC} ${FLAGS} $(INCLUDE) -c $< -o ${<:.c=.o}

re:	fclean all

.PHONY: all minitalk server client clean fclean re libft