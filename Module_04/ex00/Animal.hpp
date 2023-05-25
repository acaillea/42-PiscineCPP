/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:05:31 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/26 14:29:28 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class	Animal
{
	protected:

		std::string		_type;

	public:

		/* Constructor */
		Animal( void );
		Animal( const Animal& copy );

		/* Destructor */
		virtual ~Animal( void );

		/* Operator Overload */
		Animal&	operator=( const Animal& copy );

		/* Accessors */
		std::string getType( void ) const;

		/* Others members */
		virtual void	makeSound( void ) const;
};

#endif /* ANIMAL_HPP */
