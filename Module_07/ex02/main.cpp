/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 17:57:00 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/27 12:05:25 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main ()
{
 	/* ------------- Empty ------------- */
	std::cout << std::endl << "Empty array" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Array<int>	empty;
	try
	{
		std::cout << "Acessing element 0: " << empty[0];
	}
	catch ( std::exception &e )
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	try
	{
		std::cout << "Assigning element 4: ";
		empty[ 4 ] = 4;
	}
	catch ( std::exception &e )
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "Print empty :" << std::endl;
	std::cout << empty << std::endl;

	/* ------------- Char ------------- */
	std::cout << std::endl << "Char array" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Array<char> char_arr( 4 );
	std::cout << "Before assigning :" << std::endl << char_arr << std::endl;
	char_arr[ 0 ] = 'a';
	char_arr[ 1 ] = 'b';
	char_arr[ 2 ] = 'c';
	std::cout << "After assigning :" << std::endl << char_arr << std::endl;
	char_arr[ 3 ] = 'd';
	std::cout << "After scnd assigning :" << std::endl << char_arr << std::endl;

	/* ------------- Int ------------- */
	std::cout << std::endl << "Int array" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Array<int> int_arr( 4 );
	std::cout << "Before assigning :" << std::endl << int_arr << std::endl;
	int_arr[ 0 ] = 8;
	int_arr[ 1 ] = 2;
	int_arr[ 2 ] = -64;
	int_arr[ 3 ] = 248;
	std::cout << "After assigning :" << std::endl << int_arr << std::endl;

	Array<int> copy_int_arr( int_arr );
	std::cout << "Copy assigning :" << std::endl << copy_int_arr << std::endl;
	try
	{
		std::cout << "Acessing element 4 : " << copy_int_arr[ 4 ];
	}
	catch( const std::exception& e )
	{
		std::cout << e.what() << std::endl;
	}
	/* ------------- Float ------------- */
	std::cout << std::endl << "Float array" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Array<float> float_arr( 4 );
	std::cout << "Before assigning :" << std::endl << float_arr << std::endl;
	float_arr[ 0 ] = 3.14f;
	float_arr[ 1 ] = -48.49f;
	float_arr[ 2 ] = 0.0f;
	float_arr[ 3 ] = 22.22f;
	std::cout << "After assigning :" << std::endl << float_arr << std::endl;

	/* ------------- String ------------- */
	std::cout << std::endl << "String array" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Array<std::string> str_arr(4);
	std::cout << "Before assigning :" << std::endl << str_arr << std::endl;
	str_arr[ 0 ] = "String 1";
	str_arr[ 1 ] = "String 2";
	str_arr[ 2 ] = "String 3";
	str_arr[ 3 ] = "String 4";
	std::cout << "After assigning :" << std::endl << str_arr << std::endl;

	std::cout << "Egal operator calling :" << std::endl;
	Array<std::string> copy_str_arr = str_arr;
	std::cout << copy_str_arr << std::endl;

	/* ------------- Check leaks ------------- */
	system( "leaks array" );
	return ( 0 );
}
