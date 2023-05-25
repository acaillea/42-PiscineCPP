/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:34:02 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/09 14:01:42 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie*		zombieHorde( int N , std::string name )
{
	std::string full_name;

	Zombie* la_horde = new Zombie[ N ];

	for ( int z = 0 ; z < N ; z++ )
	{
		full_name = name + "_n*" + std::to_string( z + 1 );
		la_horde[z].setZombieName( full_name );
	}
	return ( la_horde );
}
