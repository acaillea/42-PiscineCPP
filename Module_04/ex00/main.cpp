/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:45:07 by acaillea          #+#    #+#             */
/*   Updated: 2022/09/20 10:05:33 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int		main ()
{
	/* Tests given in the statement */
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << "------------------------------" << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << "------------------------------" << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		std::cout << "------------------------------" << std::endl;
		
		delete meta;
		delete j;
		delete i;
	}
	std::cout << "==================================================================" << std::endl;
	/* Personnal tests */
	{
		const WrongAnimal* w_meta = new WrongAnimal();
		const WrongAnimal* w_i = new WrongCat();
		std::cout << "------------------------------" << std::endl;
		std::cout << w_meta->getType() << " " << std::endl;
		std::cout << w_i->getType() << " " << std::endl;
		std::cout << "------------------------------" << std::endl;
		w_i->makeSound();
		w_meta->makeSound();
		std::cout << "------------------------------" << std::endl;
		
		delete w_meta;
		delete w_i;
	}

	/* Check leaks */
	// system("leaks animals");
	return ( 0 );
}
