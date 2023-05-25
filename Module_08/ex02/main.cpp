/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:54:25 by acaillea          #+#    #+#             */
/*   Updated: 2022/10/03 13:47:44 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int		main ()
{
	// MutantStack -------------------------------------------------------
    std::cout << "=== MutantStack =========" << std::endl;

    MutantStack<int>    mstack;

    mstack.push(0);
    mstack.push(1);

    std::cout << "TOP => " << mstack.top() << std::endl;

    mstack.pop();

    std::cout << "SIZE => " << mstack.size() << std::endl;

    mstack.push(2);
    mstack.push(3);
    mstack.push(4);
    mstack.push(5);

    MutantStack<int>::iterator ite = mstack.end();

    for (MutantStack<int>::iterator it = mstack.begin(); it != ite; it++)
        std::cout << *it << std::endl;

	// List --------------------------------------------------------------

    std::cout << "\n=== List ================" << std::endl;

    std::list<int>    list;

    list.push_back(0);
    list.push_back(1);

    std::cout << "TOP => " << list.back() << std::endl;

    list.pop_back();

    std::cout << "Size => " << list.size() << std::endl;

    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.push_back(5);

    std::list<int>::iterator itliste = list.end();

    for (std::list<int>::iterator itlist = list.begin(); itlist != itliste; itlist++)
        std::cout << *itlist << std::endl;

	// Rev MutantStack ---------------------------------------------------

    std::cout << "\n=== MutantStack rev =====" << std::endl;

    MutantStack<int>::reverse_iterator rite = mstack.rend();

    for (MutantStack<int>::reverse_iterator rit = mstack.rbegin(); rit != rite; rit++)
        std::cout << *rit << std::endl;

	// Rev List ----------------------------------------------------------

    std::cout << "\n=== List rev ============" << std::endl;

    std::list<int>::reverse_iterator ritliste = list.rend();

    for (std::list<int>::reverse_iterator ritlist = list.rbegin(); ritlist != ritliste; ritlist++)
        std::cout << *ritlist << std::endl;

	return ( 0 );
}
