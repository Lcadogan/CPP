#include "Form.hpp"

Form::Form(const std::string name, int gradeFormSign, int gradeFormExec):
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

Form::Form(std::string target, const std::string name, int gradeFormSign, int gradeFormExec):
	_name(name),
	_target(target),
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
	_target(obj._target),
	_isSigned(obj._isSigned),
	_gradeFormSign(obj._gradeFormSign),
	_gradeFormExec(obj._gradeFormExec)
{
	*this = obj;
}
Form& Form::operator=(const Form &obj)
{
	if(this == &obj)
		return *this;
	this->_isSigned = obj.getIsSign();
	return (*this);
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

const char* Form::FormAlreadySignException::what() const throw()
{
	return ("Form already sign!");
}

const std::string  Form::getName() const
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

const std::string  Form::getTarget() const
{
	return(this->_target);
}

void Form::execute(const Bureaucrat &executor) const
{
	(void)executor;
}

std::ostream &operator<<(std::ostream &out, Form const &obj)
{
	std::string isSign;
	if (obj.getIsSign())
		isSign = "<Form SIGNED>";
	else
		isSign = "<Form NOT SIGNED>";
	
	out << "Form " << "<" << obj.getName()
		<< ">, grade Signed <" << obj.getGradeFormSign()
		<< ">, grade Exectue <" << obj.getGradeFormExec() << ">, "
		<< isSign;
	return (out);
}
