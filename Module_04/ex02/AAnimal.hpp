/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:05:31 by acaillea          #+#    #+#             */
/*   Updated: 2022/09/20 11:24:49 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include "Brain.hpp"
# include <iostream>

class	AAnimal
{
	protected:

		std::string		_type;

	public:

		/* Constructor */
		AAnimal( void );
		AAnimal( const AAnimal& copy );

		/* Destructor */
		virtual ~AAnimal( void ) = 0;

		/* Operator Overload */
		AAnimal&	operator=( const AAnimal& copy );

		/* Accessors */
		virtual std::string 	getType( void ) const;

		/* Others members */
		virtual void	makeSound( void ) const = 0;
};

#endif /* AANIMAL_HPP */
