/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 13:41:02 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/10 16:50:30 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanB
{
	private:

		std::string		_nameB;
		Weapon*			_weaponB;

	public:

		HumanB( std::string inName );
		~HumanB( void );

		void		setWeapon( Weapon inWeapon );
		void		setName( std::string inName );

		std::string	getName( void ) const;
		Weapon*		getWeapon( void ) const;

		void		attack( void ) const;
};

#endif /* HUMANB_HPP */
