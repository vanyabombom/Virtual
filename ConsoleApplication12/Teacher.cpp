#include "Teacher.h"
#include <iostream>

using namespace std;

Teacher::Teacher() : Human()
{
    Univer = nullptr;
    Subject = nullptr;
}

Teacher::Teacher(const char* n, int a, double sal, const char* uni, const char* subj) : Human(n, a, sal)
{
    Univer = new char[strlen(uni) + 1];
    strcpy_s(Univer, strlen(uni) + 1, uni);

    Subject = new char[strlen(subj) + 1];
    strcpy_s(Subject, strlen(subj) + 1, subj);
}

Teacher::~Teacher()
{
    delete[] Univer;
    delete[] Subject;
}

void Teacher::Output()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Salary: " << salary << endl;
    cout << "University: " << Univer << endl;
    cout << "Subject: " << Subject << endl << endl;
}

void Teacher::Salary()
{
    cout << "Teacher salary: " << salary << endl;
}

void Teacher::Input(const char* n, int a, double sal, const char* uni, const char* subj)
{
    if (name != nullptr) delete[] name;
    if (Univer != nullptr) delete[] Univer;
    if (Subject != nullptr) delete[] Subject;

    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);
    age = a;
    salary = sal;

    Univer = new char[strlen(uni) + 1];
    strcpy_s(Univer, strlen(uni) + 1, uni);

    Subject = new char[strlen(subj) + 1];
    strcpy_s(Subject, strlen(subj) + 1, subj);
}