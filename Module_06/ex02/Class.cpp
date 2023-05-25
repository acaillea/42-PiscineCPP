/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:34:06 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/21 15:05:34 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

/* -------------------------------------------------------------------------- */
/*  						Constructor & Destructor 						  */
/* -------------------------------------------------------------------------- */

Base::Base( void )
{
	// std::cout << "Base Default Constructor Called" << std::endl;
	return ;
}

Base::Base( const Base& copy )
{
	( void )copy;
	// std::cout << "Base Copy Constructor Called" << std::endl;
	return ;
}

Base::~Base( void )
{
	// std::cout << "Base Destructor Called" << std::endl;
	return ;
}

/* -------------------------------------------------------------------------- */
/*  							Operator Overload							  */
/* -------------------------------------------------------------------------- */

Base&	Base::operator=( const Base& copy )
{
	( void )copy;
	// std::cout << "Base Copy Assignment Operator Called" << std::endl;
	return ( *this );
}
