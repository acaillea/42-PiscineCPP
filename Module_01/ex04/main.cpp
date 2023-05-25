/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:50:50 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/12 16:48:58 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

/* -------------------------------------------------------------------------- */

std::string		convertStr( char *str )
{
	std::string ret;
	for ( unsigned int i = 0 ; str[i] ; i++ )
		ret += str[i];
	return (ret);
}

/* -------------------------------------------------------------------------- */

int		main ( int ac , char **av )
{
	if ( ac != 4 )
	{
		std::cout << "Wrong number of argument. Three expected : " << std::endl;
		std::cout << "<filename> <string1> <string2>" << std::endl;
		return (0);
	}

	std::string 	argv[3] = { convertStr( av[1] ) , convertStr( av[2] ) , convertStr( av[3] ) };
	std::string		infile = argv[0];
	std::string 	outfile = infile + convertStr( (char *)".replace" );
	std::string		line;
	std::ifstream	influx(infile);
	std::ofstream	offlux(outfile);
	std::size_t		f;
	unsigned int 	i;
	
	if ( influx && offlux )
	{
		while ( getline( influx , line ) )
		{
 			f = line.find( argv[1] );
			i = 0;
			while ( f != std::string::npos )
			{
				line.insert( f, argv[2] );
				line.erase( f + argv[2].length() , argv[1].length() );
				i += f + argv[2].length() - 1;
				f = line.find( argv[1][i] );
			}
			offlux << line << std::endl;
		}
	}
	
	else
	{
		std::cout << "Error stream opening" << std::endl;
		return (0);
	}
	
	return (0);
}
