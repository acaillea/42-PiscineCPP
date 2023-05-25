/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: I-lan <I-lan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:36:10 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/07 11:50:19 by I-lan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

Character::Character( void )
{
	std::cout << "Character Default Constructor Called" << std::endl;
	return ;
}

Character::Character( const Character& copy ) : _name( copy.getName() + "_copy" )
{
	std::cout << "Character Copy Constructor Called" << std::endl;
	for ( int i = 0 ; i < 4 ; i++ )
	{
		if ( copy.getInv( i ) )
			this->_inventory[ i ] = copy.getInv( i )->clone();
	}
	return ;
}

Character::Character( std::string in ) : _name( in )
{
	std::cout << "Character String Constructor Called" << std::endl;
	for ( int i = 0 ; i < 4 ; i++ )
	{
		this->_inventory[ i ] = NULL;
	}
	return ;
}

Character::~Character( void )
{
	std::cout << "Character Destructor Called" << std::endl;
	for ( int i = 0 ; i < 4 ; i++ )
	{
		if ( this->_inventory[ i ] )
			delete ( this->_inventory[ i ] );
	}
	return ;
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

Character&	Character::operator=( const Character& copy )
{
	std::cout << "Character Copy Assignment Operator Called" << std::endl;
	if ( this != &copy )
	{
		for ( int i = 0 ; i < 4 ; i++ )
		{
			if ( this->_inventory[i] )
				delete ( this->_inventory[i] );
			if ( copy.getInv( i ) )
				this->_inventory[ i ] = copy.getInv( i )->clone();
		}
	}
	return ( *this );
}

/* -------------------------------------------------------------------------- */
/*  							Getter & Setter								  */
/* -------------------------------------------------------------------------- */

std::string const & Character::getName() const
{
	return ( this->_name );
}

AMateria*	Character::getInv( int nb ) const
{
	return ( this->_inventory[ nb ] );
}

/* -------------------------------------------------------------------------- */
/*  								Methods									  */
/* -------------------------------------------------------------------------- */

void	Character::equip( AMateria* m )
{
	int	i = 0;

	if ( !m )
		return ;
	while ( this->_inventory[ i ] && i < 4 )
		i++;
	if ( i <= 3 && m )
	{
		this->_inventory[ i ] = m;
		std::cout << this->_name << " got " << m->getType() << std::endl;
	}
	return ;
}

void	Character::unequip( int idx )
{
	if ( idx >= 0 && idx <= 3 && this->_inventory[ idx ] )
	{
		std::cout << this->_name << " lost " << this->_inventory[ idx ]->getType() << std::endl;
		this->_inventory[ idx ] = NULL;
	}
	else
		std::cout << "Nothing found" << std::endl;
	return ;
}

void	Character::use( int idx , ICharacter& target )
{
	if ( idx >= 0 && idx <= 3 && this->_inventory[ idx ] )
	{
		this->_inventory[ idx ]->use( target );
		std::cout << this->_name << " use(s) " << this->_inventory[ idx ]->getType() << std::endl;
	}
	else
		std::cout << "Nothing found" << std::endl;
	return ;
}
