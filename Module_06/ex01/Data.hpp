/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: I-lan <I-lan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:36:30 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/16 15:08:50 by I-lan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <stdint.h>

class	Data
{
	private:

		std::string		_name;

	public:

		/* Constructor */
		Data( void );
		Data( const Data& copy );
		Data( std::string name );

		/* Destructor */
		~Data( void );

		/* Operator Overload */
		Data&	operator=( const Data& copy );

		/* Accessors */
		std::string		getName( void ) const;
};

#endif /* DATA_HPP */
