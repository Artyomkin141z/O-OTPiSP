#pragma once
#ifndef Library_H_


#include <iostream>

using namespace std;

const int LNAME = 25;
const int ANAME = 25;

class Library
{
private:
	// поля класса
	char name[LNAME];
	char aname[ANAME];
	float coust;

public:
	// конструкторы класса
	Library();
	Library(char*, char*, float);
	Library(const Library&);
	//конструкторы класса
	~Library();
	//деструктор класса
	char* getName();
	char* getAname();
	float getCoust();
	void setName(char*);
	void setAname(char*);
	void setCoust(float);
	void set(char*, char*, float);
	//метод для выведения данных
	void show();
};

#endif // !Libarary_H_
