/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:49:19 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/09 15:06:21 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main ( void )
{
	std::string		str = "HI THIS IS BRAIN"; 	// String
	std::string*	strPtr = &str;				// Pointer on String
	std::string&	strRef = str;				// Reference on String

	std::cout << "-----------------------------------------------------------" << std::endl;

	std::cout << "\033[0;33mThe memory address of the string	: \033[0;39m" << &str << std::endl;
	std::cout << "\033[0;33mThe memory address held by stringPTR 	: \033[0;39m" << strPtr << std::endl;
	std::cout << "\033[0;33mThe memory address held by stringREF 	: \033[0;39m" << &strRef << std::endl;

	std::cout << "-----------------------------------------------------------" << std::endl;

	std::cout << "\033[0;33mThe value of the string			: \033[0;39m" << str << std::endl;
	std::cout << "\033[0;33mThe value pointed to by stringPTR	: \033[0;39m" << *strPtr << std::endl;
	std::cout << "\033[0;33mThe value pointed to by stringREF	: \033[0;39m" << strRef << std::endl;

	std::cout << "-----------------------------------------------------------" << std::endl;

	return (0);
}
