/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 13:40:45 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/10 18:01:47 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

HumanA::HumanA ( std::string inName , Weapon &inWeapon ): _nameA( inName ) , _weaponA( inWeapon )
{
	std::cout << inName << " ready to figth" << std::endl;
	return ;
}

HumanA::~HumanA( void )
{
	std::cout << this->_nameA << " is dead" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  								Setter									  */
/* -------------------------------------------------------------------------- */

void	HumanA::setName( std::string inName )
{
	this->_nameA = inName;
	return ;
}

void	HumanA::setWeapon( Weapon inWeapon )
{
	this->_weaponA = inWeapon;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  								Getter									  */
/* -------------------------------------------------------------------------- */

std::string	HumanA::getName( void ) const
{
	return (this->_nameA);
}

Weapon&		HumanA::getWeapon ( void ) const
{
	return (this->_weaponA);
}

/* -------------------------------------------------------------------------- */
/*  								Other									  */
/* -------------------------------------------------------------------------- */

void	HumanA::attack( void ) const
{
	std::cout << this->getName() << " attacks with their " << this->getWeapon().getType() << std::endl;
	return ;
}
