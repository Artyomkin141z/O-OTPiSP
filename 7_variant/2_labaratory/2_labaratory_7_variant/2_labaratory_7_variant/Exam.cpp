#include "Exam.h"

Exam::Exam()
	: Test()
{
}

Exam::Exam(const Exam& exam)
	: Test(exam.title, exam.goal, exam.countQuestions, exam.questions)
{
	this->data = exam.data;
}

Exam::Exam(string title, string goal, int countQuestions, vector<string> questions, int data)
	: Test(title, goal, countQuestions, questions)
{
	this->data = data;
}

Exam::~Exam()
{
}

void Exam::show()
{
	cout << "----------------Test------------------" << endl;
	cout << "Title: " << this->title << endl;
	cout << "Goal: " << this->goal << endl;
	cout << "Count of questions: " << this->countQuestions << endl;
	cout << "Data: " << this->data << endl;

	for (int i = 0; i < this->countQuestions; i++) {
		cout << "Question number " << i << ": " << this->questions[i] << endl;
	}

	cout << "-----------------------------------------" << endl;
}
