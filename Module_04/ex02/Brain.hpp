/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:48:07 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/26 17:09:54 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain
{
	private:

		std::string*	_ideas;

	public:

		/* Constructor */
		Brain( void );
		Brain( const Brain& copy );

		/* Destructor */
		~Brain( void );

		/* Operator Overload */
		Brain&	operator=( const Brain& copy );

		/* Accessors */
		std::string	getIdea( int pos ) const;	
};

#endif /* BRAIN_HPP */
