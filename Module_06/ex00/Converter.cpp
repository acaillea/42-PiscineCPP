/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:14:57 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/21 15:01:43 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

Converter::Converter( void ) : _arg( "Default" )
{
	std::cout << "Converter Default Constructor Called" << std::endl;
	return ;
}

Converter::Converter( const Converter& copy ) : _arg( copy.getArg() )
{
	std::cout << "Converter Copy Constructor Called" << std::endl;
	return ;
}

Converter::Converter( std::string in ) : _arg( in )
{
	std::cout << "Converter String Constructor Called" << std::endl;
	return ;
}

Converter::~Converter( void )
{
	std::cout << "Converter Destructor Called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

Converter&	Converter::operator=( const Converter& copy )
{
	std::cout << "Converter Copy Assignment Operator Called" << std::endl;
	if ( this != &copy )
	{
		this->_arg = copy.getArg();
	}
	return ( *this );
}

/* -------------------------------------------------------------------------- */
/*  							Getter & Setter								  */
/* -------------------------------------------------------------------------- */

std::string		Converter::getArg( void ) const
{
	return ( this->_arg );
}

/* -------------------------------------------------------------------------- */
/*  							Type Cast Operator							  */
/* -------------------------------------------------------------------------- */

static int	is_printable( char c );

Converter::operator char()
{
	char	c = 0;
	int		tmp = 0;

	try
	{
		tmp = std::stoi( this->_arg );
	}
	catch( const std::invalid_argument& ia )
	{
		std::cerr << "Invalid argument" << std::endl;
		return ( 0 );
	}
	catch( const std::out_of_range& oor )
	{
		std::cerr << "Out of Char range" << std::endl;
		return ( 0 );
	}
	if ( tmp < CHAR_MIN || tmp > CHAR_MAX )
	{
		std::cerr << "Out of Char range" << std::endl;
		return ( 0 );
	}
	c = static_cast<char>( tmp );
	if ( is_printable( c ) )
	{
		std::cout << "' " << c << " '" << std::endl;
	}
	else
	{
		std::cerr << "Non displayable" << std::endl;
	}
	return ( c );
}

Converter::operator int()
{
	int		i = 0;

	try
	{
		i = std::stoi( this->_arg );
		std::cout << i << std::endl;
	}
	catch( const std::invalid_argument& ia )
	{
		std::cerr << "Invalid argument" << std::endl;
	}
	catch( const std::out_of_range& oor )
	{
		std::cerr << "Out of Int range" << std::endl;
	}
	return ( i );
}

Converter::operator float()
{
	float	f = 0;

	try
	{
		f = std::stof( this->_arg );
		std::cout << f << "f" << std::endl;
	}
	catch( const std::invalid_argument& ia )
	{
		std::cerr << "Not-A-Number Float" << std::endl;
	}
	catch( const std::out_of_range& oor )
	{
		std::cerr << "Out of Float range" << std::endl;
	}
	return ( f );
}

Converter::operator double()
{
	double	d = 0.0;

	try
	{
		d = std::stod( this->_arg );
		std::cout << d << std::endl;
	}
	catch( const std::invalid_argument& ia )
	{
		std::cerr << "Not-A-Number" << std::endl;
	}
	catch( const std::out_of_range& oor )
	{
		std::cerr << "Out of Double range" << std::endl;
	}
	return ( d );
}


/* -------------------------------------------------------------------------- */
/*  								Others									  */
/* -------------------------------------------------------------------------- */

static int	is_printable( char c )
{
	if ( c >= 32 && c <= 126 )
	{
		return ( 1 );
	}
	return ( 0 );
}
