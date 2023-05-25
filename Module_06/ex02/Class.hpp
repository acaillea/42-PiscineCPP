/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:16:11 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/19 15:08:23 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
# define CLASS_HPP

# include <iostream>
# include <cstdlib>

class	Base
{
	public:

		/* Constructor */
		Base( void );
		Base( const Base& copy );

		/* Destructor */
		virtual ~Base( void );

		/* Operator Overload */
		Base&	operator=( const Base& copy );
};

class	A : public Base
{ };

class	B : public Base
{ };

class 	C : public Base
{ };

#endif /* CLASS_HPP */
