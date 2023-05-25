/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:17:47 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/26 14:38:54 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

WrongCat::WrongCat( void )
{
	std::cout << "Wrong Cat Default Constructor Called" << std::endl;
	this->_type = "Wrong Cat";
	return ;
}

WrongCat::WrongCat( const WrongCat& copy )
{
	std::cout << "Wrong Cat Copy Constructor Called" << std::endl;
	this->_type = copy.getType();
	return ;
}

WrongCat::~WrongCat( void )
{
	std::cout << "Wrong Cat Destructor Called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

WrongCat&	WrongCat::operator=( const WrongCat& copy )
{
	std::cout << "Wrong Cat Copy Assignment Operator Called" << std::endl;
	if ( this != &copy )
	{
		this->_type = copy.getType();
	}
	return ( *this );
}

/* -------------------------------------------------------------------------- */
/*  								Methods									  */
/* -------------------------------------------------------------------------- */

void	WrongCat::makeSound( void ) const
{
	std::cout << "This Wrong Cat " << this->_type << " makes Meouwwwwww..." << std::endl;
	return ;
}
