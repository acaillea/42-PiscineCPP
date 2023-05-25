/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:21:59 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/23 16:32:07 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

FragTrap::FragTrap( void )
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap( const FragTrap& copy ) : \
			ClapTrap( copy.getName() , copy.getHitPoint() , copy.getEnergyPoint() , copy.getAttackDamage() )
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap( std::string inname ) : ClapTrap( inname , 100 , 100 , 30 )
{
	std::cout << "FragTrap String constructor called" << std::endl;
	return ;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap Destructor called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

FragTrap&	FragTrap::operator=( const FragTrap& rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_hitpoint = rhs.getAttackDamage();
		this->_enerpoint = rhs.getEnergyPoint();
		this->_attdamag = rhs.getAttackDamage();
	}
	return ( *this );
}

/* -------------------------------------------------------------------------- */
/*  								Methods									  */
/* -------------------------------------------------------------------------- */

void	FragTrap::attack( const std::string& target )
{
	if ( this->_hitpoint > 0 && this->_enerpoint > 0 )
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attdamag << " points of damage!" << std::endl;
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

void	FragTrap::highFivesGuys( void )
{
	if ( this->_hitpoint > 0 && this->_enerpoint > 0 )
	{
		std::cout << "Hi ! This is " << this->_name << ", who wants a high five ?" << std::endl;
		this->_enerpoint -= 1;
	}
	else
	{
		if ( this->_hitpoint == 0 )
			std::cout << this->_name << " has not enough hit points to ask for high five." << std::endl;
		if ( this->_enerpoint == 0 )
			std::cout << this->_name << " has not enough energy points to ask for high five." << std::endl;
	}
	return ;
}
