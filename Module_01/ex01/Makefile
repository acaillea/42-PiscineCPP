# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/08 14:14:16 by acaillea          #+#    #+#              #
#    Updated: 2022/11/03 15:11:54 by acaillea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Color code	-.-.-.-.-.-.-

C_DEFAUT		=	\033[0;39m
C_ORANGE		=	\033[0;33m
C_GREEN 		= 	\033[1;32m
C_BLUE			=	\033[0;94m
C_RED			= 	\033[0;31m

#-.-.-.-.-.-.-.-.-.-.-.-.-.-.-

NAME	= 	hordeOfZombies

#-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-#

SRCS	= 	main.cpp		\
			Zombie.cpp		\
			zombieHorde.cpp

#-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-#

CC		= c++
FLAGS	= -Wall -Werror -Wextra -std=c++98
RM		= rm -rf
PRI		= printf
VEL		= sleep

#-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-#

all : ${NAME}

${NAME} :
	@${CC} ${FLAGS} ${SRCS} -o ${NAME}
	@${PRI} "${C_ORANGE}Compiling ...\n${C_DEFAUT}"
	@${VEL} 0.3
	@${PRI} "${C_GREEN}$@ --> Successfully Build !\n${C_DEFAUT}"

#-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-#

clean :

fclean : clean
	@${RM} ${NAME}
	@${PRI} "${C_RED}Exec file deleted.\n${C_DEFAUT}"

re : fclean all
