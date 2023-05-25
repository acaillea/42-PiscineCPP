/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:22:22 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/03 18:00:03 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

PhoneBook::PhoneBook ( void ) 
{
	// std::cout << "PhoneBook constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook ( void )
{
	// std::cout << "PhoneBook destructor called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  								Setter									  */
/* -------------------------------------------------------------------------- */

void	PhoneBook::setFirst_Name( std::string input , int position )
{
	this->contact_lst[ position ].setFirst_Name( input );
	return ;
}

void	PhoneBook::setLast_Name( std::string input , int position )
{
	this->contact_lst[ position ].setLast_Name( input );
	return ;
}

void	PhoneBook::setNickname( std::string input , int position )
{
	this->contact_lst[ position ].setNickname( input );
	return ;
}

void	PhoneBook::setPhone_Number( std::string input , int position)
{
	this->contact_lst[position].setPhone_Number( input );
	return ;
}

void	PhoneBook::setDarkest_Secret( std::string input , int position )
{
	this->contact_lst[position].setDarkest_Secret( input );
	return ;
}

/* -------------------------------------------------------------------------- */
/*  								Getter									  */
/* -------------------------------------------------------------------------- */

Contact		PhoneBook::getContact( int position ) const
{
	return (this->contact_lst[ position ]);
}
