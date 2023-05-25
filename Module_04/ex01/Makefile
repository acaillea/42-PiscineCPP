# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/26 14:46:08 by acaillea          #+#    #+#              #
#    Updated: 2022/08/26 14:48:24 by acaillea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# -.-.	Color code	-.-.-.-.-.

C_DEFAUT		=	\033[0;39m
C_ORANGE		=	\033[0;33m
C_GREEN 		= 	\033[1;32m
C_RED			= 	\033[0;31m

#-.-.-.-.-.-.-.-.-.-.-.-.-.-.-

NAME	= 	brain

#-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-#

SRCS	= 	main.cpp		\
			Animal.cpp		\
			Cat.cpp			\
			Dog.cpp			\
			WrongAnimal.cpp	\
			WrongCat.cpp	\
			Brain.cpp

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
