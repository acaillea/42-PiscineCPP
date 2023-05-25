/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:22:28 by acaillea          #+#    #+#             */
/*   Updated: 2022/08/05 21:28:37 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook 
{
	private:

		Contact	contact_lst[8];

	public:

		PhoneBook( void );
		~PhoneBook( void );

		Contact		getContact( int position ) const;
		void		setFirst_Name( std::string input , int position );
		void		setLast_Name( std::string input , int position );
		void		setNickname( std::string input , int position );
		void		setPhone_Number( std::string input , int position );
		void		setDarkest_Secret( std::string input , int position );
};

#endif /* PHONEBOOK_H */
