/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: I-lan <I-lan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:40:47 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/26 21:38:03 by I-lan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int		main ()
{
	/* Tests given in the statement */
	{
		std::cout << std::endl << "-------------- STATEMENT TESTS --------------" << std::endl << std::endl;
		int a = 2;
		int b = 3;
		ft_swap( a , b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ft_min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ft_max( a, b ) << std::endl;

		std::string c = "chaine1";
		std::string d = "chaine2";
		ft_swap( c , d );
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ft_min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ft_max( c, d ) << std::endl;
	}
	/* Personnal tests */
	{
		std::cout << std::endl << "-------------- PERSONNAL TESTS --------------" << std::endl << std::endl;
		double 	c = 42.19;
		double 	d = -42.19;
		double 	e = 19.19;
		double 	f = e;
		int		a = 18;

		std::cout << "Before Swap : ";
		std::cout << "c = " << c << " , d = " << d << std::endl;
		ft_swap( c, d );
		std::cout << "After Swap  : ";
		std::cout << "c = " << c << ", d = " << d << std::endl << std::endl;
		std::cout << "min( c, d ) = " << ft_min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ft_max( c, d ) << std::endl;

		std::cout << "min( e, f ) = " << ft_min( e, f ) << std::endl;
		std::cout << "max( e, f ) = " << ft_max( e, f ) << std::endl;

		// ft_swap( c, a ); // Doesn't work bc argument type different
		( void )a;
	}
	return ( 0 );
}
