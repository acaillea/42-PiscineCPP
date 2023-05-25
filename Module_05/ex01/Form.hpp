/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: I-lan <I-lan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:18:59 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/08 12:33:10 by I-lan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	private:

		const std::string	_name;
		bool				_signed; // 0 = not signed
		const int			_signedgrade;
		const int			_execgrade;

	public:

		/* Constructor */
		Form( void );
		Form( const Form& copy );
		Form( std::string name , int signedgrade , int execgrade );

		/* Destructor */
		~Form( void );

		/* Operator Overload */
		Form&	operator=( const Form& copy );

		/* Accessors */
		const std::string		getName() const;
		bool					getSigned() const;
		void					setSigned( const bool sign );
		int						getSignedGrade() const;
		int						getExecGrade() const;

		/* Others members */
		void		beSigned( const Bureaucrat& bubu );

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
		class		AlreadySignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream&	operator<<( std::ostream& o , Form const & rhs);

#endif /* FORM_HPP */

