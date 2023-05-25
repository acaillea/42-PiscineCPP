/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:09:30 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/18 16:47:23 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		main ()
{
	std::cout << "---------------------------------" << std::endl;

	/* Tests given in the statement ex01 */
	{
		std::cout << "Tests ex01 : " << std::endl;
		
		Fixed a;
		Fixed const b( 10 );
		Fixed const c( 42.42f );
		Fixed const d( b );

		a = Fixed( 1234.4321f );

		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;

		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	}

	std::cout << "---------------------------------" << std::endl;

	/* Tests given in the statement ex02 */
	{
		std::cout << "Tests ex02 : " << std::endl;

		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;

		std::cout << Fixed::max( a, b ) << std::endl;
	}
	
	std::cout << "---------------------------------" << std::endl;

	/* Personnal tests */
	{
		std::cout << "Personnal tests : " << std::endl;

		Fixed a;
		Fixed b( 20 );
		Fixed c( 42.42f );
		Fixed d( b );

		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;
		std::cout << "c = " << c << std::endl;
		std::cout << "d = " << d << std::endl;

		a = Fixed( 42.42f );

		std::cout << a << std::endl;
		std::cout << "a + b = " << a + b << std::endl;
		std::cout << "a - b = " << a - b << std::endl;
		std::cout << "a * b = " << a * b << std::endl;
		std::cout << "a / b = " << a / b << std::endl;
		std::cout << "(a + b)2 = " << ( a + b ) * ( a + b ) << std::endl;

		std::cout << "b++ = " << b++ << std::endl;
		std::cout << "++b = " << ++b << std::endl;

		std::cout << "a = " << a << std::endl;
		std::cout << "a-- = " << a-- << std::endl;
		std::cout << "a = " << a << std::endl;
		std::cout << "--a = " << --a << std::endl;

		Fixed e(20);

		std::cout << "min (a , b) = " << Fixed::min(a,b) << std::endl;
		std::cout << "max (a , b) = " << Fixed::max(a,b) << std::endl;
		std::cout << "min (b , e) = " << Fixed::min(b,e) << std::endl;
		std::cout << "max (b , e) = " << Fixed::max(b,e) << std::endl;
	}

	std::cout << "---------------------------------" << std::endl;

	return (0);
}
