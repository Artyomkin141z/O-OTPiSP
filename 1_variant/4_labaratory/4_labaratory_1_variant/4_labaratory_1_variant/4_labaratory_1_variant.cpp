#include <string.h>
#include <iostream>

using namespace std;

class Array {
private:
	int size;
	int* mass;
	int index;
public:
	Array(int n = 0); //конструктор по умолчанию

	~Array() {
		if (mass) {
			delete[] mass;
		}
	} //деструктор

	Array(const Array& tam); //конструктор копирования
	void operator=(const Array& tam); //перегрузка операции присваивания
	Array operator*(Array& tam); // перегрузка умножения массивов

	int& operator[](unsigned int i) {
		index++;
		return mass[i];
	}
	const int& operator[](unsigned int i)const { return mass[i]; }

	void add();
	void show_list(); //вывод на экран
	int getSize() {
		return this->size;
	}
};

Array::Array(int n) {
	size = n;
	index = 0;
	if (n)
	{
		mass = new int[size];
	}
	else
	{
		mass = 0;
	}
}

Array::Array(const Array& tam) {
	size = tam.size;
	index = 0;
	if (tam.mass)
	{
		mass = new int[size];
		for (int i = 0; i < size; i++)
		{
			mass[i] = tam.mass[i];
		}
	}
	else
	{
		mass = 0;
	}
}

void Array::operator=(const Array& tam)
{
	if (&tam == this) return;//сравнение адресов
	if (mass) delete[] mass;
	size = tam.size;
	index = 0;
	if (tam.mass) {
		mass = new int[size];
		for (int i = 0; i < size; i++) {
			mass[i] = tam.mass[i];
			++index;
		}
	}
	else
		mass = 0;
	return;
}

void Array::show_list() {
	for (int i = 0; i < index; i++) {
		cout << mass[i] << " ";
	}
	cout << endl;
}

Array Array::operator*(Array& tam)
{
	Array tempArray(min(this->size, tam.getSize()));

	for (int i = 0; i < tempArray.size; i++) {
		tempArray[i] = this->mass[i] * tam[i];
		cout << this->mass[i] * tam[i] << endl;
	}

	tempArray.show_list();

	return tempArray;
}

void Array::add() {
	int tamp;
	for (int i = 0; i < size; i++) {
		cout << " Enter value : ";
		cin >> tamp;
		mass[i] = tamp;
		++index;
	}
}

int main(int argc, char* argv[]) {
	Array tam2(3);
	cout << "int pressed" << endl;
	tam2.add();

	cout << "INT: " << endl;
	tam2.show_list();

	Array tam4(4);
	cout << "int pressed" << endl;
	tam4.add();

	Array tam5;
	tam5 = tam2 * tam4;
	cout << "tam2 * tam4:" << endl;
	tam5.show_list();

	system("pause");

	return 0;
}