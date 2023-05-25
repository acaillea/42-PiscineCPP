/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:12:22 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/20 17:34:58 by acaillea         ###   ########.fr       */
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

Bureaucrat::Bureaucrat( std::string name , int grade ) : _name( name )
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

std::ostream&	operator<<( std::ostream& o , Bureaucrat const & rhs )
{
	o << rhs.getName() << ", bureaucrat grade is "  << rhs.getGrade() << std::endl;
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

void	Bureaucrat::signForm( Form& form ) const
{
	try
	{
		form.beSigned( *this );
		std::cout << this->_name << " signed " << form.getName() << " form with grade " << this->_grade << std::endl; 
		form.setSigned( 1 );
	}
	catch( const std::exception& e )
	{
		std::cout << "Bureaucrat " << this->_name << " With a Grade " << \
			this->_grade << " Cannot Sign " << form.getName() << " Because " << e.what() << std::endl;
	}
	return ;
}

void	Bureaucrat::executeForm( Form const & form ) const
{
	try
	{
		form.execute( *this );
		std::cout << this->_name << " executed " << form.getName() << " form with grade " << this->_grade << std::endl; 
	}
	catch( const std::exception& e )
	{
		std::cout << "Bureaucrat " << this->_name << " With a Grade " << \
			this->_grade << " Cannot Execute " << form.getName() << " Because " << e.what() << std::endl;
	}
	return ;
}

/* -------------------------------------------------------------------------- */
/*  								Exceptions								  */
/* -------------------------------------------------------------------------- */

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ( "--> Nope : Grade too high, over 1" );
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ( "--> Nope : Grade too low, below 150" );
}
