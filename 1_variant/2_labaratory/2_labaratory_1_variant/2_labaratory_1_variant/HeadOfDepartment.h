#pragma once
#include "Teacher.h"
class HeadOfDepartment :
    public Teacher
{
protected:
    int numberOfSubordinates;
public:
    HeadOfDepartment();
    HeadOfDepartment(const HeadOfDepartment& headOfDeapartment);
    HeadOfDepartment(string firstName, string lastName, int age, int experinece, bool hasVacation, int numberOfSubordinates);
    ~HeadOfDepartment();
    virtual void show();
};

