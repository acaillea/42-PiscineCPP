/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:24:38 by I-lan             #+#    #+#             */
/*   Updated: 2022/08/12 14:40:10 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/* -------------------------------------------------------------------------- */

Harl::Harl( void )
{
	std::cout << "Harl is awake" << std::endl;
	return ;
}

Harl::~Harl( void )
{
	std::cout << "Harl is weg..." << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-\
pickle-specialketchup burger. I really do!" << std::endl;
	return ;	
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money.\
You didn’t put enough bacon in my burger! If you did, \
I wouldn’t be asking for more!" << std::endl;
	return ;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. \
I’ve been coming for years whereas you started working here \
since last month." << std::endl;
	return ;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now."\
			 << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */

void	Harl::complain( std::string level )
{
	std::string	lstLevel[4] = { "DEBUG" , "INFO" , "WARNING" , "ERROR"};
	
	void	( Harl::*ptr[4] )( void )= { &Harl::debug , &Harl::info , &Harl::warning , &Harl::error };

	for ( int i = 0 ; i < 4 ; i++ )
	{
		if ( !lstLevel[i].compare(level) )
		{
			(this->*(ptr[i]))();
			return ;
		}
	}
}
