#include "Person.h"

Person* Person::begin = NULL;

void Person::print()
{
	Person* temporaryPersonp = Person::begin;

	while (temporaryPersonp != NULL) {
		temporaryPersonp->show();
		temporaryPersonp = temporaryPersonp->prev;
	}
}

Person::Person()
{
	this->firstName = "Undefined";
	this->lastName = "Undefined";
	this->age = 18;
	this->add();
}

Person::Person(const Person& person)
{
	this->firstName = person.firstName;
	this->lastName = person.lastName;
	this->age = person.age;
	this->add();
}

Person::Person(string firstName, string lastName, int age) {
	this->firstName = firstName;
	this->lastName = lastName;
	this->age = age;
	this->add();
}

Person::~Person() {

}

void Person::add()
{
	if (Person::begin == NULL) {
		Person::begin = this;
	}
	else {
		this->prev = Person::begin;
		Person::begin = this;
	}
}
