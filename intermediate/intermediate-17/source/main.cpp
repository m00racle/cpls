#include <iostream>
#include <string>
using namespace std;

/* 
    INTERMEDIATE 17: Polymorphism

    This is the demo for polymorphism. It is like the overiding method in Inheritance source commit but this time we will compare when instance of BaseCase variable is called vs DerivedClass is called
*/

class MyBase {
private:

public:
    void Print() {
        cout << "inside Base class" << endl;
    }
};

class MyDerived {
    private:

public:
    void Print() {
        cout << "inside Derived class" << endl;
    }
};

// now let's try it out:
int main() {
    // instantiate both base and derived class 
    MyBase base;
    MyDerived derived;
    // test the polymorphism of each Print() method
    cout << "MyBase print method: ";
    base.Print();
    cout << "MyDerived print method: ";
    derived.Print();

    //test polymorphism with reference
    // use MyBase type but using derived
    MyBase &refBase = base;
    MyDerived &refDerived = derived;
    // test each print
    cout << "refBase print: ";
    refBase.Print();
    cout << "refDerived print: ";
    refDerived.Print();

    //test the polymorphism using pointer instance
    MyBase* pointerBase = new MyBase();
    MyDerived* pointerDerived = new MyDerived();
    // let's access each print method (using pointer):
    cout << "MyBase pointer print: ";
    pointerBase -> Print();
    cout << "MyDerived pointer print: ";
    pointerDerived -> Print();

    //test auto typed
    auto &autoBase = base;
    auto *autoDerived = new MyDerived();
    //test print
    cout << "autoBase print: ";
    autoBase.Print();
    cout << "autoDerived print: ";
    autoDerived->Print();

    return 0;
}