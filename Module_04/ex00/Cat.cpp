/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:17:41 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/26 14:14:46 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

Cat::Cat( void )
{
	std::cout << "Cat Default Constructor Called" << std::endl;
	this->_type = "Cat";
	return ;
}

Cat::Cat( const Cat& copy )
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	this->_type = copy.getType();
	return ;
}

Cat::~Cat( void )
{
	std::cout << "Cat Destructor Called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

Cat&	Cat::operator=( const Cat& copy )
{
	std::cout << "Cat Copy Assignment Operator Called" << std::endl;
	if ( this != &copy )
	{
		this->_type = copy.getType();
	}
	return ( *this );
}

/* -------------------------------------------------------------------------- */
/*  								Methods									  */
/* -------------------------------------------------------------------------- */

void	Cat::makeSound( void ) const
{
	std::cout << "This " << this->_type << " makes Meouwwwwww..." << std::endl;
	return ;
}
