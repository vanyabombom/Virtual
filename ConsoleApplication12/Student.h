﻿#pragma once
#include "Human.h"

class Student : public Human  // ïîòîìîê
{
    char* Univer;

public:
    Student();
    Student(const char* n, int a, double sal, const char* U);
    ~Student();

    void Output();
    void Salary();

    void Input(const char* n, int a, double sal, const char* U);
};