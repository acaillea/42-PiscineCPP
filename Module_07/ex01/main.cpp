/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 17:17:47 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/27 12:03:40 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

int		main ()
{
	std::cout << std::endl << "----------------------------------" << std::endl;

	// Declaration
	std::string	str_lst[] = { "MAMA" , "MAMY" , "MOMY" , "MIMI" , "MOMO" };
	char		char_lst[] = { 'd' , 'f' , 'p' , '*' , '-' , '%' };
	int			int_lst[] = { -1 , 42 , 69 , -2022 , 0 , 9999 , 11 };
	float 		float_lst[] = { -1.0 , 42.2 , 69.9 , -2022.2 , 0.0 , 9999.0 , 11.6 };

	// String
	std::cout << std::endl << "  STRING" << std::endl << std::endl;
	iter<std::string>( str_lst , 5 , print );

	// Char
	std::cout << std::endl << "  CHAR" << std::endl << std::endl;
	iter<char>( char_lst , 6 , print );

	std::cout << std::endl << "Swap" << std::endl;
	ft_swap( char_lst[0] , char_lst[1] );
	iter<char>( char_lst , 6 , print );

	//	Int
	std::cout << std::endl << "  INT" << std::endl << std::endl;
	iter<int>( int_lst , 7 , print );

	// Float
	std::cout << std::endl << "  FLOAT" << std::endl << std::endl;
	iter<float>( float_lst , 6 , print );

	std::cout << std::endl << "----------------------------------" << std::endl;

	return ( 0 );
}
