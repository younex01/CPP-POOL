/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:23:00 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/25 19:23:01 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        bool              _signed;
        const int         _signGrade;
        const int         _executeGrade;
    public:
        class GradeTooHighException:public std::exception
        {
            public:
                const char* what() const throw() 
                {
                    return ("Grade Too High.");
                }
        };
        class GradeTooLowException:public std::exception
        {
             public:
                const char* what() const throw() 
                {
                    return ("Grade Too Low.");
                }
        };
        Form();
        Form(const std::string name, int const signGrade, int const executeGrade);
        Form(Form const & src);
        virtual ~Form();
        virtual Form & operator=(Form const & obj);
        std::string    getName() const;
        bool   getSigned() const;
        int    getSignGrade() const;
        int    getexecuteGrade() const;
        void   beSigned(Bureaucrat &Bur);
};

std::ostream & operator<<(std::ostream & o, Form const & obj);

#endif