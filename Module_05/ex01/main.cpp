/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:12:04 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/20 17:10:07 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main ()
{
	std::cout << "----------------------------------" << std::endl;
	Form* constitution = new Form("Constitution", 10, 30);
	Form* toHigh;
    Form* toLow;

    std::cout << *constitution;
	std::cout << std::endl << "----------------------------------" << std::endl;
    /* To high */
    std::cout << "\n=== Test to high at start =========" << std::endl;
    try
    {
       toHigh = new Form("ToHigh", 0, 20);
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
	std::cout << std::endl << "----------------------------------" << std::endl;
    /* To low */
    std::cout << "\n=== Test to low at start ==========" << std::endl;
    try
    {
       toLow = new Form("ToHigh", 10, 199);
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

	std::cout << std::endl << "----------------------------------" << std::endl;

    std::cout << "\n=== Test with bob =================" << std::endl;

    Bureaucrat* bob = new Bureaucrat("Bob", 5);
    
    std::cout << *bob;

    bob->signForm(*constitution);

    std::cout << *constitution;

    bob->signForm(*constitution);

	std::cout << std::endl << "----------------------------------" << std::endl;

    std::cout << "\n=== Test with Popy ==============" << std::endl;

    Form* nop = new Form("Constitution", 1, 1);
    Bureaucrat* popy = new Bureaucrat("Popy", 12);

    popy->signForm(*nop);
    
	std::cout << std::endl << "----------------------------------" << std::endl;

    delete constitution;
    delete bob;
    delete nop;
    delete popy;

	/* Check leaks */
	// system("leaks form");
	return ( 0 );
}
