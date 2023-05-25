/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:12:31 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/23 15:43:46 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int		main ()
{
	std::cout << "----------------------------1--------------------------" << std::endl;

	DiamondTrap	didi( "Didi" );

	std::cout << "Name		= " << didi.getName() << std::endl;
	std::cout << "Hit Point	= " << didi.getHitPoint() << std::endl;
	std::cout << "Energy Point	= " << didi.getEnergyPoint() << std::endl;
	std::cout << "Attack Damage	= " << didi.getAttackDamage() << std::endl;
	std::cout << "---------------------------2---------------------------" << std::endl;
	didi.guardGate();
	didi.highFivesGuys();
	didi.whoAmI();
	didi.attack( "YOU ");
	std::cout << "--------------------------3----------------------------" << std::endl;
	didi.attack( "YOU ");
	std::cout << "Didi Energy Point = " << didi.getEnergyPoint() << std::endl;
	std::cout << "--------------------------4----------------------------" << std::endl;
	didi.takeDamage( 99 );
	std::cout << "Didi Hit Point = " << didi.getHitPoint() << std::endl;
	std::cout << "--------------------------5----------------------------" << std::endl;
	didi.beRepaired( 1 );
	std::cout << "Didi Hit Point = " << didi.getHitPoint() << std::endl;
	std::cout << "Didi Energy Point = " << didi.getEnergyPoint() << std::endl;
	std::cout << "--------------------------6----------------------------" << std::endl;
	didi.takeDamage( 3 );
	std::cout << "Didi Hit Point = " << didi.getHitPoint() << std::endl;
	std::cout << "--------------------------7----------------------------" << std::endl;
	didi.beRepaired( 1 );
	didi.guardGate();
	didi.highFivesGuys();
	didi.whoAmI();
	didi.attack( "YOU ");
	std::cout << "--------------------------8----------------------------" << std::endl;
	DiamondTrap	dodo(didi);

	std::cout << "Name		= " << dodo.getName() << std::endl;
	std::cout << "Hit Point	= " << dodo.getHitPoint() << std::endl;
	std::cout << "Energy Point	= " << dodo.getEnergyPoint() << std::endl;
	std::cout << "Attack Damage	= " << dodo.getAttackDamage() << std::endl;
	std::cout << "--------------------------9----------------------------" << std::endl;

	return ( 0 );
}
