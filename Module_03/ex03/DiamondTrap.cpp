/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:12:20 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/23 16:16:07 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

DiamondTrap::DiamondTrap( void )
{
	std::cout << "DiamondTrap Default Constructor Called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( const DiamondTrap& copy ) : \
			ClapTrap( copy.getName() + "_clap_name" , copy.getHitPoint() , copy.getEnergyPoint() , copy.getAttackDamage() ) ,\
			ScavTrap( copy.getName() + "_scav_name" ) , FragTrap( copy.getName() + "_frag_name" ) , _name( copy.getName() )
{
	std::cout << "DiamondTrap Copy Constructor Called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( std::string inname ) : \
			ClapTrap( inname + "_clap_name" , 100 , 50 , 30 ) , ScavTrap( inname + "_scav_name" ) , FragTrap ( inname + "_frag_name" ) , _name( inname )
{
	std::cout << "DiamondTrap String Constructor Called" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap Destructor Called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& copy )
{
	std::cout << "DiamondTrap Copy Assignment Operator Called" << std::endl;
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
/*  								Methods									  */
/* -------------------------------------------------------------------------- */

std::string	DiamondTrap::getName( void ) const
{
	return ( this->_name );
}

void	DiamondTrap::whoAmI( void )
{
	if ( this->_hitpoint > 0 && this->_enerpoint > 0 )
	{
		std::cout << "Hi, this is " << this->_name << " but my real name is " << this->ClapTrap::_name << std::endl;
		this->_enerpoint -= 1;
	}
	else
	{
		if ( this->_hitpoint == 0 )
			std::cout << this->_name << " has not enough hit points to tell who he is." << std::endl;
		if ( this->_enerpoint == 0 )
			std::cout << this->_name << " has not enough energy points to to tell who he is." << std::endl;
	}
	return ;
}
