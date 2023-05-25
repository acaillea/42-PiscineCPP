/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:17:43 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/26 17:27:02 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "main.hpp"

class	Cat : public Animal
{
	private:

		Brain*	_ibrain;

	public:

		/* Constructor */
		Cat( void );
		Cat( const Cat& copy );

		/* Destructor */
		virtual ~Cat( void );

		/* Operator Overload */
		Cat&	operator=( const Cat& copy );

		/* Accessors */
		std::string	getIdea( int pos ) const;
		Brain*		getBrain( void ) const;

		/* Others members */
		virtual void	makeSound( void ) const;
};

#endif /* CAT_HPP */
