/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:17:45 by acaillea          #+#    #+#             */
/*   Updated: 2022/09/20 09:59:51 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

Dog::Dog( void )
{
	std::cout << "Dog Default Constructor Called" << std::endl;
	this->_type = "Dog";
	return ;
}

Dog::Dog( const Dog& copy )
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	this->_type = copy.getType();
	return ;
}

Dog::~Dog( void )
{
	std::cout << "Dog Destructor Called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

Dog&	Dog::operator=( const Dog& copy )
{
	std::cout << "Dog Copy Assignment Operator Called" << std::endl;
	if ( this != &copy )
	{
		this->_type = copy.getType();
	}
	return ( *this );
}

/* -------------------------------------------------------------------------- */
/*  								Methods									  */
/* -------------------------------------------------------------------------- */

void	Dog::makeSound( void ) const
{
	std::cout << "This " << this->_type << " makes Whaouf Whaouf..." << std::endl;
	return ;
}
