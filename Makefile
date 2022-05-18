# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vde-vasc <vde-vasc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/06 18:25:11 by vde-vasc          #+#    #+#              #
#    Updated: 2022/05/16 17:31:49 by vde-vasc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=   ft_isascii.c ft_isprint.c ft_strlen.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_isalpha.c ft_isdigit.c \
			ft_isalnum.c ft_atoi.c ft_bzero.c ft_memset.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
			ft_memcmp.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c

OBJS	=	${SRCS:.c=.o}

NAME	=	libft.a

LIBNAME	=	-lft

CC	=	cc

AR	=	ar

LBFLAGS	=	rc

RM	=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< 
	
$(NAME):	${OBJS}
	${AR} ${LBFLAGS} $(NAME) ${OBJS}

all:	${NAME}

compile:	$(NAME)
	${CC} ${CFLAGS} main.c -L. ${LIBNAME} 

clean:
	${RM} ${OBJS}
	
fclean:	clean
	${RM} $(NAME)
	
re:	fclean all

.PHONY	=	all clean fclean re
