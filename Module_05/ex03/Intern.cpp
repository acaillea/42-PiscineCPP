/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:50:40 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/20 17:51:10 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

Intern::Intern( void )
{
	std::cout << "Intern Default Constructor Called" << std::endl;
	return ;
}

Intern::Intern( const Intern& copy )
{
	( void )copy;
	std::cout << "Intern Copy Constructor Called" << std::endl;
	return ;
}

Intern::~Intern( void )
{
	std::cout << "Intern Destructor Called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

Intern&	Intern::operator=( const Intern& copy )
{
	( void )copy;
	std::cout << "Intern Copy Assignment Operator Called" << std::endl;

	return ( *this );
}

/* -------------------------------------------------------------------------- */
/*  								Methods									  */
/* -------------------------------------------------------------------------- */

Form*	Intern::makeForm( std::string form_name , std::string target ) const
{
	std::string available_form[] 	= { "shrubbery creation" , "robotomy request" , "presidential pardon" };
	Form*		ret 				= NULL;
	int 		i 					= 0;

	while ( i < 3 && form_name != available_form[i] )
	{
		i++;
	}
	switch ( i )
	{
		case 0 :
		{
			ret = new ShrubberyCreationForm( target );
			break ;	
		}
		case 1 :
		{
			ret = new RobotomyRequestForm( target );
			break ;
		}
		case 2 :
		{
			ret = new PresidentialPardonForm( target );
			break ;
		}
		default :
		{
			throw ( Intern::NonExistentFormException() );
		}
	}
	return ( ret );
}

/* -------------------------------------------------------------------------- */
/*  								Exceptions								  */
/* -------------------------------------------------------------------------- */

const char*	Intern::NonExistentFormException::what() const throw()
{
	return ( "This kind of form does not exist" );
}
