# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dloisel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/31 19:45:59 by dloisel           #+#    #+#              #
#    Updated: 2024/04/03 12:24:47 by dloisel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
MY_SOURCE = $(SRC_DIR)/ft_putchar.c \
            $(SRC_DIR)/ft_swap.c \
            $(SRC_DIR)/ft_putstr.c \
            $(SRC_DIR)/ft_strlen.c \
            $(SRC_DIR)/ft_strcmp.c
CC = gcc
FLAGS = -Wall -Wextra -Werror
SRC_DIR = srcs
INCLUDES = includes
OBJS = $(MY_SOURCE:.c=.o)
AR = ar -rc
RM = rm -f
RAN = ranlib
SRCS = 	$(wildcard $(SRC_DIR)/*.c)

all : $(NAME)

.c.o:
	$(CC) $(FLAGS) -c $< -o ${<:.c=.o} -I $(INCLUDES)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(RAN) $(NAME)

clean : 
	$(RM) $(OBJS)

fclean : clean
	 $(RM) $(NAME)

re : fclean all
