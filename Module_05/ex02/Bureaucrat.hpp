#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;
	static const int _max_grade = 1;
	static const int _min_grade = 150;
	Bureaucrat();

public:
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &obj);
	Bureaucrat &operator=(const Bureaucrat &obj);
	~Bureaucrat();

	class GradeTooHighException: public std::exception
	{
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		virtual const char* what() const throw();
	};

	const std::string	getName() const;
	int					getGrade() const;
	void				up_Grade(int grade_up);
	void				down_Grade(int grade_down);
	void				signForm(Form &obj);
	void				executeForm(Form const &obj);

};
	std::ostream & operator<<(std::ostream &out, const Bureaucrat &obj);


#endif // !BUREAUCRAT_HPP