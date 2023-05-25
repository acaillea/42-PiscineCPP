/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: I-lan <I-lan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:14:44 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/06 20:24:18 by I-lan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class	Ice : public AMateria
{
	private:

	public:

		/* Constructor */
		Ice( void );
		Ice( const Ice& copy );

		/* Destructor */
		~Ice( void );

		/* Operator Overload */
		Ice&	operator=( const Ice& copy );

		/* Others members */
		virtual AMateria* 	clone() const;
		virtual void		use( ICharacter& target );

};

#endif /* ICE_HPP */
