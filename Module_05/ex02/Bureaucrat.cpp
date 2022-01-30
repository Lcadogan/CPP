#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name)
{
	if (grade < _max_grade)
		throw Bureaucrat::GradeTooHighException();
	if (grade > _min_grade)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	*this = obj;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &obj)
{
	if (this == &obj)
		return *this;
	this->_grade = obj._grade;
	return (*this);
}
Bureaucrat::~Bureaucrat() {};

const std::string  Bureaucrat::getName(void) const {return (this->_name);}

int Bureaucrat::getGrade() const {return (this->_grade);}

void Bureaucrat::up_Grade(int grade_up)
{
	if((_grade -= grade_up) < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::down_Grade(int grade_down)
{
	if((_grade+=grade_down) > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade higher then 1");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade lower then 150");
}

void Bureaucrat::signForm(Form &obj)
{
	if (obj.getIsSign()){
			std::cout << this->_name << " cannot sign " << obj.getName() << " because this form is already signed."
			<< std::endl;
		} else if (this->_grade > obj.getGradeFormSign()){
			std::cout << this->_name << " cannot sign " << obj.getName() << " because his grade is too low." <<
			std::endl;
		} else {
			std::cout << this->_name << " signs " << obj.getName() << "." <<std::endl<<std::endl;
		}
		obj.beSigned(*this);
	return;
}

void Bureaucrat::executeForm(Form const &obj)
{
	if (!obj.getIsSign())
	{
		std::cout << "<" << _name << "> cannot execute <" << obj.getName()
				  << "> because <Form is not signed>" << std::endl;
	}
	else
	{
		if (_grade <= obj.getGradeFormExec())
		{
			std::cout << "<" << _name << "> execute <" << obj.getName() << ">"
					  << std::endl;
			obj.execute(*this);
		}
		else
		{
			std::cout << "<" << _name << "> cannot execute <" << obj.getName()
					  << "> because <grade is LOW>" << std::endl;
		}
	}
}

std::ostream & operator<<(std::ostream &out, const Bureaucrat &obj)
{
	out<<"Bureaucrat name: "<<obj.getName()<<", his grade: "<<obj.getGrade()<<std::endl;
	return (out);
}
