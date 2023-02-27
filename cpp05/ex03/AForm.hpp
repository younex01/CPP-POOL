/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:27:02 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/26 00:26:30 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
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
        AForm();
        AForm(const std::string name, int const signGrade, int const executeGrade);
        AForm(AForm const & src);
        virtual ~AForm();
        AForm & operator=(AForm const & obj);
        std::string    getName() const;
        bool   getSigned() const;
        int    getSignGrade() const;
        int    getexecuteGrade() const;
        void   beSigned(Bureaucrat &Bur);
        virtual void   execute(Bureaucrat const & executor) const = 0;
};

std::ostream & operator<<(std::ostream & o, AForm const & obj);

#endif