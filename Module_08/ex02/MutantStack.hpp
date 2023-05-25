/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:54:45 by acaillea          #+#    #+#             */
/*   Updated: 2022/10/03 13:47:57 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <algorithm>
# include <list>

template< typename T >
class	MutantStack : public std::stack< T >
{
	public:

		typedef typename std::stack< T >::container_type::iterator					iterator;
		typedef typename std::stack< T >::container_type::const_iterator			const_iterator;
		typedef typename std::stack< T >::container_type::reverse_iterator			reverse_iterator;
		typedef typename std::stack< T >::container_type::const_reverse_iterator	const_reverse_iterator;

		/* Constructor */
		MutantStack( void ) 					:	std::stack< T >( ) { return ; }
		MutantStack( const MutantStack& copy ) 	: 	std::stack< T >( copy ) { return ; }

		/* Destructor */
		virtual ~MutantStack( void ) { return ; }

		/* Operator Overload */
		MutantStack&	operator=( const MutantStack& copy )
		{
			if ( this != &copy )
			{
				std::stack< T >::operator=( copy );
			}
			return ( *this );
		}

		/* Iterator Implemenatation */
		iterator				begin( void ) 		{ return ( std::stack< T >::c.begin()	); }
		iterator				end( void ) 		{ return ( std::stack< T >::c.end() 	); }
		const_iterator			begin( void ) const { return ( std::stack< T >::c.begin()	); }
		const_iterator			end( void ) const 	{ return ( std::stack< T >::c.end() 	); }
		reverse_iterator		rbegin( void ) 		{ return ( std::stack< T >::c.rbegin() 	); }
		reverse_iterator		rend( void ) 		{ return ( std::stack< T >::c.rend() 	); }
		const_reverse_iterator	rbegin( void ) const{ return ( std::stack< T >::c.rbegin() 	); }
		const_reverse_iterator	rend( void ) const 	{ return ( std::stack< T >::c.rend() 	); }
};

#endif /* MUTANTSTACK_HPP */
