/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:05:09 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/17 13:08:37 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		main ()
{
	/* Tests given in the statement */
	{
		Fixed	a;
		Fixed	b(a);
		Fixed	c;

		c = b;

		std::cout << a.getRawBits() << std::endl;
		std::cout << b.getRawBits() << std::endl;
		std::cout << c.getRawBits() << std::endl;
	}
	
	std::cout << "---------------------------------" << std::endl;

	/* Personal tests */
	{
		Fixed	x;
		Fixed	y(x);
	
		std::cout << x.getRawBits() << std::endl;
		std::cout << y.getRawBits() << std::endl;
		x.setRawBits( 69 );

		Fixed	z(x);
		
		std::cout << x.getRawBits() << std::endl;
		std::cout << y.getRawBits() << std::endl;
		std::cout << z.getRawBits() << std::endl;
	}
	
	return (0);
}
