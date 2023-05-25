/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:33:34 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/12 16:43:12 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main ( void )
{
	int	nb = 10;
	std::string their_name = "Camille";

	Zombie*	the_horde = zombieHorde( nb , their_name );

	for ( int z = 0 ; z < nb ; z++ )
	{
		the_horde[z].announce();
	}

	delete [] the_horde;
	
	/* Check leaks */
	// system("leaks hordeOfZombies");

	return (0);
}
