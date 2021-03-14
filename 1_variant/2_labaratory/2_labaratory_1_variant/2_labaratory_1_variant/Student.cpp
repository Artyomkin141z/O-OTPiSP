#include "Student.h"

Student::Student()
	: Person()
{
	this->averageScore = 0;
	this->yearOfStudy = 1;
}

Student::Student(const Student& student)
	: Person(student.firstName, student.lastName, student.age)
{
	this->averageScore = student.averageScore;
	this->yearOfStudy = student.yearOfStudy;
}

Student::Student(string firstName, string lastName, int age, int averageScore, int yearOfStudy)
	: Person(firstName, lastName, age) 
{
	this->averageScore = averageScore;
	this->yearOfStudy = yearOfStudy;
}

Student::~Student() {

}

void Student::show()
{
	cout << "----------------Student------------------" << endl;
	cout << "First name: " << this->firstName << endl;
	cout << "Last name: " << this->lastName << endl;
	cout << "Age: " << this->age << endl;
	cout << "Average score: " << this->averageScore << endl;
	cout << "Year of study: " << this->yearOfStudy << endl;
	cout << "-----------------------------------------" << endl;
}