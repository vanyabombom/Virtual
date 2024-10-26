#pragma once
#include "Human.h"

class Teacher : public Human
{
protected:
    char* Univer;
    char* Subject;

public:
    Teacher();
    Teacher(const char* n, int a, double sal, const char* uni, const char* subj);
    ~Teacher();

    void Output();
    void Salary();

    void Input(const char* n, int a, double sal, const char* uni, const char* subj);
};