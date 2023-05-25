/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:43:55 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/27 12:03:19 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

/****************	 SWAP	****************/

template< typename T >
void ft_swap( T & a , T & b )
{
	T 	c;

	c = a;
	a = b;
	b = c;
	return ;
}

/****************	 MIN	****************/

template< typename T >
T const & ft_min( T const & x , T const & y )
{
	if ( x < y )
	{
		return ( x );
	}
	return ( y );
}

/****************	 MAX	****************/

template< typename T >
T const & ft_max( T const & x , T const & y )
{
	if ( x > y )
	{
		return ( x );
	}
	return ( y );
}

#endif /* WHATEVER_HPP */
