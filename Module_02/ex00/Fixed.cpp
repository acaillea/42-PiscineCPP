/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:05:22 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/18 16:42:13 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* -------------------------------------------------------------------------- */

Fixed::Fixed( void ) : _value( 0 )
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const Fixed& copy )
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(copy.getRawBits());
	return ;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */

Fixed&	Fixed::operator=( const Fixed& x )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = x.getRawBits();
	return (*this);
}

/* -------------------------------------------------------------------------- */

void	Fixed::setRawBits( int const raw )
{
	this->_value = raw;
	return ;
}

/* -------------------------------------------------------------------------- */

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}
