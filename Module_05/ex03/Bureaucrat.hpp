/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:12:27 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/20 17:46:34 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class	Form;

class	Bureaucrat
{
	private:

		int					_grade;
		const std::string  	_name;

	public:

		/* Constructor */
		Bureaucrat( void );
		Bureaucrat( const Bureaucrat& copy );
		Bureaucrat( std::string name , int grade );

		/* Destructor */
		~Bureaucrat( void );

		/* Operator Overload */
		Bureaucrat&	operator=( const Bureaucrat& copy );

		/* Accessors */
		int			getGrade( void ) const;
		std::string	getName( void ) const;

		/* Others members */
		void		incrementGrade( void );
		void		decrementGrade( void );
		void		signForm( Form& form ) const;
		void		executeForm( Form const & form ) const;
		
		/* Exceptions */
		class		GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class		GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

};

std::ostream&	operator<<( std::ostream& o , Bureaucrat const & rhs);

#endif /* BUREAUCRAT_HPP */
