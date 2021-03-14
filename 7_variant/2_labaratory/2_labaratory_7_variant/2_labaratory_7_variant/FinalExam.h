#pragma once
#include "Exam.h"
class FinalExam :
    public Exam
{
protected:
    bool isPass;
public:
    FinalExam();
    FinalExam(const FinalExam& finalExam);
    FinalExam(string title, string goal, int countQuestions, vector<string> questions, int data, bool isPass);
    ~FinalExam();
    virtual void show();
};

