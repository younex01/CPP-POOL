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
        virtual AForm & operator=(AForm const & obj);
        std::string    getName() const;
        virtual bool   getSigned() const;
        virtual int    getSignGrade() const;
        virtual int    getexecuteGrade() const;
        virtual void   beSigned(Bureaucrat &Bur);
};

std::ostream & operator<<(std::ostream & o, AForm const & obj);

#endif