# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: srijal <srijal@student.42urduliz.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 13:53:11 by srijal            #+#    #+#              #
#    Updated: 2022/09/19 14:17:01 by srijal           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

SRCS		=	ft_printf.c \
				ft_printf_utils_char.c \
				ft_printf_utils_hex.c \
				ft_printf_utils_num.c \
				ft_printf_utils.c
				
OBJS		= $(SRCS:.c=.o)

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -I.
RM			= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all