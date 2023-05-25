/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: I-lan <I-lan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:36:27 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/16 14:49:12 by I-lan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

Data::Data( void ) : _name( "Default" )
{
	std::cout << "Data Default Constructor Called" << std::endl;
	return ;
}

Data::Data( const Data& copy ) : _name( copy.getName() )
{
	std::cout << "Data Copy Constructor Called" << std::endl;
	return ;
}

Data::Data( std::string name ) : _name( name )
{
	std::cout << "Data String Constructor Called" << std::endl;
	return ;
}

Data::~Data( void )
{
	std::cout << "Data Destructor Called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

Data&	Data::operator=( const Data& copy )
{
	std::cout << "Data Copy Assignment Operator Called" << std::endl;
	if ( this != &copy )
	{
		this->_name = copy.getName();
	}
	return ( *this );
}

/* -------------------------------------------------------------------------- */
/*  							Getter & Setter								  */
/* -------------------------------------------------------------------------- */

std::string		Data::getName( void ) const
{
	return ( this->_name );
}
