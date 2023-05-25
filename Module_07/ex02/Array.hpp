/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 17:56:27 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/27 12:04:24 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template< typename T >
class	Array
{
	private:

		T*				_arrayptr;
		unsigned int	_size;

	public:

		/*----------------------- Default Constructor -----------------------*/
		Array( void ) : _size( 0 ) 
		{
			// std::cout << "Array Default Constructor Called" << std::endl;
			this->_arrayptr = new T[ 1 ];
			this->_arrayptr[ 0 ] = 0;
			return ;		
		};
		/*----------------------- Copy Constructor -----------------------*/
		Array( const Array& copy ) : _size( copy.size() )
		{
			// std::cout << "Array Copy Constructor Called" << std::endl;
			this->_arrayptr = new T[ copy.size() ];
			for ( unsigned int i = 0 ; i < copy.size() ; i++ )
			{
				this->_arrayptr[ i ] = copy.getArraptr()[ i ];
			}
			return ;
		};
		/*----------------------- UInt Constructor -----------------------*/
		Array( unsigned int n ) : _size( n )
		{
			// std::cout << "Array UInt Constructor Called" << std::endl;
			this->_arrayptr = new T[ n ];
			return ;	
		};

		/*----------------------- Destructor -----------------------*/
		~Array( void )
		{
			// std::cout << "Array Destructor Called" << std::endl;
			delete [ ] this->_arrayptr;
			return ;
		};

		/*----------------------- Operator Overload -----------------------*/
		/*	=	*/
		void	operator=( const Array& copy )
		{
			// std::cout << "Array Copy Assignement Called" << std::endl;
			if ( this != &copy )
			{
				this->_size = copy.size();
				delete [] ( this->_arrayptr );
				this->_arrayptr = new T[ copy.size() ];
				for ( unsigned int i = 0 ; i < copy.size() ; i++ )
				{
					this->_arrayptr[ i ] = copy.getArraptr()[ i ];
				}
			}
		};
		/*	[ ]	 */
		T &		operator[]( int i )
		{
			if ( i < 0 || i >= static_cast<int>( this->_size ) )
			{
				throw ( std::exception() );
			}
			return ( this->_arrayptr[ i ] );	
		}
		/*----------------------- Getters -----------------------*/
		T*	getArraptr( void ) const
		{
			return ( this->_arrayptr );
		}
		unsigned int	size( void ) const
		{
			return ( this->_size );
		};
};

template< typename T >
std::ostream & operator<<( std::ostream & o , Array< T > const & e )
{
	for ( unsigned int i = 0 ; i < e.size() ; i++ )
	{
		std::cout << "List [" << i << "] = " << e.getArraptr()[ i ] << std::endl;
	}
	return ( o );
}

#endif /* ARRAY_HPP */
