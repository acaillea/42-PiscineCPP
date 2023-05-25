/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:12:04 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/20 16:28:00 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main ()
{
	/* Personnal tests */
	{
		std::cout << "------------- Default ------------" << std::endl;
		std::cout << std::endl;
		Bureaucrat*	one = new Bureaucrat();
		try
		{
			one->incrementGrade();
			one->decrementGrade();
			one->decrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		delete one ;
		std::cout << std::endl;
		std::cout << "--------------- OK ---------------" << std::endl;
		std::cout << std::endl;
		Bureaucrat*	john = new Bureaucrat( 1 , "John" );
		Bureaucrat*	john_copy = new Bureaucrat( *john );
		try
		{
			john->decrementGrade();
			john->incrementGrade();
			john_copy->incrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		delete ( john );
		delete ( john_copy );
		std::cout << std::endl;
		std::cout << "---------- Too Low ---------------" << std::endl;
		std::cout << std::endl;
		try
		{
			Bureaucrat*	nath = new Bureaucrat( -19 , "Nathan" );
			nath->getGrade();	
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
		std::cout << "---------- Too high --------------" << std::endl;
		std::cout << std::endl;
		try
		{
			Bureaucrat*	matt = new Bureaucrat( 153 , "Matthieu" );
			matt->getGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;;
		}
		std::cout << std::endl;
	}
	/* Check leaks */
	// system("leaks bureaucrat");
	return ( 0 );
}
