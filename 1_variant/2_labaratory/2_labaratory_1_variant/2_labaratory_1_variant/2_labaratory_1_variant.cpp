#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "HeadOfDepartment.h"

int main()
{
	Student* first = new Student();
	Teacher* second = new Teacher();
	HeadOfDepartment* third = new HeadOfDepartment();

	Person::print();
}
