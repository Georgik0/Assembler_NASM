# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skitsch <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/14 16:25:21 by skitsch           #+#    #+#              #
#    Updated: 2021/03/14 16:25:23 by skitsch          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s

SRC_TEST = main.c

HEADER = libasm.h

OBJ = ${SRC:.s=.o}

OBJ_TEST = ${SRC_TEST:.c=.o}

NAME = libasm.a

TEST = main

CC_TEST = gcc

RM = rm

%.o: %.s ${HEADER}
	nasm -f macho64 -s $< -o $@

%.o: %.c ${HEADER}
	${CC_TEST} -c $< -o $@

${NAME}:	${OBJ} ${HEADER} Makefile
			ar rc ${NAME} ${OBJ}
			ranlib ${NAME}

all:	${NAME}

test:	${NAME} ${OBJ_TEST}
		${CC_TEST} ${OBJ_TEST} libasm.a -o ${TEST}
		./${TEST}

clean:
		${RM} -f ${OBJ} ${OBJ_TEST}

fclean:	clean
		${RM} -f ${NAME} ${TEST} file.txt ft_file.txt

re:		fclean all

.PHONY:	all test clean fclean re