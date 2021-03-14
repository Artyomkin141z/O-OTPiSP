#pragma once
#ifndef STUDENT_H_


#include <iostream>

using namespace std;

const int LNAME = 25;

class Student
{
private:
	char name[LNAME];
	int studyYear;
	bool gender;

public:
	Student();
	Student(char*, int, bool);
	Student(const Student&);
	~Student();
	char* getName();
	int getStudyYear();
	bool getGender();
	void setName(char*);
	void setStudyYear(int);
	void setGender(bool);
	void set(char*, int, bool);
	void show();
};

#endif // !STUDENT_H_
