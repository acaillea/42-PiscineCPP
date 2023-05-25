/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: I-lan <I-lan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:34:39 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/16 17:12:39 by I-lan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

/*****	Statement fonctions	********/

static uintptr_t	serialize( Data* ptr )
{
	return ( reinterpret_cast<uintptr_t>( ptr ) );
}

static Data*		deserialize( uintptr_t raw )
{
	return( reinterpret_cast<Data*>( raw ) );
}

/*****	Main  ********/

int		main ()
{
	std::cout << "-------------------------------" << std::endl;
	Data		data( "test" );
	uintptr_t	ptr = 0;

	std::cout << std::endl << "-- Data -------------------" << std::endl;
	std::cout << "Data 	: " << data.getName() << std::endl;
	std::cout << "Uintptr : " << &ptr << std::endl;

	std::cout << std::endl << "--  Serialize -------------" << std::endl;
	ptr = serialize(&data);
	std::cout << "Uintptr : " << &ptr << std::endl;

	std::cout << std::endl << "--- Deserialize -----------" << std::endl;
	Data* data_ptr = deserialize(ptr);
	std::cout << "Data	: " << data.getName() << std::endl;
	std::cout << "Data_ptr: " << data_ptr->getName() << std::endl;

	std::cout << std::endl << "--- Adresses --------------" << std::endl;
	std::cout << "&Data     : " << &data << std::endl;
	std::cout << "&Data_ptr : " << data_ptr << std::endl;

	std::cout << "-------------------------------" << std::endl;
	
	return ( 0 );
}
