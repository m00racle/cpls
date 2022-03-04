// #pragma once
#include <iostream>
#include <string>
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using namespace std;

class Employee{
    protected:
        string Name;
        string Company;
        int Age;

    public:
        Employee(string name, string company, int age);

        void IntroduceYourself();

        void setName(string name);

        string getName();

        void setCompany(string company);

        string getCompany();

        void setAge(int age);

        int getAge();

        void AskForPromotion();
    };
#endif