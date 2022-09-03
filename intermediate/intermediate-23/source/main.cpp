#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::vector;

class Base {
    public:
        string result = "Base Class";
        int numb = 1;
        virtual void Print() {
            cout << "position: " << result << endl;
        }

        virtual Base* Clone() {
            return new Base();
        }

        virtual void Incr() {numb++;}
        virtual void Print_num() {cout << "numb value in Base: " << numb << endl;}
};

class Derived : public Base {
    public:
        string result = "Derived class";
        int numb = 11;
        void Print() override {
            cout << "position: " << result << endl;
        }
        Base* Clone() override {
            return new Derived();
        }
        void Incr() {numb++;}
        void Print_num() {cout << "numb value in Derived: " << numb << endl;}
};

int main() {
    // initiate Derived class d
    Derived d;
    
    // test the clone:
    Base* b_clone = d.Clone();
    cout << "using Clone of d result: ";
    b_clone->Print(); // use -> since this is Base* pointer type

    // test the copy
    Base b_copy = d;
    cout << "using copy of d result: ";
    b_copy.Print(); // uses dot since this is copy 

    // test the clone pointer:
    cout << "b_clone after incremented: \n";
    b_clone->Incr();
    b_clone->Print_num();
    cout << "d numb value: \n";
    d.Print_num();
    return 0;
}

/* RESULT:
$ ./main
using Clone of d result: position: Derived class
using copy of d result: position: Base Class    
b_clone after incremented:
numb value in Derived: 12
d numb value:
numb value in Derived: 11
 */