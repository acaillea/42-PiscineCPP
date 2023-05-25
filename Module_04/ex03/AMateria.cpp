/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: I-lan <I-lan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:37:01 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/06 18:24:50 by I-lan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

AMateria::AMateria( void )
{
	std::cout << "AMateria Default Constructor Called" << std::endl;
	return ;
}

AMateria::AMateria( const AMateria& copy ) : _type( copy.getType() )
{
	std::cout << "AMateria Copy Constructor Called" << std::endl;
	return ;
}

AMateria::AMateria( std::string const & type ) : _type( type )
{
	std::cout << "AMateria String Constructor Called" << std::endl;
	return ;
}

AMateria::~AMateria( void )
{
	std::cout << "AMateria Destructor Called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

AMateria&	AMateria::operator=( const AMateria& copy )
{
	std::cout << "AMateria Copy Assignment Operator Called" << std::endl;
	if ( this != &copy )
	{
		this->_type = copy.getType();
	}
	return ( *this );
}

/* -------------------------------------------------------------------------- */
/*  							Getter & Setter								  */
/* -------------------------------------------------------------------------- */

std::string const & AMateria::getType() const
{
	return ( this->_type );
}
