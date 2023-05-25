/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 13:40:04 by acaillea          #+#    #+#             */
/*   Updated: 2022/11/03 15:26:24 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

Weapon::Weapon ( std::string inType ) : _type( inType )
{
	return ;
}

Weapon::~Weapon( void )
{
	return ;
}

/* -------------------------------------------------------------------------- */
/*  								Setter									  */
/* -------------------------------------------------------------------------- */

void	Weapon::setType( std::string inType )
{
	this->_type = inType;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  								Getter									  */
/* -------------------------------------------------------------------------- */

std::string const &	Weapon::getType( void ) const
{
	return ( this->_type );
}