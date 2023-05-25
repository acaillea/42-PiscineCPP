/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: I-lan <I-lan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:09:04 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/06 20:25:36 by I-lan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	private:

		AMateria*	(_inventory[ 4 ]);

	public:

		/* Constructor */
		MateriaSource( void );
		MateriaSource( const MateriaSource& copy );

		/* Destructor */
		virtual ~MateriaSource( void );

		/* Operator Overload */
		MateriaSource&	operator=( const MateriaSource& copy );

		/* Accessors */
		AMateria*		getMateria( const int pos ) const;

		/* Others members */
		virtual void 		learnMateria( AMateria* );
		virtual AMateria* 	createMateria( std::string const & type );
};

#endif /* MATERIASOURCE_HPP */
