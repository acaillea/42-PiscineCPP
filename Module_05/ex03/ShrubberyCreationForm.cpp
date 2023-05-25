/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:41:06 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/21 14:31:46 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form( "Default ShrubberyCreation" , 145 , 137 )
{
	this->_target = "Default target";
	std::cout << "ShrubberyCreationForm Default Constructor Called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& copy ) : Form( copy.getName() + "_copy" , copy.getSignedGrade() , copy.getExecGrade() )
{
	this->_target = copy.getTarget();
	std::cout << "ShrubberyCreationForm Copy Constructor Called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form( "ShrubberyCreation" , 145 , 137 )
{
	this->_target = target;
	std::cout << "ShrubberyCreationForm String Constructor Called" << std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << "ShrubberyCreationForm Destructor Called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( const ShrubberyCreationForm& copy )
{
	std::cout << "ShrubberyCreationForm Copy Assignment Operator Called" << std::endl;
	if ( this != &copy )
	{
		this->_target = copy.getTarget();
	}
	return ( *this );
}

/* -------------------------------------------------------------------------- */
/*  							Getter & Setter								  */
/* -------------------------------------------------------------------------- */

std::string		ShrubberyCreationForm::getTarget( void ) const
{
	return ( this->_target );
}

/* -------------------------------------------------------------------------- */
/*  								Methods									  */
/* -------------------------------------------------------------------------- */

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	std::string tree =\
	"              * *    				\n"
	"			*    *  *				\n"
	"		*  *    *     *  *			\n"
	"		*     *    *  *    *		\n"
	"	* *   *    *    *    *   *		\n"
	"	*     *  *    * * .#  *   *		\n"
	"	*   *     * #.  .# *   *		\n"
	"	*     '#.  #: #' * *    *		\n"
	"	*   * * '#. ##'       *			\n"
	"	*        * ###					\n"
	"			    ##					\n"
	"				##.					\n"
	"				.##:				\n"
	"				:###				\n"
	"				:###				\n"
	"				,####.				\n"
	"	***********.######.********** 	\n";

	if ( !this->getSigned() )
	{
		throw ( Form::NotSignedFormException() );
	}
	else if ( executor.getGrade() > this->getExecGrade() )
	{
		throw ( Form::GradeTooLowException() );
	}
	else
	{
		std::ofstream	off;
		off.open( this->_target );
		if ( !off.is_open() )
		{
			std::cout << "Error Opening file" << std::endl;
			return ;
		}
		off << tree;
		std::cout << "Little tree sent to " << this->_target << std::endl;
		off.close();
	}
	return ;
}
