/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: I-lan <I-lan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:17:53 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/06 21:51:40 by I-lan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

Cure::Cure( void ) : AMateria( "cure" )
{
	std::cout << "Cure Default Constructor Called" << std::endl;
	return ;
}

Cure::Cure( const Cure& copy ) : AMateria( copy.getType() )
{
	std::cout << "Cure Copy Constructor Called" << std::endl;
	return ;
}

Cure::~Cure( void )
{
	std::cout << "Cure Destructor Called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

Cure&	Cure::operator=( const Cure& copy )
{
	std::cout << "Cure Copy Assignment Operator Called" << std::endl;
	if ( this != &copy )
	{
		this->_type = copy.getType();
	}
	return ( *this );
}

/* -------------------------------------------------------------------------- */
/*  								Methods									  */
/* -------------------------------------------------------------------------- */

AMateria* 	Cure::clone( void ) const
{
	Cure*	tmp = new Cure();

	return ( tmp );
}

void		Cure::use( ICharacter& target )
{
	std::cout << this->_type << " * heals " << target.getName() << "'s wounds *" << std::endl;
}
