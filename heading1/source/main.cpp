// this is the main file to call all headings
#include <iostream>

#include "Employee.h"


using namespace std;


int main() {
    Employee emp1 = Employee("Andy", "gogol", 22);

    emp1.setAge(44);
    emp1.IntroduceYourself();
    cout<<"Hello world "<< endl;
    return 0;
} 