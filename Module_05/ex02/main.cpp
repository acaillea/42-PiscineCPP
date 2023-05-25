/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:12:04 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/20 17:42:26 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main()
{
	// Constructors
	std::cout << std::endl;
	std::cout << "CONSTRUCTING:" << std::endl;
	std::cout << "----------------------------" << std::endl;

	Bureaucrat				bob( "Bob", 1) ;
	Bureaucrat				bill( "Bill", 142 );
	ShrubberyCreationForm	shrub( "shrub" );
	RobotomyRequestForm		robo( "robo" );
	PresidentialPardonForm	president( "president" );
	std::cout << std::endl << std::endl;
	//-----------------------------------------------------


	// Executing
	// ShrubberyCreationForm : sign 145, exec 137
	// RobotomyRequestForm sign 72, exec 45
	// PresidentialPardonForm sign 25, exec 5

	std::cout << "SHRUBBERY CREATION FORM:" << std::endl;
	std::cout << "----------------------------" << std::endl;


	std::cout << std::endl << "[UNSIGNED]" << std::endl;
	bob.executeForm( shrub );
	shrub.beSigned( bob );


	std::cout << std::endl << "[SIGNED]" << std::endl;
	bob.executeForm( shrub );
	std::cout << std::endl;


	std::cout << std::endl << "[GRADE TO EXE TOO LOW]" << std::endl;
	bill.executeForm( shrub );
	std::cout << std::endl << std::endl;
	//-----------------------------------------------------


	std::cout << std::endl;
	std::cout << "ROBOTOMY REQUEST FORM:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << std::endl << "[UNSIGNED]" << std::endl;
	bob.executeForm( robo );
	robo.beSigned( bob );


	std::cout << std::endl << "[SIGNED (50% failure chance)]" << std::endl;
	bob.executeForm( robo );
	bob.executeForm( robo );
	bob.executeForm( robo );
	bob.executeForm( robo );
	bob.executeForm( robo );
	std::cout << std::endl;


	std::cout << std::endl << "[GRADE TO EXE TOO LOW]" << std::endl;
	bill.executeForm( robo );
	std::cout << std::endl << std::endl;
	//-----------------------------------------------------


	std::cout << std::endl;
	std::cout << "PRESIDENTIAL PARDON FORM:" << std::endl;
	std::cout << "----------------------------" << std::endl;


	std::cout << std::endl << "[UNSIGNED]" << std::endl;
	bob.executeForm( president );
	president.beSigned( bob );


	std::cout << std::endl << "[SIGNED]" << std::endl;
	bob.executeForm( president );
	std::cout << std::endl;


	std::cout << std::endl << "[GRADE TO EXE TOO LOW]" << std::endl;
	bill.executeForm( president );
	std::cout << std::endl << std::endl;
	//-----------------------------------------------------


	std::cout << "FORM COPY CONSTRUCTOR:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Bureaucrat	bob_copy( bob );
	bob_copy.decrementGrade();
	bob_copy.executeForm( president );
	std::cout << std::endl;

	Bureaucrat bill_copy( bill );
	bill_copy.executeForm( president );
	std::cout << std::endl;

	PresidentialPardonForm president_copy( president );
	bill_copy.executeForm( president_copy );
	std::cout << std::endl;

	ShrubberyCreationForm shrub_copy( shrub );
	bill_copy.executeForm( shrub_copy );
	std::cout << std::endl;

	shrub_copy.beSigned( bob );
	bill_copy.executeForm( shrub_copy );
	std::cout << std::endl;

	for ( int i = 0 ; i < 6 ; i++ )
	{
		bill_copy.incrementGrade();
	}
	bill_copy.executeForm( shrub_copy );
	std::cout << std::endl;

	//-------------------------------------------------------	

	std::cout << std::endl;
	std::cout << "DESTRUCTORS:" << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::cout << std::endl;
	/* Check leaks */
	// system("leaks specificform");
	return (0);
}
