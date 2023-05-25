/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:14:47 by acaillea          #+#    #+#             */
/*   Updated: 2022/11/03 15:04:24 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie 
{	
	private:

		std::string	_name;

	public:

		Zombie( std::string input );
		~Zombie( void );

		void	announce( void ) const;
};

/* --------------------------------------- */

Zombie*		newZombie( std::string name );

void		randomChump( std::string name );

#endif /* ZOMBIE_HPP */
