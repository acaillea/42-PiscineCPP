/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:12:09 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/23 16:10:23 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
	private:

	public:

		/* Constructor */
		ScavTrap( void );
		ScavTrap( const ScavTrap& copy );
		ScavTrap( std::string strin );

		/* Destructor */
		~ScavTrap( void );

		/* Operator Overload */
		ScavTrap&	operator=( const ScavTrap& copy );

		/* Methods */
		void	attack( const std::string& target );
		void	guardGate( void );
};

#endif /* SCAVTRAP_HPP */
