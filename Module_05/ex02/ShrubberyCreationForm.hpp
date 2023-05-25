/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:41:08 by I-lan             #+#    #+#             */
/*   Updated: 2022/09/20 17:36:00 by acaillea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
	private:

		std::string	_target;

	public:

		/* Constructor */
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( const ShrubberyCreationForm& copy );
		ShrubberyCreationForm( std::string target );

		/* Destructor */
		~ShrubberyCreationForm( void );

		/* Operator Overload */
		ShrubberyCreationForm&	operator=( const ShrubberyCreationForm& copy );

		/* Accessors */
		std::string		getTarget( void ) const;

		/* Others members */
		virtual void	execute( Bureaucrat const & executor ) const;
};

#endif /* SHRUBBERYCREATIONFORM_HPP */
