# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/12 18:04:57 by acaillea          #+#    #+#              #
#    Updated: 2022/08/17 13:01:44 by acaillea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Color code	-.-.-.-.-.-.-

C_DEFAUT		=	\033[0;39m
C_ORANGE		=	\033[0;33m
C_GREEN 		= 	\033[1;32m
C_BLUE			=	\033[0;94m
C_RED			= 	\033[0;31m

#-.-.-.-.-.-.-.-.-.-.-.-.-.-.-

NAME	= 	fixed

#-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-#

SRCS	= 	main.cpp		\
			Fixed.cpp

OBJS	= ${SRCS:%.cpp=%.o}

#-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-#

CC		= clang++
FLAGS	= -Wall -Werror -Wextra -std=c++98
RM		= rm -rf
PRI		= printf
VEL		= sleep

#-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-#

all : ${NAME}

${NAME} : ${OBJS}
	@${CC} ${FLAGS} ${OBJS} -o ${NAME}
	@${PRI} "${C_GREEN}$@ --> Successfully Build !\n${C_DEFAUT}"

%.o:%.cpp
	@${CC} ${FLAGS} -c $< -o $@
	@${PRI} "${C_ORANGE}Compiling ...\n${C_DEFAUT}"
	@${VEL} 0.3

#-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-#

clean :
	@${RM} ${OBJS}
	@${PRI} "${C_RED}Objects files deleted.\n${C_DEFAUT}"

fclean : clean
	@${RM} ${NAME}
	@${PRI} "${C_RED}Exec file deleted.\n${C_DEFAUT}"

re : fclean all
