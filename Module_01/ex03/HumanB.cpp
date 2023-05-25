/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 13:40:56 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/11 11:45:19 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

HumanB::HumanB( std::string inName ) : _nameB( inName ) , _weaponB( NULL )
{
	std::cout << this->_nameB << " ready to figth" << std::endl;
	return ;
}

HumanB::~HumanB( void )
{
	std::cout << this->_nameB << " is dead" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  								Setter									  */
/* -------------------------------------------------------------------------- */

void	HumanB::setName( std::string inName )
{
	this->_nameB = inName;
	return ;
}

void	HumanB::setWeapon( Weapon inWeapon )
{
	this->_weaponB = &inWeapon;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  								Getter									  */
/* -------------------------------------------------------------------------- */

std::string		HumanB::getName( void ) const
{
	return (this->_nameB);
}

Weapon*		HumanB::getWeapon( void ) const
{
	return (this->_weaponB);
}

/* -------------------------------------------------------------------------- */
/*  								Other									  */
/* -------------------------------------------------------------------------- */

void	HumanB::attack( void ) const
{
	if ( this->getWeapon() )
		std::cout << this->getName() << " attacks with their " << this->getWeapon()->getType() << std::endl;
	else
		std::cout << this->getName() << " has no weapon to attack" << std::endl;
	return ;
}
