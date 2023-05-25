/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:22:42 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/05 21:29:21 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>

class Contact 
{	
	private:

		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string		_phone_number;
		std::string		_darkest_secret;

	public:
	
		Contact( void );
		~Contact( void );

		void		setFirst_Name( std::string input );
		void		setLast_Name( std::string input );
		void		setNickname( std::string input );
		void		setPhone_Number( std::string input );
		void		setDarkest_Secret( std::string input );
		std::string	getFirst_Name( void ) const;
		std::string	getLast_Name( void ) const;
		std::string	getNickname( void ) const;
		std::string	getPhone_Number( void )const;
		std::string	getDarkest_Secret( void )const;
};	

#endif /* CONTACT_H */
