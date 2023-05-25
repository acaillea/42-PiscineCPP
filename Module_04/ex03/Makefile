# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: I-lan <I-lan@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/06 13:22:00 by I-lan             #+#    #+#              #
#    Updated: 2022/09/06 18:21:30 by I-lan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -.-.	Color code	-.-.-.-.-.

C_DEFAUT		=	\033[0;39m
C_ORANGE		=	\033[0;33m
C_GREEN 		= 	\033[1;32m
C_RED			= 	\033[0;31m

#-.-.-.-.-.-.-.-.-.-.-.-.-.-.-

NAME	= 	amateria

#-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-#

SRCS	= 	main.cpp		\
			AMateria.cpp	\
			Character.cpp	\
			Cure.cpp		\
			Ice.cpp			\
			MateriaSource.cpp

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
