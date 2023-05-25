/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:12:31 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/23 16:04:17 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int		main ()
{
	std::cout << "-------------------------------------------------------" << std::endl;
	ClapTrap	clapy( "Clapy" );
	std::cout << "--------" << std::endl;
	ScavTrap	scavy( "Scavy" );
	std::cout << "--------" << std::endl;
	FragTrap	fragy( "Fragy" );

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
	scavy.guardGate();
	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << "Name		= " << fragy.getName() << std::endl;
	std::cout << "Hit Point	= " << fragy.getHitPoint() << std::endl;
	std::cout << "Energy Point	= " << fragy.getEnergyPoint() << std::endl;
	std::cout << "Attack Damage	= " << fragy.getAttackDamage() << std::endl;
	fragy.highFivesGuys();
	std::cout << "-------------------------------------------------------" << std::endl;
	scavy.attack( "Fragy" );
	fragy.takeDamage( scavy.getAttackDamage() );
	std::cout << "Fragy Hit Point	= " << fragy.getHitPoint() << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	clapy.beRepaired( 10 );
	std::cout << "Hit Point	= " << clapy.getHitPoint() << std::endl;
	fragy.attack( "Clapy" );
	clapy.takeDamage( fragy.getAttackDamage() );
	std::cout << "Clapy Hit Point	= " << clapy.getHitPoint() << std::endl;
	std::cout << "Fragy Energy Point = " << fragy.getEnergyPoint() << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	for ( int a = 0 ; scavy.getHitPoint() > 0 ; a++ )
	{
		fragy.attack( "Scavy" );
		scavy.takeDamage( fragy.getAttackDamage() );
		std::cout << "Scavy Hit Point	= " << scavy.getHitPoint() << std::endl;
		std::cout << "Fragy Energy Point = " << fragy.getEnergyPoint() << std::endl;
		std::cout << "************************" << std::endl;
	}
	std::cout << "-------------------------------------------------------" << std::endl;
	fragy.highFivesGuys();
	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << "Fragy Hit Point	= " << fragy.getHitPoint() << std::endl;
	fragy.takeDamage( 200 );
	std::cout << "Fragy Hit Point	= " << fragy.getHitPoint() << std::endl;
	fragy.beRepaired( 200 );
	std::cout << "Fragy Hit Point	= " << fragy.getHitPoint() << std::endl;
	fragy.highFivesGuys();
	std::cout << "-------------------------------------------------------" << std::endl;
	return ( 0 );
}
