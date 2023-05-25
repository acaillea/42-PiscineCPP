/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: I-lan <I-lan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:11:53 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/07 11:47:52 by I-lan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

MateriaSource::MateriaSource( void )
{
	std::cout << "MateriaSource Default Constructor Called" << std::endl;
	for ( int i = 0 ; i < 4 ; i++ )
	{
		this->_inventory[ i ] = NULL;
	}
	return ;
}

MateriaSource::MateriaSource( const MateriaSource& copy )
{
	std::cout << "MateriaSource Copy Constructor Called" << std::endl;
	for ( int i = 0 ; i < 4 ; i++ )
	{
		if ( copy._inventory[ i ] )
			this->_inventory[ i ] = copy._inventory[ i ];
	}
	return ;
}

MateriaSource::~MateriaSource( void )
{
	std::cout << "MateriaSource Destructor Called" << std::endl;
	for ( int i = 0 ; i < 4 ; i++ )
	{
		if ( this->_inventory[i] )
			delete ( this->_inventory[ i ] );
	}
	return ;
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

MateriaSource&	MateriaSource::operator=( const MateriaSource& copy )
{
	std::cout << "MateriaSource Copy Assignment Operator Called" << std::endl;
	if ( this != &copy )
	{
		for ( int i = 0 ; i < 4 ; i++ )
		{
			if ( this->_inventory[ i ] )
				delete ( this->_inventory[ i ] );
			if ( copy.getMateria( i ) )
				this->_inventory[ i ] = copy.getMateria( i );
		}
	}
	return ( *this );
}

/* -------------------------------------------------------------------------- */
/*  							Getter & Setter								  */
/* -------------------------------------------------------------------------- */

AMateria*		MateriaSource::getMateria( const int pos ) const
{
	if ( pos >= 0 && pos <= 3 )
		return ( this->_inventory[ pos ] );
	else
		std::cout << "Index is included between 0 and 3" << std::endl;
	return ( NULL );
}


/* -------------------------------------------------------------------------- */
/*  								Others									  */
/* -------------------------------------------------------------------------- */

void 	MateriaSource::learnMateria( AMateria* m )
{
	int i = 0;

	while ( this->_inventory[ i ] && i < 4 )
		i++;
	if ( i <= 3 )
		this->_inventory[ i ] = m;
	return ;
}

AMateria* 	MateriaSource::createMateria( std::string const & type )
{
	int i = 0;

	while ( i < 4 && this->_inventory[ i ] )
	{
		if ( this->_inventory[ i ] && this->_inventory[ i ]->getType() == type )
		{
			std::cout << type << " materia created" << std::endl;
			return ( this->_inventory[ i ]->clone() );
		}
		i++;
	}
	std::cout << "Materia " << type << " does not exist" << std::endl;
	return ( 0 );
}
