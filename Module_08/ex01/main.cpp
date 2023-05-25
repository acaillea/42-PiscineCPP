/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:58:09 by acaillea          #+#    #+#             */
/*   Updated: 2022/10/03 11:35:28 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int		main ()
{
	/* Tests given in the statement */
	{
		std::cout << std::endl << "-------------- STATEMENT TESTS --------------" << std::endl;
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp << std::endl;

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	/* Personnal tests */
	{
		std::cout << std::endl << "-------------- PERSONNAL TESTS --------------" << std::endl;
		// -------------------------------------------------------------
		std::cout << "Adding issue" << std::endl;
		std::cout << "------------" << std::endl;

		Span sp = Span(4);
		try
		{
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
		}
		catch ( std::exception & e )
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << sp << std::endl;
		std::cout << std::endl;
		// -------------------------------------------------------------
		std::cout << "Empty" << std::endl;
		std::cout << "------------" << std::endl;

		Span sp1 = Span(5);
		std::cout << sp1 << std::endl;
		try
		{
			std::cout << sp1.shortestSpan() << std::endl;
		}
		catch ( std::exception & e )
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << sp1.shortestSpan() << std::endl;
		}
		catch ( std::exception & e )
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
		std::cout << "One member" << std::endl;
		std::cout << "------------" << std::endl;
		sp1.addNumber( 19 );
		std::cout << sp1 << std::endl;
		try
		{
			std::cout << sp1.shortestSpan() << std::endl;
		}
		catch ( std::exception & e )
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << sp1.shortestSpan() << std::endl;
		}
		catch ( std::exception & e )
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
		std::cout << "Normal" << std::endl;
		std::cout << "------------" << std::endl;
		Span sp2 = Span(6);
		try
		{
			sp2.addNumber(600);
			sp2.addNumber(-95463);
			sp2.addNumber(17556);
			sp2.addNumber(0);
			sp2.addNumber(-11);
		}
		catch ( std::exception & e )
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << sp2 << std::endl;
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
		std::cout << std::endl;

		std::cout << std::endl;
		std::cout << "Better add" << std::endl;
		std::cout << "------------" << std::endl;

		Span sp3 = Span ( 500 );
		std::vector<int> vec( 500 , 1 );
		vec[ 326 ] = 40;
		vec[ 3 ] = -999;
		sp3.betterAddNumber( vec.begin() , vec.end() );
		std::cout << sp3 << std::endl;
		try
		{
			std::cout << sp3.shortestSpan() << std::endl;
		}
		catch ( std::exception & e )
		{
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl;
		std::cout << "Better add Fail" << std::endl;
		std::cout << "---------------" << std::endl;

		Span sp4 = Span ( 50 );
		std::vector<int> vec1( 60 , -10 );
		try
		{
			sp4.betterAddNumber( vec1.begin() , vec1.end() );
			std::cout << sp4 << std::endl;
		}
		catch ( std::exception & e )
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	return ( 0 );
}
