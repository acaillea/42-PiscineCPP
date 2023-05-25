/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:51:01 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/23 16:11:53 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

ClapTrap::ClapTrap( void )
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( const ClapTrap& copy ) : \
			_name( copy.getName() ) , _hitpoint( copy.getHitPoint() ) , _enerpoint( copy.getEnergyPoint() ) , _attdamag( copy.getAttackDamage() )
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string strin ) : _name( strin ) , _hitpoint( 10 ) , _enerpoint( 10 ) , _attdamag ( 0 )
{
	std::cout << "String constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  								Getter									  */
/* -------------------------------------------------------------------------- */

std::string	ClapTrap::getName( void ) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoint( void ) const
{
	return ( this->_hitpoint );
}

unsigned int	ClapTrap::getEnergyPoint( void ) const
{
	return ( this->_enerpoint );
}
unsigned int	ClapTrap::getAttackDamage( void ) const
{
	return ( this->_attdamag );
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

ClapTrap&	ClapTrap::operator=( const ClapTrap& copy )
{
	std::cout << "Copy assignment operator called" << std::endl;
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

void	ClapTrap::attack( const std::string& target )
{
	if ( this->_hitpoint > 0 && this->_enerpoint > 0 )
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attdamag << " points of damage!" << std::endl;
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

void	ClapTrap::takeDamage( unsigned int amount )
{
	if ( this->_hitpoint > 0 )
	{
		std::cout << "ClapTrap " << this->_name << " is attacked and loses " << amount << " of hit points." << std::endl;
		if ( this->_hitpoint >= amount )
			this->_hitpoint -= amount;
		else
			this->_hitpoint = 0;
	}
	else
		std::cout << this->_name << " has zero hit points, go find yourself another victim." << std::endl;
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if ( this->_hitpoint > 0 && this->_enerpoint > 0 )
	{
		std::cout << "ClapTrap " << this->_name << " repairs itself and gains " << amount << " of hit points." << std::endl;
		this->_hitpoint += amount;
		this->_enerpoint -= 1;
	}
	else
	{
		if ( this->_hitpoint == 0 )
			std::cout << this->_name << " has not enough hit points to be repaired..." << std::endl;
		if ( this->_enerpoint == 0 )
			std::cout << this->_name << " has not enough energy points to be repaired..." << std::endl;
	}
	return ;
}
