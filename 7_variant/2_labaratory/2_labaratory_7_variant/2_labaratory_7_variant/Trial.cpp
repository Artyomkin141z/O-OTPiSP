#include "Trial.h"

Trial* Trial::begin = NULL;

void Trial::print()
{
	Trial* tempTrailPointer = Trial::begin;

	// просто перебираем список 
	// и вызываем виртуальный метод show
	while (tempTrailPointer != NULL) {
		tempTrailPointer->show();
		tempTrailPointer = tempTrailPointer->prev;
	}

}

Trial::Trial()
{
	this->title = "Untitled";
	this->goal = "Without goal";
	this->add();
}

Trial::Trial(const Trial& trial)
{
	this->title = trial.title;
	this->goal = trial.goal;
	this->add();
}

Trial::Trial(string title, string goal)
{
	this->title = title;
	this->goal = goal;
	this->add();
}

Trial::~Trial()
{

}

void Trial::add()
{
	if (Trial::begin == NULL) {
		Trial::begin = this;
	}
	else {
		this->prev = Trial::begin;
		Trial::begin = this;
	}
}
