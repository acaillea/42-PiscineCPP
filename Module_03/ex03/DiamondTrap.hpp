/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:15:13 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/23 16:11:10 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap , public FragTrap
{
	private:
	
		std::string	_name;

	public:

		/* Constructor */
		DiamondTrap( void );
		DiamondTrap( const DiamondTrap& copy );
		DiamondTrap( const std::string inname );

		/* Destructor */
		~DiamondTrap( void );

		/* Operator Overload */
		DiamondTrap&	operator=( const DiamondTrap& copy );

		/* Methods */
		std::string	getName( void ) const;
		using		ScavTrap::attack;
		void		whoAmI( void );
};

# endif /* DIAMONDTRAP_HPP */
