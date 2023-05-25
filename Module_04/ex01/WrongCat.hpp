/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:18:54 by acaillea          #+#    #+#             */
/*   Updated: 2022/09/20 10:54:24 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "main.hpp"

class	WrongCat : public WrongAnimal
{
	private:

	public:

		/* Constructor */
		WrongCat( void );
		WrongCat( const WrongCat& copy );

		/* Destructor */
		~WrongCat( void );

		/* Operator Overload */
		WrongCat&	operator=( const WrongCat& copy );

		/* Others members */
		void	makeSound( void ) const;
};

#endif /* WRONGCAT_HPP */
