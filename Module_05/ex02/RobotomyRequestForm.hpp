/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:41:04 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/20 17:35:56 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class	RobotomyRequestForm : public Form
{
	private:

		std::string	_target;

	public:

		/* Constructor */
		RobotomyRequestForm( void );
		RobotomyRequestForm( const RobotomyRequestForm& copy );
		RobotomyRequestForm( std::string target );

		/* Destructor */
		~RobotomyRequestForm( void );

		/* Operator Overload */
		RobotomyRequestForm&	operator=( const RobotomyRequestForm& copy );

		/* Accessors */
		std::string		getTarget( void ) const;

		/* Others members */
		virtual void	execute( Bureaucrat const & executor ) const;

		/* Exceptions */
		class	FailureFiftyFiftyException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif /* ROBOTOMYREQUESTFORM_HPP */
