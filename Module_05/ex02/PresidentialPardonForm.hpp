/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:40:56 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/20 17:35:50 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class	PresidentialPardonForm : public Form
{
	private:

		std::string	_target;

	public:

		/* Constructor */
		PresidentialPardonForm( void );
		PresidentialPardonForm( const PresidentialPardonForm& copy );
		PresidentialPardonForm( std::string target );

		/* Destructor */
		~PresidentialPardonForm( void );

		/* Operator Overload */
		PresidentialPardonForm&	operator=( const PresidentialPardonForm& copy );

		/* Accessors */
		std::string		getTarget( void ) const;

		/* Others members */
		virtual void	execute( Bureaucrat const & executor ) const;
};

#endif /* PRESIDENTIALPARDONFORM_HPP */
