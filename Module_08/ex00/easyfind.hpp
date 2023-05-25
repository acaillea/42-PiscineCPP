/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:45:01 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/29 15:53:34 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <list>
# include <array>

/***** Statement *****/

template< typename T >
int		easyfind( T const & t , int const i )
{
	typename T::const_iterator iter = 		std::find( std::begin( t ) , std::end( t ) , i );
	typename T::const_iterator iter_end = 	std::end( t );

	if ( iter != iter_end )
	{
		std::cout << "The container does contain : " << *iter << std::endl;
		return ( std::distance( t.begin() , iter ) );
	}
	else
	{
		throw ( std::out_of_range( "Element not found" ) );
	}
	return ( -1 );
}

/***** Statement *****/
template< typename T > 
void	print( T const & t )
{
	typename T::const_iterator iter;
	typename T::const_iterator iter_end = std::end( t );

	for ( iter = std::begin( t ) ; iter != iter_end ; ++iter )
	{
		std::cout << *iter << std::endl;
	}
	return ;
}

#endif /* EASYFIND_HPP */
