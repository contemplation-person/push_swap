# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juha <juha@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 09:10:21 by juha              #+#    #+#              #
#    Updated: 2022/06/27 11:50:59 by juha             ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

CC 			= 	cc
CPPFLAGS	= 	-Wall -Wextra -Werror 
NAME		= 	push_swap
SRC 		= 	push_swap.c\
				push_swap_pre_utils.c
				
HEADER		=	push_swap.h
				
OBJS	  	= 	$(SRC:.c=.o)

.PHONY : all clean fclean re t

$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) $@ $^

all : $(NAME)

clean :
	rm -f $(OBJS) 

fclean : clean
	rm -f $(NAME) a.out

re : fclean all

t : $(NAME) test.c
	$(CC) $(CPPFLAGS)test.c $(SRC) -g3 -fsanitize=address
	rm -f *.o *.a