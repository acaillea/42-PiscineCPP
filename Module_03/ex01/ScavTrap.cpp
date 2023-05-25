/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:12:26 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/23 15:59:39 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

ScavTrap::ScavTrap( void )
{
	std::cout << "ScavTrap Default Constructor Called" << std::endl;
	return ;
}

ScavTrap::ScavTrap( const ScavTrap& copy ) : \
			ClapTrap( copy.getName() , copy.getHitPoint() , copy.getEnergyPoint() , copy.getAttackDamage() )
{
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string strin ) : ClapTrap( strin , 100 , 50 , 20 )
{
	std::cout << "ScavTrap String Constructor Called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap Destructor Called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

ScavTrap&	ScavTrap::operator=( const ScavTrap& copy )
{
	std::cout << "ScavTrap Copy Assignment Operator Called" << std::endl;
	if ( this != &copy )
	{
		this->_name = copy.getName();
		this->_hitpoint = copy.getAttackDamage();
		this->_enerpoint = copy.getEnergyPoint();
		this->_attdamag = copy.getAttackDamage();
	}
	return ( *this );
}

/* -------------------------------------------------------------------------- */
/*  								Others									  */
/* -------------------------------------------------------------------------- */

void	ScavTrap::attack( const std::string& target )
{
	if ( this->_hitpoint > 0 && this->_enerpoint > 0 )
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attdamag << " points of damage!" << std::endl;
		this->_enerpoint -= 1;
	}
	else
	{
		if ( this->_hitpoint == 0 )
			std::cout << this->_name << " has not enough hit points to attack..." << std::endl;
		if ( this->_enerpoint == 0 )
			std::cout << this->_name << " has not enough energy points to attack..." << std::endl;
	}
	return ;
}

void	ScavTrap::guardGate( void )
{
	if ( this->_hitpoint > 0 && this->_enerpoint > 0 )
	{
		std::cout << "ScavTrap " << this->_name << " has entered Gate keeper mode." << std::endl;
		this->_enerpoint -= 1;
	}
	else
	{
		if ( this->_hitpoint == 0 )
			std::cout << this->_name << " has not enough hit points to enter in Gate keeper mode." << std::endl;
		if ( this->_enerpoint == 0 )
			std::cout << this->_name << " has not enough energy points to enter in Gate keeper mode." << std::endl;
	}
	return ;
}
