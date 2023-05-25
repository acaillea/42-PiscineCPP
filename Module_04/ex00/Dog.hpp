/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:17:48 by acaillea          #+#    #+#             */
/*   Updated: 2022/09/20 10:53:06 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog : public Animal
{
	private:

	public:

		/* Constructor */
		Dog( void );
		Dog( const Dog& copy );

		/* Destructor */
		virtual ~Dog( void );

		/* Operator Overload */
		Dog&	operator=( const Dog& copy );

		/* Others members */
		virtual void	makeSound( void ) const;
};

#endif /* DOG_HPP */
