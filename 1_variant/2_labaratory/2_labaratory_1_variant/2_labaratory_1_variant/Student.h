#pragma once
#include "Person.h"
class Student :
    virtual public Person
{
protected:
    int averageScore;
    int yearOfStudy;
public:
    Student();
    Student(const Student& student);
    Student(string firstName, string lastName, int age, int averageScore, int yearOfStudy);
    ~Student();
    virtual void show();
};

