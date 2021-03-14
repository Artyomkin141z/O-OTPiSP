#include <iostream>
#include "Library.h"

int main()
{
	// создание 
	Library* library = new Library();

	// инициализация переменных
	char name[25] = "Book name";
	char aname[25] = "Author name ";
	float coust = 1.1;
	library->set(name, aname, coust);

	// использование функции указателя
	void (Library:: * ptLibrary) () = &Library::show;
	(*library.*ptLibrary)();

	// удаление
	delete library;
}
