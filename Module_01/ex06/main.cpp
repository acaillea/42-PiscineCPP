/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 14:43:53 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/12 15:29:00 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int		main ( int ac , char *av[] )
{
	if ( ac != 2 )
	{
		std::cout << "Wrong number of argument. One expected : " << std::endl;
		std::cout << "< exec > < level >" << std::endl;
		return (0);
	}
	
	Harl			harly;

	std::cout << "-----------------------------------------------------" << std::endl;

	std::string		tmp;

	for ( int i = 0 ; av[1][i] ; i++ )
		tmp += av[1][i];
	
	harly.complain( tmp );
	
	std::cout << "-----------------------------------------------------" << std::endl;

	return (0);
}
