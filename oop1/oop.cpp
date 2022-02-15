#include<iostream>

using namespace std;

class AbstractEmployee {
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee{
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

    void IntroduceYourself() {
        cout << "Name - " << Name << endl;
        cout << "Company -" << Company << endl;
        cout << "Age - " << Age << endl;
    }

    void setName(string name) {
        Name = name;
    }

    string getName() {
        return Name;
    }

    void setCompany(string company) {
        Company = company;
    }

    string getCompany() {
        return Company;
    }

    void setAge(int age) {
        // validate only 18 years or older
        if (age >= 18)
        {
           Age = age;
        }
    }

    int getAge() {
        return Age;
    }

    void AskForPromotion() {
        if (Age > 30)
        {
            /* code */
            cout<<Name<<" got promoted "<<endl;
        } else {
            cout<<Name<<" Sorry you are not qualified for promotion"<<endl;
        }
        
    }
};

class Developer:public Employee {
    private:
    string FavProgrammingLanguage;

    public:
    Developer(string name, string company, int age, string favProgLang): Employee(name, company, age){
        FavProgrammingLanguage = favProgLang;
    }

    string getFavProgrammingLanguage(){return FavProgrammingLanguage;}
};

int main() {
    
    Employee employee1 = Employee("Mooracle", "Google", 25);
    employee1.IntroduceYourself();
    
    Employee employee2 = Employee("John", "Amazon", 32);
    employee2.IntroduceYourself();

    
    Developer d = Developer("Gogo", "Yahoo", 33, "Go");
    d.IntroduceYourself();
    cout<<d.getName()<<" favorite programming language is: "<<d.getFavProgrammingLanguage()<<endl;
}