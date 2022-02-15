#pragma once
#include <iostream>

using namespace std;

namespace emp 
{
    class Employee{
    protected:
        string Name;
        string Company;
        int Age;

    public:
        Employee(string name, string company, int age) {
            Name = name;
            Company = company;
            Age = age;
        }

        void IntroduceYourself();

        void setName(string name);

        string getName();

        void setCompany(string company);

        string getCompany();

        void setAge(int age);

        int getAge();

        void AskForPromotion();
    };

    // defining each inline function (functions declared in the class declaration are called inline functions)

    inline void Employee::IntroduceYourself() 
    {
        cout << "Name - " << Name << endl;
        cout << "Company -" << Company << endl;
        cout << "Age - " << Age << endl;
    }

    inline void Employee::setName(string name)
    {
        Name = name;
    }

    inline string Employee::getName() 
    {
        return Name;
    }

    inline void Employee::setCompany(string company)
    {
        Company = company;
    }

    inline string Employee::getCompany()
    {
        return Company;
    }

    inline void Employee::setAge(int age)
    {
        // validate only 18 years or older
        if (age >= 18)
        {
            Age = age;
        }
    }

    inline int Employee::getAge() {
        return Age;
    }

    inline void Employee::AskForPromotion() {
        if (Age > 30)
        {
            /* code */
            cout<<Name<<" got promoted "<<endl;
        } else {
            cout<<Name<<" Sorry you are not qualified for promotion"<<endl;
        }
        
    }
}
