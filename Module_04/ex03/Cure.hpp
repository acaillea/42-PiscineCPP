/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: I-lan <I-lan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:14:37 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/06 23:07:52 by I-lan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class	Cure : public AMateria
{
	private:

	public:

		/* Constructor */
		Cure( void );
		Cure( const Cure& copy );

		/* Destructor */
		~Cure( void );

		/* Operator Overload */
		Cure&	operator=( const Cure& copy );

		/* Others members */
		virtual AMateria* 	clone() const;
		virtual void		use( ICharacter& target );
};

#endif /* CURE_HPP */
