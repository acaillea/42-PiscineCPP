/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:15:07 by acaillea          #+#    #+#             */
/*   Updated: 2022/11/03 15:22:49 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* -------------------------------------------------------------------------- */

Zombie::Zombie ( void )
{
	// std::cout << "A zombie came to life." << std::endl;
	return ;
}

Zombie::~Zombie ( void )
{
	// std::cout << this->_name << " has been killed." <<std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */

void	Zombie::setZombieName( std::string input )
{
	this->_name = input;
	return ;
}

/* -------------------------------------------------------------------------- */

void	Zombie::announce( void ) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
