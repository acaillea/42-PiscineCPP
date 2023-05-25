/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:58:43 by acaillea          #+#    #+#             */
/*   Updated: 2022/10/03 11:13:08 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/* -------------------------------------------------------------------------- */
/*  							Constructors								  */
/* -------------------------------------------------------------------------- */

Span::Span( void ) : _n( 5 )
{
	// std::cout << "Span Default Constructor Called" << std::endl;
	return ;
}

Span::Span( const Span& copy ) : _n( copy.getN() ) , _lst( copy.getLst() )
{
	// std::cout << "Span Copy Constructor Called" << std::endl;
	return ;
}

Span::Span( unsigned int n ) : _n( n )
{
	// std::cout << "Span String Constructor Called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  								Destructor		 						  */
/* -------------------------------------------------------------------------- */

Span::~Span( void )
{
	// std::cout << "Span Destructor Called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

Span&	Span::operator=( const Span& copy )
{
	// std::cout << "Span Copy Assignment Operator Called" << std::endl;
	if ( this != &copy )
	{
		this->_n = copy.getN();
		this->_lst = copy.getLst();
	}
	return ( *this );
}

std::ostream & operator<<( std::ostream & o , Span const & rhs )
{
	std::cout << "-> Span has a size of " << rhs.getN() << " and contains : " << std::endl;
	if ( rhs.getLst().size() > 0 )
	{
		for ( unsigned int i = 0 ; i < rhs.getLst().size() ; i++ )
		{
			std::cout << ( rhs.getLst() )[ i ];
			if ( i < rhs.getLst().size() - 1 )
				std::cout << " , ";
			else
				std::cout << "." << std::endl;
		}
	}
	else
	{
		std::cout << "Nothing" << std::endl;
	}
	std::cout << "-> Still " << rhs.getN() - rhs.getLst().size() << " space for numbers." << std::endl;
	return ( o );
}

/* -------------------------------------------------------------------------- */
/*  								Accessors								  */
/* -------------------------------------------------------------------------- */

unsigned int		Span::getN( void ) const
{
	return ( this->_n );
}

std::vector<int>	Span::getLst( void ) const
{
	return ( this->_lst );
}

/* -------------------------------------------------------------------------- */
/*  							Others Members								  */
/* -------------------------------------------------------------------------- */

void	Span::addNumber( int const & k )
{
	if ( this->_n > this->_lst.size() )
	{
		this->_lst.push_back( k );
	}
	else
	{
		throw ( Span::SpanFullException() );
	}
	return ;
}

long long	Span::shortestSpan( void ) const
{
	long long result = 0;
	std::vector<int> copy;

	if ( this->_lst.size() <= 1 )
	{
		throw ( Span::NoWayToSpanException() );
	}
	else
	{
		copy = this->_lst;
		std::sort( copy.begin() , copy.end() );
		result = (*(std::max_element(this->_lst.begin(), this->_lst.end())));
		for ( unsigned int i = 1 ; i < this->_n ; i++ )
		{
			if ( std::abs( copy[ i ] - copy[ i - 1 ] ) < result )
			{
				result = std::abs( copy[ i ] - copy[ i - 1 ] );
			}
		}
		std::cout << "Shortest span = ";
	}
	return ( result );
}

long long	Span::longestSpan( void ) const
{
	long long result = 0;

	if ( this->_lst.size() <= 1 )
	{
		throw ( Span::NoWayToSpanException() );
	}
	else
	{
		result = (*(std::max_element(this->_lst.begin(), this->_lst.end()))) \
		- (*(std::min_element(this->_lst.begin() ,this->_lst.end()) ));
		std::cout << "Longest span = ";
	}
	return ( result );
}

/* -------------------------------------------------------------------------- */
/*  								Exceptions								  */
/* -------------------------------------------------------------------------- */

const char* Span::SpanFullException::what() const throw()
{
	return ( "Latest adding not possible, Span is full" );
}

const char* Span::NotEnoughSpaceException::what() const throw()
{
	return ( "Adding not possible, Size is to small" );
}

const char* Span::NoWayToSpanException::what() const throw()
{
	return ( "No or not enough numbers to find difference" );
}
