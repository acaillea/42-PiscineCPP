/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:14:05 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/21 15:02:16 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

/******** Includes **********/

# include <iostream>
# include <climits>
# include <iomanip>
# include <stdexcept>
# include <cstdlib>

/********** Class ***********/

class	Converter
{
	private:

		std::string	_arg;

	public:

		/* Constructor */
		Converter( void );
		Converter( const Converter& copy );
		Converter( std::string in );

		/* Destructor */
		~Converter( void );

		/* Operator Overload */
		Converter&	operator=( const Converter& copy );

		/* Accessors */
		std::string	getArg( void ) const;

		/* Type Cast Operator */
		operator char();
		operator int();
		operator float();
		operator double();
};

#endif /* CONVERTER_HPP */
