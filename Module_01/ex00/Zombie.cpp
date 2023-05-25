/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:15:07 by acaillea          #+#    #+#             */
/*   Updated: 2022/11/03 15:02:31 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* -------------------------------------------------------------------------- */

Zombie::Zombie ( std::string input )/* or _name(input) */
{
	this->_name = input;
	std::cout << this->_name << " came to life." <<std::endl;
	return ;
}

Zombie::~Zombie ( void )
{
	std::cout << this->_name << " has been destroyed." <<std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */

void	Zombie::announce( void ) const
{
	std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
