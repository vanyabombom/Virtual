#include "Director.h"
#include <iostream>

using namespace std;

Director::Director() : Human()
{
    Firm = nullptr;
}

Director::Director(const char* n, int a, double sal, const char* companyN) : Human(n, a, sal)
{

    Firm = new char[strlen(companyN) + 1];
    strcpy_s(Firm, strlen(companyN) + 1, companyN);
}

Director::~Director()
{
    delete[] Firm;
}

void Director::Output()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Salary: " << salary << endl;
    cout << "Firm: " << Firm << endl << endl;
}

void Director::Salary()
{
    cout << "Director's salary: " << salary << endl;
}

void Director::Input(const char* n, int a, double sal, const char* companyN)
{
    if (name != nullptr) delete[] name;
    if (Firm != nullptr) delete[] Firm;

    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);
    age = a;
    salary = sal;

    Firm = new char[strlen(companyN) + 1];
    strcpy_s(Firm, strlen(companyN) + 1, companyN);
}