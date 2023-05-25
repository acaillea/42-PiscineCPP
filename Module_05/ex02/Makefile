# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 12:12:42 by I-lan             #+#    #+#              #
#    Updated: 2022/09/20 17:43:29 by acaillea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -.-.	Color code	-.-.-.-.-.

C_DEFAUT		=	\033[0;39m
C_ORANGE		=	\033[0;33m
C_GREEN 		= 	\033[1;32m
C_RED			= 	\033[0;31m

#-.-.-.-.-.-.-.-.-.-.-.-.-.-.-

NAME	= 	specificform

#-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-#

SRCS	= 	main.cpp					\
			Bureaucrat.cpp				\
			Form.cpp					\
			ShrubberyCreationForm.cpp	\
			RobotomyRequestForm.cpp		\
			PresidentialPardonForm.cpp

#-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-#

CC		= 	c++
FLAGS	= 	-Wall -Werror -Wextra -std=c++98
RM		= 	rm -rf
PRI		= 	printf
VEL		= 	sleep

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
	@${RM} ${NAME} shrub
	@${PRI} "${C_RED}Exec file deleted.\n${C_DEFAUT}"

re : fclean all
