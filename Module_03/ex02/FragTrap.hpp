/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:22:07 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/23 16:11:18 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:

	public:

		/* Constructor */
		FragTrap( void );
		FragTrap( const FragTrap& src );
		FragTrap( std::string inname );

		/* Destructor */
		~FragTrap( void );

		/* Operator Overload */
		FragTrap&	operator=( const FragTrap& rhs );

		/* Methods */
		void	attack( const std::string& target );
		void	highFivesGuys( void );
};

#endif /* FRAGTRAP_HPP */
