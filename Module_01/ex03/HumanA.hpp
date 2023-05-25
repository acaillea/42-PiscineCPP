/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 13:40:39 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/10 17:43:59 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanA
{
	private:

		std::string		_nameA;
		Weapon&			_weaponA;

	public:

		HumanA( std::string inName , Weapon &inWeapon );
		~HumanA( void );

		void	setName( std::string inName );
		void	setWeapon( Weapon inWeapon );

		std::string	getName( void ) const;
		Weapon&		getWeapon( void ) const;

		void	attack( void ) const;

};

#endif /* HUMANA_HPP */
