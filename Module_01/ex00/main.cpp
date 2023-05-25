/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:14:34 by acaillea          #+#    #+#             */
/*   Updated: 2022/11/03 15:18:21 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main ()
{
	Zombie*		tonvoisin;
	Zombie*		tavoisine;

	std::cout << "--------------------------" << std::endl;

	/* Dynamic allocation main scope */
	tonvoisin = new Zombie("Daniel");
	tonvoisin->announce();
	delete tonvoisin;

	std::cout << "--------------------------" << std::endl;

	/* Dynamic allocation newZombie scope */
	tavoisine = newZombie("Jacqueline");
	tavoisine->announce();
	delete tavoisine;

	std::cout << "--------------------------" << std::endl;

	/* Stack allocation randomChump scope */
	randomChump("Yves");

	std::cout << "--------------------------" << std::endl;

	/* Check leaks */
	// system("leaks zombieScope");

	return (0);
}
