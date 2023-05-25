/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:10:43 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/17 15:39:43 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class	Fixed
{
	private:

		int					_value;
		static int const 	_bits = 8;

	public:

		/* Constructor */
		Fixed( void );
		Fixed( const Fixed& copy);
		Fixed( int const i );
		Fixed( float const f);

		/* Destructor */
		~Fixed( void );

		/* Operator Overload */
		Fixed& operator=( const Fixed& x );

		/* Accessors */
		void	setRawBits( int const raw );
		int		getRawBits( void ) const;

		/* Others members */
		int		toInt( void ) const;
		float	toFloat( void ) const;
};

std::ostream&	operator<<( std::ostream& o , const Fixed& x );

#endif /* FIXED_H */
