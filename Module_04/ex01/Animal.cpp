/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:05:28 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/26 17:49:39 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

Animal::Animal( void ) : _type( "Animal")
{
	std::cout << "Animal Default Constructor Called" << std::endl;
	return ;
}

Animal::Animal( const Animal& copy ) : _type( copy.getType() )
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	return ;
}

Animal::~Animal( void )
{
	std::cout << "Animal Destructor Called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

Animal&	Animal::operator=( const Animal& copy )
{
	std::cout << "Animal Copy Assignment Operator Called" << std::endl;
	if ( this != &copy )
	{
		this->_type = copy.getType();
	}
	return ( *this );
}

/* -------------------------------------------------------------------------- */
/*  							Getter & Setter								  */
/* -------------------------------------------------------------------------- */

std::string	Animal::getType( void ) const
{
	return ( this->_type );
}

/* -------------------------------------------------------------------------- */
/*  								Methods									  */
/* -------------------------------------------------------------------------- */

void	Animal::makeSound( void ) const
{
	std::cout << "Any noise that passes through your head an animal could make" << std::endl;
	return ;
}
