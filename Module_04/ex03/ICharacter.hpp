/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:46:40 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/20 11:39:15 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

class	AMateria;

# include "AMateria.hpp"

class	ICharacter
{
	public:

		/* Destructor */
		virtual ~ICharacter( void ) {}

		/* Accessors */
		virtual std::string const & getName() const = 0;

		/* Others members */
		virtual void	equip( AMateria* m ) = 0;
		virtual void	unequip( int idx ) = 0;
		virtual void	use( int idx , ICharacter& target ) = 0;

};

#endif  /* ICHARACTER_HPP */
