/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: I-lan <I-lan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:12:22 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/07 21:16:20 by I-lan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

Bureaucrat::Bureaucrat( void ) : _grade( 150 ) , _name( "Zen" )
{
	std::cout << this->_name << " ( grade : " << this->_grade << " ) : Bureaucrat Default Constructor Called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( int grade , std::string name ) : _name( name )
{
	if ( grade < 1 )
	{
		throw ( Bureaucrat::GradeTooHighException() );
	}
	else if ( grade > 150 )
	{
		throw ( Bureaucrat::GradeTooLowException() );
	}
	else
	{
		this->_grade = grade;
		std::cout << this->_name << " ( grade : " << this->_grade << " ) : Bureaucrat Constructor Called" << std::endl;
	}
	return ;
}

Bureaucrat::Bureaucrat( const Bureaucrat& copy ) : _grade( copy.getGrade() ) , _name( copy.getName() + "_copy" )
{
	std::cout << this->_name << " ( grade : " << this->_grade << " ) : Bureaucrat Copy Constructor Called" << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << this->_name << " : Bureaucrat Destructor Called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat& copy )
{
	std::cout << "Bureaucrat Copy Assignment Operator Called" << std::endl;
	if ( this != &copy )
	{
		this->_grade = copy.getGrade();
	}
	return ( *this );
}

std::ostream&	operator<<( std::ostream& o , Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade is "  << rhs.getGrade();

	return ( o );
}

/* -------------------------------------------------------------------------- */
/*  							Getter & Setter								  */
/* -------------------------------------------------------------------------- */

int			Bureaucrat::getGrade( void ) const
{
	return ( this->_grade );
}

std::string	Bureaucrat::getName( void ) const
{
	return ( this->_name );
}

/* -------------------------------------------------------------------------- */
/*  								Others									  */
/* -------------------------------------------------------------------------- */

void	Bureaucrat::incrementGrade( void )
{
	std::cout << this->_name << " got incrementation of his grade by one" << std::endl;
	if ( this->_grade > 1)
	{
		this->_grade--;
		std::cout << "--> Grade : from " << this->_grade + 1 << " to " << this->_grade << std::endl;
	}
	else
	{
		throw ( Bureaucrat::GradeTooHighException() );
	}
	return ;
}

void	Bureaucrat::decrementGrade( void )
{
	std::cout << this->_name << " got decrementation of his grade by one" << std::endl;
	if ( this->_grade < 150 )
	{
		this->_grade++;
		std::cout << "--> Grade : from " << this->_grade - 1 << " to " << this->_grade << std::endl;
	}
	else
	{
		throw ( Bureaucrat::GradeTooLowException() );
	}
	return ;
}

/* -------------------------------------------------------------------------- */
/*  								Exceptions								  */
/* -------------------------------------------------------------------------- */

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ( "--> Grade too high, nobody can be over 1");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ( "--> Grade too low, nobody can be below 150");
}
