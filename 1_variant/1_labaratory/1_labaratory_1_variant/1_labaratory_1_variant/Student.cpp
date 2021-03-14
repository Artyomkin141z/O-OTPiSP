#include "Student.h"

Student::Student() {
	char NAME[LNAME] = "Default name";
	strcpy_s(name, NAME);
	studyYear = 0;
	gender = 0;

	show();
	cout << "Object above is created" << endl;
}

Student::Student(char* NAME, int STUDY_YEAR, bool GENDER) {
	strcpy_s(name, NAME);
	studyYear = STUDY_YEAR;
	gender = GENDER;

	show();
	cout << "Object above is created" << endl;
}

Student::Student(const Student& STUDENT) {
	strcpy_s(name, STUDENT.name);
	studyYear = STUDENT.studyYear;
	gender = STUDENT.gender;

	show();
	cout << "Object above is created" << endl;
}

Student::~Student() {
	show();
	cout << "Object above is deleted" << endl;
}

char* Student::getName() {
	return name;
}
int Student::getStudyYear() {
	return studyYear;
}
bool Student::getGender() {
	return gender;
}
void Student::setName(char* NAME) {
	strcpy_s(name, NAME);
}
void Student::setStudyYear(int STUDY_YEAR) {
	studyYear = STUDY_YEAR;
}
void Student::setGender(bool GENDER) {
	gender = GENDER;
}
void Student::set(char* NAME, int STUDY_YEAR, bool GENDER) {
	strcpy_s(name, NAME);
	studyYear = STUDY_YEAR;
	gender = GENDER;
}
void Student::show() {
	cout << "Name: " << name << endl;
	cout << "Study year: " << studyYear << endl;
	cout << "Gender: " << gender << endl;
}
