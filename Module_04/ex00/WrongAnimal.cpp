/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:17:43 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/26 14:39:48 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

WrongAnimal::WrongAnimal( void ) : _type( "Wrong Animal" )
{
	std::cout << "WrongAnimal Default Constructor Called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( const WrongAnimal& copy )
{
	std::cout << "Wrong Animal Copy Constructor Called" << std::endl;
	this->_type = copy.getType();
	return ;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "Wrong Animal Destructor Called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& copy )
{
	std::cout << "Wrong Animal Copy Assignment Operator Called" << std::endl;
	if ( this != &copy )
	{
		this->_type = copy.getType();
	}
	return ( *this );
}

/* -------------------------------------------------------------------------- */
/*  							Getter & Setter								  */
/* -------------------------------------------------------------------------- */

std::string	WrongAnimal::getType( void ) const
{
	return ( this->_type );
}

/* -------------------------------------------------------------------------- */
/*  								Methods									  */
/* -------------------------------------------------------------------------- */

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "Any noise that passes through your head an wrong animal could make" << std::endl;
	return ;
}
