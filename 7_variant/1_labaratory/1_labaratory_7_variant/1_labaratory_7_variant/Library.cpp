#include "Library.h"

Library::Library() {
	//������������ �� ���������
	char NAME[LNAME] = "Default name";
	char ANAME[ANAME] = "Default name";
	strcpy_s(name, NAME);
	strcpy_s(aname,ANAME);
	coust = 0;
	//�����
	show();
	cout << "Object above is created" << endl;
}

Library::Library(char* NAME, char* AUTHOR_NAME, float COUST) {
	//������������ ���������� ��������
	strcpy_s(name, NAME);
	strcpy_s(aname, AUTHOR_NAME);
	coust = COUST;
	//�����
	show();
	cout << "Object above is created" << endl;
}

Library::Library(const Library& LIBRARY) {
	//�����������
	strcpy_s(name, LIBRARY.name);
	strcpy_s(aname, LIBRARY.aname);
	coust = LIBRARY.coust;
	//�����
	show();
	cout << "Object above is created" << endl;
}

Library::~Library() {
	//��������
	show();
	//�����
	cout << "Object above is deleted" << endl;
}

char* Library::getName() {
	return name;
}
char* Library::getAname() {
	return aname;
}
float Library::getCoust() {
	return coust;
}
void Library::setName(char* NAME) {
	strcpy_s(name, NAME);
}
void Library::setAname(char* AUTHOR_NAME) {
	strcpy_s(aname, AUTHOR_NAME);
}
void Library::setCoust(float COUST) {
	coust = COUST;
}
void Library::set(char* NAME, char* AUTHOR_NAME, float COUST) {
	strcpy_s(name, NAME);
	strcpy_s(aname, AUTHOR_NAME);
	coust = COUST;
}
void Library::show() {
	cout << "Name: " << name << endl;
	cout << "Author name: " << aname << endl;
	cout << "coust: " << coust << endl;
}
