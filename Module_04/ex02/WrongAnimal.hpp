/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:18:58 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/26 17:03:43 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal
{
	protected:

		std::string	_type;

	public:

		/* Constructor */
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal& copy );

		/* Destructor */
		virtual ~WrongAnimal( void );

		/* Operator Overload */
		WrongAnimal&	operator=( const WrongAnimal& copy );

		/* Accessors */
		std::string 	getType( void ) const;

		/* Others members */
		void	makeSound( void ) const;

};

#endif /* WRONGANIMAL_HPP */
