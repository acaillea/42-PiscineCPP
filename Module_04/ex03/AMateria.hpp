/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: I-lan <I-lan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:28:06 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/06 20:30:08 by I-lan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class	ICharacter;

class	AMateria
{
	protected:	

		std::string	_type;

	public:

		/* Constructor */
		AMateria( void );
		AMateria( const AMateria& copy );
		AMateria( const std::string& type );

		/* Destructor */
		virtual ~AMateria( void );

		/* Operator Overload */
		AMateria&	operator=( const AMateria& copy );

		/* Accessors */
		std::string const & getType() const; //Returns the materia type

		/* Others members */
		virtual AMateria* 	clone( void ) const = 0;
		virtual void		use( ICharacter& target ) = 0;
};

#endif /* AMATERIA_HPP */
