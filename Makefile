# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vde-vasc <vde-vasc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/06 18:25:11 by vde-vasc          #+#    #+#              #
#    Updated: 2022/05/13 17:42:27 by vde-vasc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_atoi.c ft_bzero.c ft_memset.c

OBJS	=	${SRCS:.c=.o}

NAME	=	libft.a

LIBNAME	=	-lft

CC	=	cc

AR	=	ar

LBFLAGS	=	rc

RM	=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $<  -o ${<:.c=.o}
	
${NAME}:	${OBJS}
	${AR} ${LBFLAGS} ${NAME} ${OBJS}

all:	${NAME}

compile:	${NAME}
	${CC} ${CFLAGS} main.c -L. ${LIBNAME} 

clean:
	${RM} ${OBJS}
	
fclean:	clean
	${RM} ${NAME}
	
re:	fclean all

.PHONY	=	all clean fclean re
