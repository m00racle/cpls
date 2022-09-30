/* INTERMEDIATE 23 OBJECT SLICING
    THIS code is demo of the effect of object slicing and how to avoid it
 */

#include <iostream>
#include <string>

using std::cout;
using std::getline;
using std::string;
using std::endl;

class Base {
    public:
        int numb = 1;
        string result = "Base class";

        virtual void Print() { 
            cout << "the position: " << result << endl;
        }

        virtual void Incr() {numb++;}
        virtual void Print_num() {cout << "numb value in Base: " << numb << endl;}
};

class Derived : public Base {
    public:
        int numb = 11;
        string result = "Derived class";

        void Print() override {
            cout << "the position: " << result << endl;
        }

        void Incr() override {numb++;}
        void Print_num() override {cout << "numb value in Derived: " << numb << endl;}
};

void Print_out(Base* a) {// <- use pointer Base type as parameter
    a->Incr();
    cout << "\nPrinted from function Print_out: \n";
    a->Print_num();
    
    a->Print(); // <- because using parameter we use -> to access class member function

    // print the a inners of a pointer
    cout << "pointer address: " << &a << endl;
    cout << "pointer target: " << a << endl;
    if (a) {
        cout << "content inside"<< endl;
    } else { cout << "content empty" << endl;}

}

int main() {
    // Derived d; //<-commented this out since THIS MEANS Derived type object is stored in STACK
    Derived* id = new Derived(); //<- instantiate new Derived type object in HEAP and NOT in STACK

    Print_out(id); // <- pass id into Print_out function.

    cout << "\nPrinted from main function: \n";
    cout << "id numb: " << id->numb << endl; //<- using -> instead of . to access function in HEAP

    // pointer id:
    cout << "pointer address: " << &id << endl;
    cout << "pointer target: " << id << endl;
    if (id) {
        cout << "content inside"<< endl;
    } else { cout << "content empty" << endl;}

    // delete the id pointer
    delete id;
    cout << "Run over" << endl;

    return 0;
}

/* RESULT:
The pointer argument to pass is confusing. Basically it is making all process HALT 
 */