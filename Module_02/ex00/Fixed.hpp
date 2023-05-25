/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:05:17 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/17 13:03:02 by acaillea         ###   ########.fr       */
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

		Fixed( void );
		Fixed( const Fixed& copy);
		~Fixed( void );
		
		Fixed& operator=( const Fixed& x );

		void	setRawBits( int const raw );
		int		getRawBits( void ) const;
};

#endif /* FIXED_H */
