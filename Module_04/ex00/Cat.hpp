/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:17:43 by acaillea          #+#    #+#             */
/*   Updated: 2022/09/20 10:52:53 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat : public Animal
{
	private:

	public:

		/* Constructor */
		Cat( void );
		Cat( const Cat& copy );

		/* Destructor */
		virtual ~Cat( void );

		/* Operator Overload */
		Cat&	operator=( const Cat& copy );

		/* Others members */
		virtual void	makeSound( void ) const;
};

#endif /* CAT_HPP */
