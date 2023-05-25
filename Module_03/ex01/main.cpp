/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:12:31 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/22 15:06:17 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int		main ()
{
	ClapTrap	clapy( "Clapy" );
	ScavTrap	scavy( "Scavy" );

	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << "Name		= " << clapy.getName() << std::endl;
	std::cout << "Hit Point	= " << clapy.getHitPoint() << std::endl;
	std::cout << "Energy Point	= " << clapy.getEnergyPoint() << std::endl;
	std::cout << "Attack Damage	= " << clapy.getAttackDamage() << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << "Name		= " << scavy.getName() << std::endl;
	std::cout << "Hit Point	= " << scavy.getHitPoint() << std::endl;
	std::cout << "Energy Point	= " << scavy.getEnergyPoint() << std::endl;
	std::cout << "Attack Damage	= " << scavy.getAttackDamage() << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	scavy.guardGate();
	clapy.attack( "Scavy" );
	scavy.takeDamage( clapy.getAttackDamage() );
	std::cout << "Hit Point	= " << scavy.getHitPoint() << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	scavy.attack( "clapy" );
	clapy.takeDamage( scavy.getAttackDamage() );
	std::cout << "Hit Point	= " << clapy.getHitPoint() << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	clapy.beRepaired( 1 );
	std::cout << "Hit Point	= " << clapy.getHitPoint() << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	for ( int a = 0 ; scavy.getEnergyPoint() > 40 ; a++ )
	{
		scavy.attack( "You" );
		std::cout << "Energy Point	= " << scavy.getEnergyPoint() << std::endl;
		std::cout << "------------------------------" << std::endl;
	}
	scavy.attack( "You" );
	std::cout << "-------------------------------------------------------" << std::endl;
	scavy.beRepaired( 10 );
	clapy.takeDamage( 100 );
	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << "Name		= " << clapy.getName() << std::endl;
	std::cout << "Hit Point	= " << clapy.getHitPoint() << std::endl;
	std::cout << "Energy Point	= " << clapy.getEnergyPoint() << std::endl;
	std::cout << "Attack Damage	= " << clapy.getAttackDamage() << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << "Name		= " << scavy.getName() << std::endl;
	std::cout << "Hit Point	= " << scavy.getHitPoint() << std::endl;
	std::cout << "Energy Point	= " << scavy.getEnergyPoint() << std::endl;
	std::cout << "Attack Damage	= " << scavy.getAttackDamage() << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	scavy.takeDamage( 140 );
	scavy.guardGate();
	std::cout << "-------------------------------------------------------" << std::endl;
	return ( 0 );
}
