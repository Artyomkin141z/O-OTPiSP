#include "HeadOfDepartment.h"

HeadOfDepartment::HeadOfDepartment()
	: Teacher()
{
	this->numberOfSubordinates = 0;
}

HeadOfDepartment::HeadOfDepartment(const HeadOfDepartment& headOfDeapartment)
	: Teacher(headOfDeapartment)
{
	this->numberOfSubordinates = headOfDeapartment.numberOfSubordinates;
}

HeadOfDepartment::HeadOfDepartment(string firstName, string lastName, int age, int experinece, bool hasVacation, int numberOfSubordinates)
	: Teacher(firstName, lastName, age, experience, hasVacation)
{
	this->numberOfSubordinates = numberOfSubordinates;
}

HeadOfDepartment::~HeadOfDepartment() {
	
}

void HeadOfDepartment::show()
{
	cout << "------------Head-of-department-----------" << endl;
	cout << "First name: " << this->firstName << endl;
	cout << "Last name: " << this->lastName << endl;
	cout << "Age: " << this->age << endl;
	cout << "Experience: " << this->experience << endl;
	cout << "Has vacation: " << this->hasVacation << endl;
	cout << "Number of subordinates" << this->numberOfSubordinates << endl;
	cout << "-----------------------------------------" << endl;
}
