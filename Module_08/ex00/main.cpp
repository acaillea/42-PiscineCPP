/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:44:16 by I-lan             #+#    #+#             */
/*   Updated: 2022/10/03 17:27:56 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main ()
{
	/*-------------------------------------- LIST -------------------------------------- */
	std::cout << std::endl << "--------------------------------------------" << std::endl;
	std::cout << "		  LIST 						  " << std::endl;
	std::cout << "--------------------------------------------" << std::endl;

	// Declaration
	std::list<int>	lst;

	// Initiation
	for ( int i = 1 ; i < 10 ; i++ )
	{
		lst.push_back( i );
	}

	// Print
	std::cout << std::endl << "List Values : " << std::endl;
	std::cout << "-------------" << std::endl;
	print(lst);
	std::cout << std::endl; 

	// EasyFind
	std::cout << std::endl << "Easy Find : " << std::endl;
	std::cout << "-------------" << std::endl;
	try
	{
		std::cout << "3 	--> ";
		easyfind( lst , 3 );
	}
	catch ( std::exception &e )
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "-9	--> ";
		easyfind( lst , -9 );
	}
	catch ( std::exception &e )
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "11 	--> ";
		easyfind( lst , 11 );
	}
	catch ( std::exception &e )
	{
		std::cout << e.what() << std::endl;
	}
	/*-------------------------------------- VECTOR -------------------------------------*/
	std::cout << std::endl << "--------------------------------------------" << std::endl;
	std::cout << "		 VECTOR 						  " << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	// Declaration
	std::vector<int>	vec;

	// Initiation
	for ( int i = 1 ; i <= 10 ; i++ )
	{
		vec.push_back( i );
	}
	// Print
	std::cout << std::endl << "Vector Values : " << std::endl;
	std::cout << "---------------" << std::endl;
	print(lst);
	std::cout << std::endl; 	
	// EasyFind
	std::cout << std::endl << "Easy Find : " << std::endl;
	std::cout << "-------------" << std::endl;
	try
	{
		std::cout << "7 	--> ";
		easyfind( vec , 7 );
	}
	catch ( std::exception &e )
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "-14	--> ";
		easyfind( vec , -14 );
	}
	catch ( std::exception &e )
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "11 	--> ";
		easyfind( vec , 11 );
	}
	catch ( std::exception &e )
	{
		std::cout << e.what() << std::endl;
	}
	/*-------------------------------------- ARRAY --------------------------------------*/
	std::cout << std::endl << "--------------------------------------------" << std::endl;
	std::cout << "		  ARRAY 						  " << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	// Declaration
	std::array<int , 10>	array;

	// Initiation
	for ( int i = 1 ; i <= 10 ; i++ )
	{
		array[ i - 1 ] = i;
	}
	// Print
	std::cout << std::endl << "Array Values : " << std::endl;
	std::cout << "---------------" << std::endl;
	print(lst);
	// EasyFind
	std::cout << std::endl << "Easy Find : " << std::endl;
	std::cout << "-------------" << std::endl;
	try
	{
		std::cout << "5 	--> ";
		easyfind( array , 5 );
	}
	catch ( std::exception &e )
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "-28	--> ";
		easyfind( array , -28 );
	}
	catch ( std::exception &e )
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "19 	--> ";
		easyfind( array , 19 );
	}
	catch ( std::exception &e )
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "--------------------------------------------" << std::endl;
	/*-----------------------------------------------------------------------------------*/
	/* Check leaks */
	// system("leaks easyFind");
	return ( 0 );
}
