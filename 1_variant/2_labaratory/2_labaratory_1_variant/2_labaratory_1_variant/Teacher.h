#pragma once
#include "Person.h"
class Teacher :
    public Person
{
protected:
    int experience;
    bool hasVacation;
public:
    Teacher();
    Teacher(const Teacher& teacher);
    Teacher(string firstName, string lastName, int age, int experience, bool hasVacation);
    ~Teacher();
    virtual void show();
};
