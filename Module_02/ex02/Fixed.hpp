/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:10:43 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/18 14:38:18 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class	Fixed
{
	private:

		int					_value;
		static int const 	_bits;

	public:

		/* Constructor */
		Fixed( void );
		Fixed( const Fixed& copy);
		Fixed( int const i );
		Fixed( float const f);

		/* Destructor */
		~Fixed( void );

		/* Accessors */
		void	setRawBits( int const raw );
		int		getRawBits( void ) const;

		/* Others members */
		int		toInt( void ) const;
		float	toFloat( void ) const;

		/* Affectation Operator Overload */
		Fixed& operator=( const Fixed& x );

		/* Comparaison Operator Overload */
		bool operator<( const Fixed& x ) const;
		bool operator>( const Fixed& x ) const;
		bool operator<=( const Fixed& x ) const;
		bool operator>=( const Fixed& x ) const;
		bool operator==( const Fixed& x ) const;
		bool operator!=( const Fixed& x ) const;

		/* Arithmetic Operator Overload */
		Fixed operator+( const Fixed& x ) const;
		Fixed operator-( const Fixed& x ) const;
		Fixed operator*( const Fixed& x ) const;
		Fixed operator/( const Fixed& x ) const;

		/* Increment/Decrement Operator Overload */
		Fixed  operator++( int );
		Fixed& operator++( void );
		Fixed  operator--( int );
		Fixed& operator--( void );

		/* Min & Max Operator Overload */
		static const Fixed& min( Fixed& a , Fixed& b );
		static const Fixed& max( Fixed& a , Fixed& b );
		static const Fixed& min( const Fixed& a , const Fixed& b );
		static const Fixed& max( const Fixed& a , const Fixed& b );
};

std::ostream&	operator<<( std::ostream& o , const Fixed& x );

#endif /* FIXED_H */
