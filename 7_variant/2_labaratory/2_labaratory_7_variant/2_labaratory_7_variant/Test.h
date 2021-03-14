#pragma once
#include "Trial.h"
#include <vector>
#include <iostream>

class Test :
    public Trial
{
protected:
    int countQuestions;
    vector<string> questions;
public:
    Test();
    Test(const Test& test);
    Test(string title, string goal, int countQuestions, vector<string> questions);
    ~Test();
    virtual void show();
};

