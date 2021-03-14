#include "Teacher.h"

Teacher::Teacher()
	: Person()
{
	this->experience = 0;
	this->hasVacation = true;
}

Teacher::Teacher(const Teacher& teacher)
	: Person(teacher.firstName, teacher.lastName, teacher.age)
{
	this->experience = teacher.experience;
	this->hasVacation = teacher.hasVacation;
}

Teacher::Teacher(string firstName, string lastName, int age, int experience, bool hasVacation)
	: Person(firstName, lastName, age)
{
	this->experience = experience;
	this->hasVacation = hasVacation;
}

Teacher::~Teacher()
{
}

void Teacher::show()
{
	cout << "--------------Teacher--------------------" << endl;
	cout << "First name: " << this->firstName << endl;
	cout << "Last name: " << this->lastName << endl;
	cout << "Age: " << this->age << endl;
	cout << "Experience: " << this->experience << endl;
	cout << "Has vacation: " << this->hasVacation << endl;
	cout << "-----------------------------------------" << endl;
}
