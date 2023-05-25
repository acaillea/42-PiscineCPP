# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/29 16:39:11 by acaillea          #+#    #+#              #
#    Updated: 2022/08/06 00:19:04 by acaillea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Color 		-.-.-.-.-.-.-

C_DEFAUT		=	\033[0;39m
C_ORANGE		=	\033[0;33m
C_GREEN 		= 	\033[1;32m
C_BLUE			=	\033[0;94m
C_RED			= 	\033[0;31m

#-.-.-.-.-.-.-.-.-.-.-.-.-.-.-

NAME	= 	the_job_of_my_dreams

#-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-#

SRCS	= 	tests.cpp	\
			Account.cpp	\
		

OBJS	= 	${SRCS:%.cpp=%.o}

#-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-#

CC		= 	clang++
FLAGS	= 	-Wall -Werror -Wextra -std=c++98
RM		= 	rm -rf
PRI		= 	printf
VEL		= 	sleep

#-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-#

all : ${NAME}

${NAME} : ${OBJS}
	@${CC} ${FLAGS} ${OBJS} -o ${NAME}
	@${PRI} "${C_GREEN}$@ --> Successfully Build !\n${C_DEFAUT}"

%.o:%.cpp
	@${CC} ${FLAGS} -c $< -o $@
	@${PRI} "${C_ORANGE}Compiling ...\n${C_DEFAUT}"
	@${VEL} 0.5

#-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-#

clean :
	@${RM} ${OBJS}
	@${PRI} "${C_RED}Objects files deleted.\n${C_DEFAUT}"

fclean : clean
	@${RM} ${NAME}
	@${PRI} "${C_RED}Exec file deleted.\n${C_DEFAUT}"

re : fclean all