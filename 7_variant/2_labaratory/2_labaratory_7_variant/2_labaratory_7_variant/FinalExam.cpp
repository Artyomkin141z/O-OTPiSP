#include "FinalExam.h"

FinalExam::FinalExam()
	: Exam()
{
}

FinalExam::FinalExam(const FinalExam& finalExam)
	: Exam(finalExam.title, finalExam.goal, finalExam.countQuestions, finalExam.questions, finalExam.data)
{
}

FinalExam::FinalExam(string title, string goal, int countQuestions, vector<string> questions, int data, bool isPass)
	: Exam(title, goal, countQuestions, questions, data)
{
}

FinalExam::~FinalExam()
{
}

void FinalExam::show()
{
	cout << "----------------Test------------------" << endl;
	cout << "Title: " << this->title << endl;
	cout << "Goal: " << this->goal << endl;
	cout << "Count of questions: " << this->countQuestions << endl;
	cout << "Data: " << this->data << endl;
	
	cout << "Is path: ";
	if (this->isPass) {
		cout << "yes";
	}
	else {
		cout << "no";
	}
	cout << endl;

	for (int i = 0; i < this->countQuestions; i++) {
		cout << "Question number " << i << ": " << this->questions[i] << endl;
	}

	cout << "-----------------------------------------" << endl;
}
