/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:51:03 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/23 15:56:41 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap
{
	protected:

		std::string		_name;
		unsigned int	_hitpoint;
		unsigned int	_enerpoint;
		unsigned int	_attdamag;

	public:

		/* Constructor */
		ClapTrap( void );
		ClapTrap( const ClapTrap& copy );
		ClapTrap( const std::string strin );
		ClapTrap( const std::string strin , const unsigned int inhit , const unsigned int inener , const unsigned int inatt );

		/* Destructor */
		~ClapTrap( void );

		/* Operator Overload */
		ClapTrap&	operator=( const ClapTrap& copy );

		/* Accessors */
		std::string		getName( void ) const;
		unsigned int	getHitPoint( void ) const;
		unsigned int	getEnergyPoint( void ) const;
		unsigned int	getAttackDamage( void ) const;

		/* Others members */
		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

};

#endif /* CLAPTRAP_HPP */
