/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:58:56 by acaillea          #+#    #+#             */
/*   Updated: 2022/10/03 11:28:51 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <exception>
# include <algorithm>
# include <iterator>

class	Span
{
	private:

		unsigned int		_n;
		std::vector<int>	_lst;

	public:

		/* Constructor */
		Span( void );
		Span( const Span& copy );
		Span( unsigned int n );

		/* Destructor */
		~Span( void );

		/* Operator Overload */
		Span&	operator=( const Span& copy );

		/* Accessors */
		unsigned int		getN( void ) const;
		std::vector<int>	getLst( void ) const;

		/* Others members */
		void		addNumber( int const & k );
		long long	shortestSpan( void ) const;
		long long 	longestSpan( void ) const;

		/* Better addNumber */
		template< class Iterator >
		void		betterAddNumber( Iterator start , Iterator end )
		{
			if ( end - start <= this->_n )
			{
				std::copy( start , end , std::back_inserter( this->_lst ) );
			}
			else
			{
				throw ( NotEnoughSpaceException() );
			}
			return ;
		}

		/* Exceptions */
		class	SpanFullException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
		class	NotEnoughSpaceException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
		class	NoWayToSpanException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
};

std::ostream & operator<<( std::ostream & o , Span const & rhs );

#endif /* SPAN_HPP */
