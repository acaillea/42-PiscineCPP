/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:17:48 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/26 17:27:15 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "main.hpp"

class	Dog : public Animal
{
	private:

		Brain*	_ibrain;

	public:

		/* Constructor */
		Dog( void );
		Dog( const Dog& copy );

		/* Destructor */
		virtual ~Dog( void );

		/* Operator Overload */
		Dog&	operator=( const Dog& copy );

		/* Accessors */
		std::string	getIdea( int pos ) const;
		Brain*		getBrain( void ) const;

		/* Others members */
		virtual void	makeSound( void ) const;
};

#endif /* DOG_HPP */
