/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: I-lan <I-lan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:23:49 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/06 21:52:31 by I-lan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

Ice::Ice( void ) : AMateria( "ice" )
{
	std::cout << "Ice Default Constructor Called" << std::endl;
	return ;
}

Ice::Ice( const Ice& copy ) : AMateria( copy.getType() )
{
	std::cout << "Ice Copy Constructor Called" << std::endl;
	this->_type = copy.getType();
	return ;
}

Ice::~Ice( void )
{
	std::cout << "Ice Destructor Called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

Ice&	Ice::operator=( const Ice& copy )
{
	std::cout << "Ice Copy Assignment Operator Called" << std::endl;
	if ( this != &copy )
	{
		this->_type = copy.getType();
	}
	return ( *this );
}

/* -------------------------------------------------------------------------- */
/*  								Methods									  */
/* -------------------------------------------------------------------------- */

AMateria* 	Ice::clone( void ) const
{
	Ice*	tmp = new Ice( );

	return ( tmp );
}

void		Ice::use( ICharacter& target )
{
	std::cout << this->_type << " * shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}

