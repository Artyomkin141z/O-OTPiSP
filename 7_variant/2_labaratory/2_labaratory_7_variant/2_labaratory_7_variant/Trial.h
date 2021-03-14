#pragma once

#include <string>

using namespace std;

class Trial
{
private:
	// указатель на начало списка
	static Trial * begin;
protected:
	// поля класса
	string title;
	string goal;
	// указатель на предыдущий элемент
	Trial* prev = NULL;
public:
	// статический метод для отображения списка
	// созданных объектов
	static void print();
	// все необходимые конструкторы
	// по умолчанию 
	Trial();
	// копирования
	Trial(const Trial & trial);
	// с параметрами
	Trial(string title, string goal);
	// виртуальный деструктор
	// нужен для корректного удаления объектов
	virtual ~Trial();
	// абстрактный метод
	// который обязует классов наследников
	// реализовать самостоятельно 
	virtual void show() = 0;
	// метод добавления в список
	void add();
};

