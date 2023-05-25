/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:22:36 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/03 16:21:08 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */


Contact::Contact ( void ) 
{
	// std::cout << "Contact constructor called" << std::endl;
	return ;
}

Contact::~Contact ( void ) 
{
	// std::cout << "Contact destructor called" << std::endl;
	return ;
}


/* -------------------------------------------------------------------------- */
/*  								Setter									  */
/* -------------------------------------------------------------------------- */


void	Contact::setFirst_Name( std::string input )
{	
	this->_first_name = input;
	return ;
}

void	Contact::setLast_Name( std::string input )
{	
	this->_last_name = input;
	return ;
}

void	Contact::setNickname( std::string input )
{	
	this->_nickname = input;
	return ;
}

void	Contact::setPhone_Number( std::string input )
{	
	this->_phone_number = input;
	return ;
}

void	Contact::setDarkest_Secret( std::string input )
{	
	this->_darkest_secret = input;
	return ;
}


/* -------------------------------------------------------------------------- */
/*  								Getter									  */
/* -------------------------------------------------------------------------- */


std::string	Contact::getFirst_Name( void ) const
{
	return ( this->_first_name );
}

std::string	Contact::getLast_Name( void ) const
{
	return ( this->_last_name );
}

std::string	Contact::getNickname( void ) const
{
	return ( this->_nickname );
}

std::string	Contact::getPhone_Number( void ) const
{
	return ( this->_phone_number );
}

std::string	Contact::getDarkest_Secret( void ) const
{
	return ( this->_darkest_secret );
}
