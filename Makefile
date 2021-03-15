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

SRC = ft_strlen.s ft_strcpy.s

SRC_TEST = hello.s

HEADER = libasm.h

OBJ = ${SRC:.s=.o}

OBJ_TEST = ${SRC_TEST:.s=.o}

NAME = libasm.a

MAIN = test

FLAGS_TEST = -macosx_version_min 10.7.0 -lSystem

all:	${OBJ} ${HEADER}
		ar rc ${NAME} ${OBJ}
		ranlib ${NAME}

test:	${OBJ_TEST}
		ld ${FLAGS_TEST} ${OBJ_TEST} -o ${MAIN}
		./${MAIN}

%.o: %.s
	nasm -f macho64 -s $< -o $@