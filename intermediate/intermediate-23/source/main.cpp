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
        virtual void Print() {
            cout << "position: " << result << endl;
        }

        virtual Base* Clone() {
            return new Base();
        }
};

class Derived : public Base {
    public:
        string result = "Derived class";
        void Print() override {
            cout << "position: " << result << endl;
        }
        Base* Clone() override {
            return new Derived();
        }
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
    return 0;
}