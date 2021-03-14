#pragma once

#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
	static Person* begin;
protected:
	string firstName;
	string lastName;
	int age;

	Person* prev = NULL;
public:
	static void print();
	Person();
	Person(const Person& person);
	Person(string firstName, string lastName, int age);
	virtual ~Person();
	virtual void show() = 0;
	void add();
};
