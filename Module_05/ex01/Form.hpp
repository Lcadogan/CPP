#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	bool _isSigned;
	const int _gradeFormSign;
	const int _gradeFormExec;
	Form();
public:
	Form(const std::string &name, int gradeForm, int gradeExec);
	Form(const Form &obj);
	Form& operator=(const Form &obj);
	~Form();

	const std::string	&getName() const;
	bool				getIsSign() const;
	int					getGradeFormSign() const;
	int					getGradeFormExec() const;
	void				beSigned(Bureaucrat const &obj);

	class GradeTooHighException: public std::exception
	{
		const char* what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		const char* what() const throw();
	};

};

std::ostream &operator<<(std::ostream &out, Form const &obj);

#endif // !FORM_HPP
