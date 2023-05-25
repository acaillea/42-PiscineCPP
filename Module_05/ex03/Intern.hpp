/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: I-lan <I-lan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:51:23 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/08 18:37:01 by I-lan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Intern
{
	private:

	public:

		/* Constructor */
		Intern( void );
		Intern( const Intern& copy );

		/* Destructor */
		~Intern( void );

		/* Operator Overload */
		Intern&	operator=( const Intern& copy );

		/* Others members */
		Form*	makeForm( std::string form_name , std::string target ) const;

		/* Exceptions */
		class	NonExistentFormException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif /* INTERN_HPP */
