#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;


// cosntructor
Employee::Employee(string name, string company, int age) 
{
    Name = name;
    Company = company;
    Age = age;
}

// defining each inline function (functions declared in the class declaration are called inline functions)

void Employee::IntroduceYourself() 
{
    cout << "Name - " << Name << endl;
    cout << "Company -" << Company << endl;
    cout << "Age - " << Age << endl;
}

void Employee::setName(string name)
{
    Name = name;
}

string Employee::getName() 
{
    return Name;
}

void Employee::setCompany(string company)
{
    Company = company;
}

string Employee::getCompany()
{
    return Company;
}

void Employee::setAge(int age)
{
    // validate only 18 years or older
    if (age >= 18)
    {
        Age = age;
    }
}

int Employee::getAge() {
    return Age;
}

void Employee::AskForPromotion() {
    if (Age > 30)
    {
        /* code */
        cout<<Name<<" got promoted "<<endl;
    } else {
        cout<<Name<<" Sorry you are not qualified for promotion"<<endl;
    }
    
}