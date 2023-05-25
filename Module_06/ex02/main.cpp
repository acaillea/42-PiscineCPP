/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:14:03 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/21 15:07:58 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

/**************		Generate	 **************/

Base*	generate( void )
{
	int i = ( std::rand() % 3 ) + 1;
	
	switch ( i )
	{
		case ( 1 ) :
		{
			A* ret = new A;
			std::cout << "Randomly created  --------->	A" << std::endl;
			return ( static_cast<Base*>( ret ) );
			break ;
		}
		case ( 2 ) :
		{
			B* ret = new B;
			std::cout << "Randomly created  --------->	B" << std::endl;
			return ( static_cast<Base*>( ret ) );
			break ;
		}
		default :
		{
			C* ret = new C;
			std::cout << "Randomly created  --------->	C" << std::endl;
			return ( static_cast<Base*>( ret ) );
			break ;
		}
	}
}

/**************		*Identify	  **************/

void	identify( Base* p )
{
	std::cout << "[Ptr] Instance's Real Type is : ";
	if ( dynamic_cast<A*>( p ) )
	{
		std::cout << "A" << std::endl;
	}
	else if ( dynamic_cast<B*>( p ) )
	{
		std::cout << "B" << std::endl;
	}
	else if ( dynamic_cast<C*>( p ) )
	{
		std::cout << "C" << std::endl;
	}
	else
	{
		std::cout << "Unknow" << std::cout;
	}
	return ;
}

/**************		&Identify	   **************/

void identify( Base& p )
{
	std::cout << "[Ref] Instance's Real Type is : ";
	try
	{
		( void )dynamic_cast<A&>( p );
		std::cout << "A" << std::endl;
		return ;
	}
	catch ( std::bad_cast& bc )
	{
		// Not this
	};
	try
	{
		( void )dynamic_cast<B&>( p );
		std::cout << "B" << std::endl;
		return ;
	}
	catch ( std::bad_cast& bc )
	{ 
		// Not this
	}
	try
	{
		( void )dynamic_cast<C&>( p );
		std::cout << "C" << std::endl;
		return ;
	}
	catch ( std::bad_cast& bc )
	{ 
		// Not this
	}
	return ;
}

/***	Main		***/

int		main ()
{
    std::srand( time( NULL ) );

   	Base*	test;
    
	/***   Test 1  ***/

    std::cout << "== Test 1 ==================================" << std::endl;

    test = generate();
	identify( test );
	identify( *test );

	delete ( test );

	/***   Test 2  ***/

    std::cout << std::endl << "== Test 2 ==================================" << std::endl;

    test = generate();
	identify( test );
	identify( *test );

	delete ( test );

	/***   Test 3  ***/

    std::cout << std::endl << "== Test 3 ==================================" << std::endl;

    test = generate();
	identify( test );
	identify( *test );
    
	delete ( test );

	/* Check leaks */
	// system( "leaks realType" );
	return ( 0 );
}
