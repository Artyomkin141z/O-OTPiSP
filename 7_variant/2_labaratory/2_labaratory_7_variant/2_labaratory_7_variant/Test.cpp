#include "Test.h"

Test::Test()
	:Trial()
{
	this->countQuestions = 0;
	this->questions.push_back("There should be question");
}

Test::Test(const Test& test)
	: Trial(test.title, test.goal)
{
	this->countQuestions = test.countQuestions;
	this->questions = test.questions;
}

Test::Test(string title, string goal, int countQuestions, vector<string> questions)
	:Trial(title, goal)
{
	this->countQuestions = countQuestions;
	for (int i = 0; i < this->countQuestions; i++) {
		this->questions.push_back(questions[i]);
	}
}

Test::~Test()
{

}

void Test::show()
{
	cout << "----------------Test------------------" << endl;
	cout << "Title: " << this->title << endl;
	cout << "Goal: " << this->goal<< endl;
	cout << "Count of questions: " << this->countQuestions << endl;
	
	for (int i = 0; i < this->countQuestions; i++) {
		cout << "Question number " << i << ": " << this->questions[i] << endl;
	}
	
	cout << "-----------------------------------------" << endl;
}
