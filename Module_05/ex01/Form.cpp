#include "Form.hpp"

Form::Form(const std::string &name, int gradeFormSign, int gradeFormExec):
	_name(name),
	_isSigned(false),
	_gradeFormSign(gradeFormSign),
	_gradeFormExec(gradeFormExec)
{
	if (_gradeFormSign < 1 || _gradeFormExec < 1)
		throw Form::GradeTooHighException();
	else if (_gradeFormSign > 150 || _gradeFormExec > 150)
		throw Form::GradeTooLowException();
}
Form::Form(const Form &obj):
	_name(obj._name),
	_isSigned(false),
	_gradeFormSign(obj._gradeFormSign),
	_gradeFormExec(obj._gradeFormExec){ 
}
Form& Form::operator=(const Form &obj)
{
	if(this != &obj)
	{
		this->_isSigned = obj.getIsSign();
	}
	return(*this);
}
Form::~Form() { }

const char* Form::GradeTooHighException::what() const throw()
{
	return("Grade to higher exception!");
}
const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade to lower exception!");
}
const std::string & Form::getName() const
{
	return (this->_name);
}

bool Form::getIsSign() const
{
	return(this->_isSigned);
}

int Form::getGradeFormSign() const
{
	return (this->_gradeFormSign);
}

int Form::getGradeFormExec() const
{
	return (this->_gradeFormExec);
}

void Form::beSigned(const Bureaucrat &obj)
{	
	if (obj.getGrade() <= this->getGradeFormSign())
	{
		if (this->_isSigned == true)
			return;
		else
			this->_isSigned = true;
	}	
	else
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, Form const &obj)
{
	out<<"Name form: "<<obj.getName()<<", Signed: "<<obj.getIsSign()<<", GradeSign: "<<obj.getGradeFormSign()<<", GradeExecute: "<<obj.getGradeFormExec()<<std::endl;
	return (out);
}

