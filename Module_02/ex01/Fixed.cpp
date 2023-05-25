/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:10:47 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/17 15:31:20 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

Fixed::Fixed( void ) : _value( 0 )
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const Fixed& copy )
{
	this->setRawBits(copy.getRawBits());
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed::Fixed( int const i )
{
	this->_value = i << this->_bits;
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( float const f )
{
	this->_value = f * ( 1 << this->_bits );
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

Fixed&	Fixed::operator=( const Fixed& x )
{
	this->_value = x.getRawBits();
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*  							Setter	&	Getter							  */
/* -------------------------------------------------------------------------- */

void	Fixed::setRawBits( int const raw )
{
	this->_value = raw;
	return ;
}

int		Fixed::getRawBits( void ) const
{
	return (this->_value);
}

/* -------------------------------------------------------------------------- */
/*  								Others									  */
/* -------------------------------------------------------------------------- */

int		Fixed::toInt( void ) const
{
	return ( this->_value >> this->_bits );
}

float	Fixed::toFloat( void ) const
{
	return ( (float)this->_value / (1 << this->_bits) ); 
}

/* -------------------------------------------------------------------------- */

std::ostream&	operator<<( std::ostream& o , const Fixed& x )
{
	o << x.toFloat();
	return ( o );
}
