/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:19:13 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/20 17:28:35 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

Form::Form( void ) : _name( "Default" ) , _signed( 0 ) , _signedgrade( 50 ) , _execgrade( 10 )
{
	std::cout << this->_name << " : Form Default Constructor Called" << std::endl;
	return ;
}

Form::Form( const Form& copy ) : _name( copy.getName() + "_copy" ) , _signed( 0 ) ,\
		 _signedgrade( copy.getSignedGrade() ) , _execgrade( copy.getExecGrade() )
{
	std::cout << this->_name << " : Form Copy Constructor Called" << std::endl;
	return ;
}

Form::Form( std::string name , int signedgrade , int execgrade ) : \
		_name( name ) , _signed( 0 ) , _signedgrade( signedgrade ) , _execgrade( execgrade )
{
	if ( signedgrade <= 0 || execgrade <= 0 )
	{
		throw ( Form::GradeTooHighException() );
	}
	else if ( signedgrade > 150 || execgrade > 150 )
	{
		throw ( Form::GradeTooLowException() );
	}
	else
	{
		std::cout << this->_name << " : Form Full Constructor Called" << std::endl;
	}
	return ;
}

Form::~Form( void )
{
	std::cout << this->getName() << " : Form Destructor Called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

Form&	Form::operator=( const Form& copy )
{
	std::cout << "Form Copy Assignment Operator Called" << std::endl;
	if ( this != &copy )
	{
		this->_signed = copy.getSigned();
	}
	return ( *this );
}

std::ostream&	operator<<( std::ostream& o , Form const & rhs)
{
	o << rhs.getName() << ", form which is ";
	if ( rhs.getSigned() )
		o << "signed ";
	else
		o << "not signed ";
	o << std::endl;
	o << " -- Level to sign : " << rhs.getSignedGrade() << std::endl;
	o << " -- Level to execute : " << rhs.getExecGrade() << std::endl;

	return ( o );
}

/* -------------------------------------------------------------------------- */
/*  							Getter & Setter								  */
/* -------------------------------------------------------------------------- */

const std::string		Form::getName( void ) const
{
	return ( this->_name );
}

bool	Form::getSigned( void ) const
{
	return ( this->_signed );
}

void	Form::setSigned( const bool sign )
{
	std::cout << this->_name << " form signed value was set to ";
	if ( sign )
		std::cout << "signed";
	else
		std::cout << "not signed";
	std::cout << std::endl;
	this->_signed = sign;
	return ;
}

int		Form::getSignedGrade( void ) const
{
	return ( this->_signedgrade );
}

int		Form::getExecGrade( void ) const
{
	return ( this->_execgrade );
}

/* -------------------------------------------------------------------------- */
/*  								Methods									  */
/* -------------------------------------------------------------------------- */

void	Form::beSigned( const Bureaucrat& bubu )
{
	if ( bubu.getGrade() <= this->_signedgrade && !this->_signed )
	{
		std::cout << bubu.getName() << " signed " << this->_name << " form" << std::endl; 
		this->_signed = 1;
	}
	else if ( bubu.getGrade() > this->_signedgrade )
	{
		throw ( Form::GradeTooLowException() );
	}
	else if ( this->_signed )
	{
		throw ( Form::AlreadySignedException() );
	}
	return ;
}

/* -------------------------------------------------------------------------- */
/*  								Exceptions								  */
/* -------------------------------------------------------------------------- */

const char*	Form::GradeTooHighException::what() const throw()
{
	return ( "Grade Too High" );
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ( "Grade Too Low" );
}

const char* Form::AlreadySignedException::what() const throw()
{
	return ( "This form is Alfready Signed" );
}
