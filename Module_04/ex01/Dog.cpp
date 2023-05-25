/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:17:45 by acaillea          #+#    #+#             */
/*   Updated: 2022/09/20 11:31:21 by acaillea         ###   ########.fr       */
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
	this->_ibrain = new Brain();
	return ;
}

Dog::Dog( const Dog& copy )
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	this->_type = copy.getType();
	this->_ibrain = new Brain( *(copy.getBrain()) );
	return ;
}

Dog::~Dog( void )
{
	std::cout << "Dog Destructor Called" << std::endl;
	delete (this->_ibrain);
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
		if ( this->_ibrain )
			delete ( this->_ibrain );
		this->_ibrain = new Brain( *( copy.getBrain() ) );
	}
	return ( *this );
}

/* -------------------------------------------------------------------------- */
/*  							Getter & Setter								  */
/* -------------------------------------------------------------------------- */

std::string	Dog::getIdea( int pos ) const
{
	return ( this->_ibrain->getIdea( pos ));
}

Brain*		Dog::getBrain( void ) const
{
	return ( this->_ibrain );
}

/* -------------------------------------------------------------------------- */
/*  								Methods									  */
/* -------------------------------------------------------------------------- */

void	Dog::makeSound( void ) const
{
	std::cout << "This " << this->_type << " makes Whaouf..." << std::endl;
	return ;
}
