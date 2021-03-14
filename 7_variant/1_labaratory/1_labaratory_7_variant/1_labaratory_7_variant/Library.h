#pragma once
#ifndef Library_H_


#include <iostream>

using namespace std;

const int LNAME = 25;
const int ANAME = 25;

class Library
{
private:
	// ���� ������
	char name[LNAME];
	char aname[ANAME];
	float coust;

public:
	// ������������ ������
	Library();
	Library(char*, char*, float);
	Library(const Library&);
	//������������ ������
	~Library();
	//���������� ������
	char* getName();
	char* getAname();
	float getCoust();
	void setName(char*);
	void setAname(char*);
	void setCoust(float);
	void set(char*, char*, float);
	//����� ��� ��������� ������
	void show();
};

#endif // !Libarary_H_
