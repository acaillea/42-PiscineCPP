/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: I-lan <I-lan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:41:01 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/08 17:06:04 by I-lan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

RobotomyRequestForm::RobotomyRequestForm( void ) : Form( "Default RobotomyRequest" , 145 , 137 )
{
	this->_target = "Default target";
	std::cout << "RobotomyRequestForm Default Constructor Called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& copy ) : Form( copy.getName() + "_copy" , copy.getSignedGrade() , copy.getExecGrade() )
{
	this->_target = copy.getTarget();
	std::cout << "RobotomyRequestForm Copy Constructor Called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form( "RobotomyRequest" , 145 , 137 )
{
	this->_target = target;
	std::cout << "RobotomyRequestForm String Constructor Called" << std::endl;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	std::cout << "RobotomyRequestForm Destructor Called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

RobotomyRequestForm&	RobotomyRequestForm::operator=( const RobotomyRequestForm& copy )
{
	std::cout << "RobotomyRequestForm Copy Assignment Operator Called" << std::endl;
	if ( this != &copy )
	{
		this->_target = copy.getTarget();
	}
	return ( *this );
}

/* -------------------------------------------------------------------------- */
/*  							Getter & Setter								  */
/* -------------------------------------------------------------------------- */

std::string		RobotomyRequestForm::getTarget( void ) const
{
	return ( this->_target );
}

/* -------------------------------------------------------------------------- */
/*  								Methods									  */
/* -------------------------------------------------------------------------- */

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
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
		bool TrueFalse = ( std::rand() % 2 );
		std::cout << "BRRrrrRRRRRZzzzzZZzpppPPPRRRRRrrrrrrr tchiiiiii..." << std::endl;
		if ( TrueFalse == 0 )
		{
			std::cout << this->getName() << " has been robotomized by " << executor.getName() << std::endl;
		}
		else
		{
			throw ( RobotomyRequestForm::FailureFiftyFiftyException() );
		}
	}
	return ;
}

/* -------------------------------------------------------------------------- */
/*  								Exceptions								  */
/* -------------------------------------------------------------------------- */

const char* RobotomyRequestForm::FailureFiftyFiftyException::what() const throw()
{
	return ( "This form escapes to robotomizing" );
}
