# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 19:07:19 by zwalad            #+#    #+#              #
#    Updated: 2021/11/29 20:55:30 by zwalad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = @cc -c

AR = @ar -rc

CFLAGS = -Wall -Wextra -Werror

RM = @rm -f

SRCS = ft_printf.c ft_help.c ft_help2.c

OBJ = $(subst .c,.o,$(SRCS))

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
