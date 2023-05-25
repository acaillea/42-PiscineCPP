/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:49:33 by acaillea          #+#    #+#             */
/*   Updated: 2022/09/20 11:10:20 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "main.hpp"

# define NB_ANI 5
# define NUMBER 1

int		main ()
{
	/* Tests given in the statement */
	std::cout << "------------------------ Statement ------------------------" << std::endl;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << "---------------------------------" << std::endl;

		delete j;
		delete i;
	}

	/* Personnal tests */
	std::cout << std::endl << "=========================== Perso ==========================" << std::endl;
	{
		/* List initialisation */
		Animal* animal_lst[ NB_ANI ];
 
		for ( int m = 0 ; m < NB_ANI ; m++ )
		{
			if ( m % 2 == 0 )
				animal_lst[ m ] = new Cat();
			else
				animal_lst[ m ] = new Dog();
			std::cout << "--> Number " << m + 1 << " is a " << animal_lst[ m ]->getType() << ". ";
			animal_lst[ m ]->makeSound();
			std::cout << std::endl;
		}

		/* Print list */
		std::cout << std::endl << "---------------------------------" << std::endl;
		for ( int p = 0 ; p < NB_ANI ; p++ )
		{
			std::cout << animal_lst[ p ]->getType() << std::endl;
		}

		/* List destruction */
		std::cout << "---------------------------------" << std::endl;
		for ( int k = 0 ; k < NB_ANI ; k++ )
		{
			delete ( animal_lst[ k ] );
		}

		/* Deep Copy */
		std::cout << std::endl << "---------- Deep Copy ------------" << std::endl;
		Cat*		cat_init = new Cat();
		Cat*		cat_copy = cat_init;
		cat_init->makeSound();
		cat_copy->makeSound();
		std::cout << "init : " << cat_init->getBrain()->getIdea( 1 ) << std::endl;
		std::cout << "copy : " << cat_copy->getBrain()->getIdea( 1 ) << std::endl;

		delete cat_init;

		/* Not Virtual */
		std::cout << std::endl << "---------- Wrong Ani ------------" << std::endl;
		WrongAnimal*	wrong_ani = new WrongAnimal();
		WrongAnimal*	wrong_cat = new WrongCat();
		
		wrong_ani->makeSound();
		wrong_cat->makeSound();

		delete wrong_ani;
		delete wrong_cat;

		std::cout << "---------------------------------" << std::endl;
	}
	/* Check leaks */
	// system("leaks brain");
	return ( 0 );
}
