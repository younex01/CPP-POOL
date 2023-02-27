/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 01:13:32 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/25 23:26:59 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private:
        std::string const   _name;
        int                 _grade;
    public:
        class GradeTooHighException:public std::exception
        {
            public:
                virtual const char* what() const throw() 
                {
                    return ("Grade Too High.");
                }
        };
        class GradeTooLowException:public std::exception
        {
            public:
                virtual const char* what() const throw() 
                {
                    return ("Grade Too Low.");
                }
        };
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const & src);
        virtual ~Bureaucrat();
        Bureaucrat & operator=(Bureaucrat const & obj);
        std::string getName() const;
        int         getGrade() const;
        void        incGrade();
        void        decGrade();
        void        signForm(AForm &form) const;
        void        executeForm(AForm const & form);
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & obj);

#endif