#include <iostream>
#include "Test.h"
#include "Exam.h"
#include "FinalExam.h"

int main()
{
    Test* test = new Test();
    Exam* exam = new Exam();
    FinalExam* finalExam = new FinalExam();

    Trial::print();
}
