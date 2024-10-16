# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mszlicht <mszlicht@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/14 17:16:15 by mszlicht          #+#    #+#              #
#    Updated: 2024/07/23 15:51:15 by mszlicht         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRC	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	  ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	  ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	  ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c \
	  ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
	  ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
	  ft_tolower.c ft_toupper.c ft_printf.c ft_print_c.c ft_print_s.c \
	  ft_print_d.c ft_print_u.c ft_print_p.c ft_print_hex.c ft_calloc_exit.c \
	  ft_recursive_power.c get_next_line.c get_next_line_utils.c\

OBJ	= $(SRC:.c=.o)

HEADER	= ./

CC	= cc

FLAGS	= -Wall -Wextra -Werror

.c.o:
	@$(CC) $(FLAGS) -I $(HEADER) -c $< -o $@

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:all, clean, fclean, re
