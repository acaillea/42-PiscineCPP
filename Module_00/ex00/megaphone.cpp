/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:30:55 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/05 22:46:48 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cstring>
# include <cctype>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1 ; i < ac ; i++)
		{
			for (int j = 0 ; j < (int)strlen(av[i]) ; j++)
			{
				if (av[i][j] >= 97 && av[i][j] <= 122)
					av[i][j] = toupper(av[i][j]);
				std::cout << av[i][j];
			}
			if (i + 1 != ac)
				std::cout << " " ;
		}
		std::cout << std::endl;
	}
	return (0);
}
