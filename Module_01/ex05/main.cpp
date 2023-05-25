/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:18:44 by I-lan             #+#    #+#             */
/*   Updated: 2022/08/12 14:41:51 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int		main ( void )
{
	Harl		harltheman;
	std::string	test = "ERROR";

	std::cout << "------------------------------------------------" << std::endl;

	/* All straigth complains */
	
	harltheman.complain( "DEBUG" );
	harltheman.complain( "INFO" );
	harltheman.complain( "WARNING" );
	harltheman.complain( "ERROR" );

	std::cout << "------------------------------------------------" << std::endl;

	/* Test angry complains */
	
	harltheman.complain( test );
	
	std::cout << "------------------------------------------------" << std::endl;

	return (0);
}