/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:51:05 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/19 15:00:31 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main ()
{
	ClapTrap	clapy( "Clapy" );
	ClapTrap	clapo( clapy );

	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << "Name		= " << clapy.getName() << std::endl;
	std::cout << "Hit Point	= " << clapy.getHitPoint() << std::endl;
	std::cout << "Energy Point	= " << clapy.getEnergyPoint() << std::endl;
	std::cout << "Attack Damage	= " << clapy.getAttackDamage() << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	clapy.attack( "Alan" );
	std::cout << "Energy Point	= " << clapy.getEnergyPoint() << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	clapy.attack( "You" );
	clapy.attack( "You" );
	clapy.attack( "You" );
	clapy.attack( "You" );
	clapy.attack( "You" );
	std::cout << "Energy Point	= " << clapy.getEnergyPoint() << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	clapy.attack( "You" );
	clapy.attack( "You" );
	clapy.attack( "You" );
	clapy.attack( "You" );
	clapy.attack( "You" );
	std::cout << "Energy Point	= " << clapy.getEnergyPoint() << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	clapy.beRepaired( 5 );
	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << "Name		= " << clapo.getName() << std::endl;
	std::cout << "Hit Point	= " << clapo.getHitPoint() << std::endl;
	std::cout << "Energy Point	= " << clapo.getEnergyPoint() << std::endl;
	std::cout << "Attack Damage	= " << clapo.getAttackDamage() << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	clapo.takeDamage( 8 );
	std::cout << "Hit Point	= " << clapo.getHitPoint() << std::endl;
	clapo.beRepaired( 1 );
	std::cout << "Hit Point	= " << clapo.getHitPoint() << std::endl;
	clapo.beRepaired( 6 );
	std::cout << "Hit Point	= " << clapo.getHitPoint() << std::endl;
	clapo.takeDamage( 10 );
	std::cout << "Hit Point	= " << clapo.getHitPoint() << std::endl;
	clapo.beRepaired( 4 );
	clapo.takeDamage( 18 );
	std::cout << "-------------------------------------------------------" << std::endl;

	return ( 0 );
}
