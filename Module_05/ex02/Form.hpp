#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	std::string			_target;
	bool				_isSigned;
	const int			_gradeFormSign;
	const int			_gradeFormExec;
	Form();
public:
	Form(const std::string name, int gradeForm, int gradeExec);
	Form(std::string target, const std::string name, int gradeFormSign, int gradeFormExec);
	Form(const Form &obj);
	Form& operator=(const Form &obj);
	virtual ~Form() = 0;

	const std::string	getName() const;
	bool				getIsSign() const;
	const std::string	getTarget() const;
	int					getGradeFormSign() const;
	int					getGradeFormExec() const;
	void				beSigned(const Bureaucrat &obj);
	virtual void execute(Bureaucrat const &obj) const;

	class GradeTooHighException: public std::exception
	{
		const char* what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		const char* what() const throw();
	};
	class FormAlreadySignException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

};

std::ostream &operator<<(std::ostream &out, Form const &obj);

#endif // !FORM_HPP
