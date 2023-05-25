/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:40:59 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/20 17:51:40 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

PresidentialPardonForm::PresidentialPardonForm( void ) : Form( "Default PresidentialPardon" , 25 , 5 )
{
	this->_target = "Default target";
	std::cout << "PresidentialPardonForm Default Constructor Called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& copy ) : Form( copy.getName() + "_copy" , copy.getSignedGrade() , copy.getExecGrade() )
{
	this->_target = copy.getTarget();
	std::cout << "PresidentialPardonForm Copy Constructor Called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form( "PresidentialPardon" , 25 , 5 )
{
	this->_target = target;
	std::cout << "PresidentialPardonForm String Constructor Called" << std::endl;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	std::cout << "PresidentialPardonForm Destructor Called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

PresidentialPardonForm&	PresidentialPardonForm::operator=( const PresidentialPardonForm& copy )
{
	std::cout << "PresidentialPardonForm Copy Assignment Operator Called" << std::endl;
	if ( this != &copy )
	{
		this->_target = copy.getTarget();
	}
	return ( *this );
}

/* -------------------------------------------------------------------------- */
/*  							Getter & Setter								  */
/* -------------------------------------------------------------------------- */

std::string		PresidentialPardonForm::getTarget( void ) const
{
	return ( this->_target );
}

/* -------------------------------------------------------------------------- */
/*  								Methods									  */
/* -------------------------------------------------------------------------- */

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const
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
		std::cout << executor.getName() << " execute form so " << this->_target \
			<< " has been forgiven by president Zaphod Beeblebrox" << std::endl;	}	
	return ;
}
