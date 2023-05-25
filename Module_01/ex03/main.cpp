/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 13:39:39 by acaillea          #+#    #+#             */
/*   Updated: 2022/11/03 15:28:48 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int		main ( void )
{
	/* Tests given in the statement */
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	std::cout << "-------------------------------" << std::endl;
	/* Personal tests */
	{
		Weapon sulfateuse = Weapon("sulfateuse");
		Weapon bout_de_boit = Weapon("bout_de_bois");
		HumanA hug("Hugo", sulfateuse);
		HumanB alan("Alan");
		hug.attack();
		alan.attack();
		sulfateuse.setType("maxi-sulfateuse");
		hug.attack();
		alan.setWeapon(bout_de_boit);
		alan.attack();
		sulfateuse.setType("ultra-giga-maxi-sulfateuse-dtg");
		hug.attack();
	}
	/* Check leaks */
	// system("leaks noviolence");
	
	return (0);
}
