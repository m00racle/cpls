#include <iostream>
#include <string>

using namespace std;

/* 
    INHERITANCE

    Here is the demo on how inheritance work in C++
*/

class MyBase {
    int _i;

public:
    //constructor
    MyBase(int i): _i(i) {
        // basically the constructor only get input i from the user and assign it to _i variable
        // remember C++ does not have self. like in python thus the _i is the private self.i 
    }

    // print method:
    void p() {
        // basically this will only output the _i
        cout << _i << endl;
    }

    // print to test overriding
    void p2() {
        cout << "integer: " << _i << endl;;
    }

    // to enable p2 overrinding to access _i I need to make another public method to get it
    int get_i() {
        return _i;
    }
};

// here is how to inherit MyBase: [accessor][baseClass] *DON'T FORGET THE public accessor
class MyDerived: public MyBase {
    float _f;

public:
    // constructor
    MyDerived(float f, int i): _f(f), MyBase(i) {
        // the constructor will assign the f to _f and i to _i
        // but since _i in MyBase class is private, MyDerived can only access it using MyBase constructor
    }

    // overiding p2 method
    void p2() {
        // since MyDerived can't access _i directly we need to use public method get_i() 
        // remember no self. here just get_i() in C++
        cout << "integer: " << get_i() << endl;
        // additional method to output float
        // since _f is private but still in scope of MyDerived then we can access it directly:
        cout << "float: " << _f << endl;
    }
};

int main() {
    // let's test constructor
    MyDerived d(1.0f, 2);
    // NOTE: MyDerived d does not have method p but since its MyBase have one we can call them
    d.p();
    //test overiding p2()
    d.p2();

    return 0;
}