/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:48:04 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/26 17:13:21 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

Brain::Brain( void )
{
	std::cout << "Brain Default Constructor Called" << std::endl;

	this->_ideas = new std::string[100];
	for ( int i = 0 ; i < 100 ; i++ )
	{
		this->_ideas[i] = "Good idea number : " + std::to_string(i);
	}
	return ;
}

Brain::Brain( const Brain& copy )
{
	std::cout << "Brain Copy Constructor Called" << std::endl;

	this->_ideas = new std::string[100];
	for ( int i = 0 ; i < 100 ; i++ )
	{
		this->_ideas[i] = copy.getIdea( i );
	}
	return ;
}

Brain::~Brain( void )
{
	std::cout << "Brain Destructor Called" << std::endl;

	delete [] (this->_ideas);
	return ;
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

Brain&	Brain::operator=( const Brain& copy )
{
	std::cout << "Brain Copy Assignment Operator Called" << std::endl;
	if ( this != &copy )
	{
		for ( int i = 0 ; i < 100 ; i++ )
		{
			this->_ideas[i] = copy.getIdea( i );
		}
	}
	return ( *this );
}

/* -------------------------------------------------------------------------- */
/*  							Getter & Setter								  */
/* -------------------------------------------------------------------------- */

std::string	Brain::getIdea( int pos ) const
{
	return ( this->_ideas[ pos ] );
}	
