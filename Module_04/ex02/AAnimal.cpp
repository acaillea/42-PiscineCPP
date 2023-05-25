/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:05:28 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/26 17:49:39 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

AAnimal::AAnimal( void ) : _type( "AAnimal")
{
	std::cout << "AAnimal Default Constructor Called" << std::endl;
	return ;
}

AAnimal::AAnimal( const AAnimal& copy ) : _type( copy.getType() )
{
	std::cout << "AAnimal Copy Constructor Called" << std::endl;
	return ;
}

AAnimal::~AAnimal( void )
{
	std::cout << "AAnimal Destructor Called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

AAnimal&	AAnimal::operator=( const AAnimal& copy )
{
	std::cout << "AAnimal Copy Assignment Operator Called" << std::endl;
	if ( this != &copy )
	{
		this->_type = copy.getType();
	}
	return ( *this );
}

/* -------------------------------------------------------------------------- */
/*  							Getter & Setter								  */
/* -------------------------------------------------------------------------- */

std::string	AAnimal::getType( void ) const
{
	return ( this->_type );
}

/* -------------------------------------------------------------------------- */
/*  								Methods									  */
/* -------------------------------------------------------------------------- */

void	AAnimal::makeSound( void ) const
{
	std::cout << "Any noise that passes through your head an AAnimal could make" << std::endl;
	return ;
}
