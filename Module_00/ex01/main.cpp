/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:30:06 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/16 18:08:39 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>
#include "PhoneBook.hpp"
#include "Contact.hpp"

/* --------------------------------------------------- Input ----------------- */

/*--	Return True if input is filled with white-space character */
bool	ft_isspace( std::string str )
{
	unsigned int	i = 0;

	while ( str[i] && isspace(str[i]) )
		i++;
	if ( i == str.length() )
		return (false);
	return (true);
}

/*--	Return False if input is not completely filled with digitis */
bool	ft_isdigit( std::string str )
{
	for ( unsigned int i = 0 ; i < str.length() ; i++ )
	{
		if ( !isdigit(str[i]) && str[i] != '-')
			return (false);
	}
	return (true);
}

/*--	Loop until the user inputs a valid data information for ADD */
std::string	trueString( std::string data )
{
	std::string	input;

	std::cout << data;
	std::getline( std::cin , input );
	if ( std::cin.eof() )
		exit (0);
	while ( !input.length() || !ft_isspace(input) )
	{
		std::cout << data;
		std::getline( std::cin , input );
		if ( std::cin.eof() )
			exit (0);
	}
	return ( input );
}

/* ------------------------------------------------ Print -------------------- */

/*-	Print rigth-aligned data for SEARCH */
void	print_right( std::string input )
{
	if ( input.length() > 10 )
		std::cout << input.substr(0,9) << ".";
	else
	{
		std::cout.width(10);
		std::cout << std::right << input;
	}
	std::cout << "|";
}

/*--	Print the Phone Book */
void	print_contacts( PhoneBook i_phonebook )
{
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|   Index  | FrstName | LastName | NickName |" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	for ( int i = 0 ; i < 8 ; i++ )
	{
		std::cout << "| ";
		std::cout << "       " << i + 1 << " |";
		print_right( i_phonebook.getContact( i ).getFirst_Name() );
		print_right( i_phonebook.getContact( i ).getLast_Name() );
		print_right( i_phonebook.getContact( i ).getNickname() );
		std::cout << std::endl;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

/*--	Print Contact Information */
void	print_contact( PhoneBook i_phonebook , int index )
{
	index--;
	std::cout << "First name	: " << i_phonebook.getContact( index ).getFirst_Name() << std::endl;
	std::cout << "Last name	: " << i_phonebook.getContact( index ).getLast_Name() << std::endl;
	std::cout << "Nickname	: " << i_phonebook.getContact( index ).getNickname() << std::endl;
	std::cout << "Phone Number	: " << i_phonebook.getContact( index ).getPhone_Number() << std::endl;
	std::cout << "Darkest Secret	: " << i_phonebook.getContact( index ).getDarkest_Secret() << std::endl;
}

/* -------------------------------------------------- MAIN ------------------- */

int		main ( void )	
{
	int				i = -1 ;
	int				position = 0;
	PhoneBook		i_phonebook;
	std::string		input;
	
	std::cout << "\033[1;35mWelcome In Your 80s Phonebook !\033[0;39m\n" << std::endl;
	while (++i > -1)
	{
		if (i == 0)
			std::cout << "\033[0;33mEnter a Command\033[0;39m" << std::endl;/* First input */
		else
			std::cout << "\033[0;33mEnter a New Command\033[0;39m" << std::endl;/* Other input */
		std::getline( std::cin , input );
		if (std::cin.eof()) /* Ctrl handler */
			return (0);
		if ( !input.compare("ADD") )/* ADD */
		{
			i_phonebook.setFirst_Name( trueString( "First Name     > " ) , position );
			i_phonebook.setLast_Name( trueString( "Last Name      > " ) , position );
			i_phonebook.setNickname( trueString( "Nickname       > " ) , position );
			i_phonebook.setPhone_Number( trueString( "Phone Number   > " ) , position );
			i_phonebook.setDarkest_Secret( trueString( "Darkest Secret > " ) , position );
			std::cout << "\033[1;32m--> " << i_phonebook.getContact( position ).getFirst_Name() << " " \
			<< i_phonebook.getContact( position ).getLast_Name() << " added. \033[0;39m" << std::endl;
			position++;
			if ( position == 8 )
				position = 0;
		}
		else if ( !input.compare("SEARCH") )/* SEARCH */
		{
			print_contacts( i_phonebook );
			std::cout << "Enter Wanted Index Contact :" << std::endl;
			std::getline( std::cin , input );
			if ( std::cin.eof() )
				return (0);
			while ( !input.length() || !ft_isdigit( input ) || ( stoi(input) < 1 || stoi(input) > 8 ) )
			{
				std::cout << "\033[0;31mNon Numerical Or Out of range Input. Try again.\033[0;39m" << std::endl;
				std::getline( std::cin , input );
				if ( std::cin.eof() )
					return (0);
			}
			print_contact( i_phonebook , stoi(input) );
		}
		else if ( !input.compare("EXIT") )/* EXIT */
		{
			std::cout << "Well, Goodbye !" << std::endl;
			return (0);
		}
		else if ( !ft_isspace(input) || !input.length() )/* EMPTY */
		{
			std::cout << "\033[0;31mEmpty command. Try again.\033[0;39m" << std::endl;
		}
		else/* INVALID */
		{
			std::cout << "\033[0;31m\"" << input << "\"" << " is no command. \033[0;39m" \
			<< std::endl << "Try : " << std::endl \
			<< "- ADD : save a new contact." << std::endl \
			<< "- SEARCH : display a specific contact" << std::endl \
			<< "- EXIT : quit." <<std::endl;
		}
	}
	return (0);
}
