#pragma once
#include "Test.h"
class Exam :
    public Test
{
protected:
    int data;
public:
    Exam();
    Exam(const Exam& exam);
    Exam(string title, string goal, int countQuestions, vector<string> questions, int data);
    ~Exam();
    virtual void show();
};

