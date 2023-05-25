/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:17:41 by acaillea          #+#    #+#             */
/*   Updated: 2022/09/20 11:31:13 by acaillea         ###   ########.fr       */
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
	this->_ibrain = new Brain();
	return ;
}

Cat::Cat( const Cat& copy )
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	this->_type = copy.getType();
	this->_ibrain = new Brain( *(copy.getBrain()) );
	return ;
}

Cat::~Cat( void )
{
	std::cout << "Cat Destructor Called" << std::endl;
	delete (this->_ibrain);
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
		if ( this->_ibrain )
			delete ( this->_ibrain );
		this->_ibrain = new Brain( *( copy.getBrain() ) );
	}
	return ( *this );
}

/* -------------------------------------------------------------------------- */
/*  							Getter & Setter								  */
/* -------------------------------------------------------------------------- */

std::string	Cat::getIdea( int pos ) const
{
	return ( this->_ibrain->getIdea( pos ));
}

Brain*		Cat::getBrain( void ) const
{
	return ( this->_ibrain );
}

/* -------------------------------------------------------------------------- */
/*  								Methods									  */
/* -------------------------------------------------------------------------- */

void	Cat::makeSound( void ) const
{
	std::cout << "This " << this->_type << " makes Meouwwwwww..." << std::endl;
	return ;
}
