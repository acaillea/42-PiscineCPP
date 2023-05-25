/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 17:17:35 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/27 12:03:28 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

/***** Statement *****/

template< typename T >
void	iter( T *tab , int size , void f( T const & ref ) )
{
	for ( int i = 0 ; i < size ; i++ )
	{
		f( tab[ i ] ); 
	}
	return ;
}

/***** Personnal *****/

template< typename T >
void	print( T const & t )
{
	std::cout << "Value : " << t << std::endl;
	return ;
}

template< typename T >
void ft_swap( T & a , T & b )
{
	T 	c;

	c = a;
	a = b;
	b = c;
	return ;
}

#endif /* ITER_HPP */
