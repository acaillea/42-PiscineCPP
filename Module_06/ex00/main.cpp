/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:57:50 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/21 15:00:22 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int		main ( int ac , char* av[] )
{
	if ( ac == 2 )
	{
		Converter	converter( av[1] );

		std::cout << std::fixed << std::setprecision( 1 );
		std::cout << "=====================================" << std::endl << std::endl;

		char		c;
		int			i;
		float		f;
		double		d;

		std::cout << "Char	: ";
		c = static_cast<char>( converter );

		std::cout << "Int	: ";
		i = static_cast<int>( converter );
	
		std::cout << "Float	: ";
		f = static_cast<float>( converter );
	
		std::cout << "Double	: ";
		d = static_cast<double>( converter );

		std::cout << std::endl << "=====================================" << std::endl;
	}
	else
	{
		std::cerr << "Error : Wrong number of argument" << std::endl;
		std::cerr << "Usage : <exe> <Value to convert>" << std::endl;
	}
	return ( 0 );
}
