/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: I-lan <I-lan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:36:13 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/07 11:31:32 by I-lan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class	Character : public ICharacter
{
	private:

		std::string const	_name;
		AMateria*			( _inventory[4] );
	
	public:

		/* Constructor */
		Character( void );
		Character( const Character& copy );
		Character( std::string in );

		/* Destructor */
		~Character( void );

		/* Operator Overload */
		Character&	operator=( const Character& copy );

		/* Accessors */
		virtual std::string const & getName() const;
		AMateria*					getInv( int nb ) const;

		/* Others members */
		virtual void	equip( AMateria* m );
		virtual void	unequip( int idx );
		virtual void	use( int idx , ICharacter& target );
};

#endif  /* CHARACTER_HPP */
