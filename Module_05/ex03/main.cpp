/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:12:04 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/20 17:55:20 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main()

{
	/* Constructors */
	std::cout << std::endl;
	std::cout << "CONSTRUCTING:" << std::endl;
	std::cout << "----------------------------" << std::endl;

	Intern	intern;
	Form	*robo_form;
	Form	*shrub_form;
	Form	*president_form;
	Form	*unknown_form;
	std::cout << std::endl;
	//-----------------------------------------------------

	std::cout << "INTERN TESTS:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	/* Robo */
	robo_form = intern.makeForm( "robotomy request", "robo" );
	std::cout << *robo_form << " was just created " << std::endl << std::endl;

	/* President */
	president_form = intern.makeForm( "presidential pardon", "president" );
	std::cout << *president_form << " was just created " << std::endl << std::endl;

	/* Shrub */
	shrub_form = intern.makeForm( "shrubbery creation", "shrub" );
	std::cout << *shrub_form << " was just created " << std::endl << std::endl;

	/* Unknown */
	try
	{
		unknown_form = intern.makeForm( "driving licence", "drive" );
		std::cout << *unknown_form << " was just created " << std::endl << std::endl;
	}
	catch (Intern::NonExistentFormException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	std::cout << "DESTRUCTORS:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	delete robo_form;
	delete shrub_form;
	delete president_form;
	delete unknown_form;
	return (0);
	//-------------------------------------------------------	
	/* Check leaks */
	// system("leaks intern");
	return (0);
}
