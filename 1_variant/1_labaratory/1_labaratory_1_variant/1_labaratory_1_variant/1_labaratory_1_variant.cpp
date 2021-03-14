#include <iostream>
#include "Student.h"

int main()
{
	// create
	Student* student = new Student();

	// initialize
	char name[25] = "Student name";
	int studyYear = 2;
	bool gender = 1;
	student->set(name, studyYear, gender);

	// use function pointer
	void (Student:: * ptStudent) () = &Student::show;
	(*student.*ptStudent)();

	// delete
	delete student;
}
