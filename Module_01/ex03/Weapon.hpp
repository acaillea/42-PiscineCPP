/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 13:39:55 by acaillea          #+#    #+#             */
/*   Updated: 2022/11/03 15:26:13 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon
{
	private:

		std::string		_type;

	public:

		Weapon( std::string inType );
		~Weapon( void );

		void				setType( std::string inType );
		std::string const&	getType( void ) const;
};

#endif /* WEAPON_HPP */
