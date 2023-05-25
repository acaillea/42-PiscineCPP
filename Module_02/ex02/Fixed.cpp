/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:10:47 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/18 14:40:55 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* -------------------------------------------------------------------------- */

int const 	Fixed::_bits = 8;

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

Fixed::Fixed( void ) : _value( 0 )
{
	// std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const Fixed& copy )
{
	this->setRawBits(copy.getRawBits());
	// std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed::Fixed( int const i )
{
	this->_value = i << this->_bits;
	// std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( float const f )
{
	this->_value = f * ( 1 << this->_bits );
	// std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::~Fixed( void )
{
	// std::cout << "Destructor called" << std::endl;
	return ;
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
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

Fixed&	Fixed::operator=( const Fixed& x )
{
	if ( this != &x)
		this->_value = x.getRawBits();
	// std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

/* ----------------------------- Comparaison -------------------------------- */

bool	Fixed::operator<( const Fixed& x ) const
{
	return ( this->_value < x.getRawBits( ) );
}

bool	Fixed::operator>( const Fixed& x ) const
{
	return ( this->_value > x.getRawBits( ) );
}

bool	Fixed::operator<=( const Fixed& x ) const
{
	return ( this->_value <= x.getRawBits( ) );
}

bool	Fixed::operator>=( const Fixed& x ) const
{
	return ( this->_value >= x.getRawBits( ) );
}

bool	Fixed::operator==( const Fixed& x ) const
{
	return ( this->_value == x.getRawBits( ) );
}

bool	Fixed::operator!=( const Fixed& x ) const
{
	return ( this->_value != x.getRawBits( ) );
}

/* ----------------------------- Arithmetic --------------------------------- */

Fixed	Fixed::operator+( const Fixed& x ) const
{
	Fixed tmp( this->toFloat() + x.toFloat() );
	return ( tmp );
}

Fixed	Fixed::operator-( const Fixed& x ) const
{
	Fixed tmp( this->toFloat() - x.toFloat() );
	return ( tmp );
}

Fixed	Fixed::operator*( const Fixed& x ) const
{
	Fixed tmp( this->toFloat() * x.toFloat() );
	return ( tmp );
}

Fixed	Fixed::operator/( const Fixed& x ) const
{
	Fixed tmp( this->toFloat() / x.toFloat() );
	return ( tmp );
}

/* ------------------------ Increment Decrement ----------------------------- */

Fixed	Fixed::operator++( int )
{
	Fixed	tmp( *this );

	this->_value += 1;
	return ( tmp );
}

Fixed&	Fixed::operator++( void )
{
	this->_value += 1;
	return ( *this );
}

Fixed	Fixed::operator--( int )
{
	Fixed	tmp( *this );

	this->_value -= 1;
	return ( tmp );
}

Fixed&	Fixed::operator--( void )
{
	this->_value -= 1;
	return ( *this );
}

/* ------------------------------- Min & Max -------------------------------- */

const Fixed& Fixed::min( Fixed& a , Fixed& b )
{
	if ( a.getRawBits() <= b.getRawBits() )
		return ( a );
	return ( b );
}

const Fixed& Fixed::max( Fixed& a , Fixed& b )
{
	if ( a.getRawBits() >= b.getRawBits() )
		return ( a );
	return ( b );
}

const Fixed& Fixed::min( const Fixed& a , const Fixed& b )
{
	if ( a.getRawBits() <= b.getRawBits() )
		return ( a );
	return ( b );
}

const Fixed& Fixed::max( const Fixed& a , const Fixed& b )
{
	if ( a.getRawBits() >= b.getRawBits() )
		return ( a );
	return ( b );
}

/* ------------------------------- Insertion -------------------------------- */

std::ostream&	operator<<( std::ostream& o , const Fixed& x )
{
	o << x.toFloat();
	return ( o );
}
