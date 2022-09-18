/* INTERMEDIATE 24 DYMANIC MEMORY
THIS code is to demonstrate the practical pricnciples and Guidelines of using Dynamic Memory

In this code the focus was also to test the basic yet best practice when it comes to DYNAMIC MEMORY
 */

#include <iostream>
#include <string>

using std::cout; using std::getline; using std::string; using std::endl;

int* WorstFunctionEver() {
    int* f = new int(5);
    return f;
}

int* Create8() {
    int e = 8;
    return &e;
}

void Set7(int* p) {
    *p = 7;
}
/* 
test using main function
 */
int main() {
    int* p = Create8();
    cout << "\ntest pointer p:\n";
    cout << "value of p: " << *p << '\n';
    cout << "target of p: " << p << '\n';
    cout << "address of p: " << &p << endl;

    Set7(p);
    cout << "\ntest reinstate p:\n";
    cout << "value of p: " << *p << '\n';
    cout << "target of p: " << p << '\n';
    cout << "address of p: " << &p << endl;

    int* t = Create8();
    cout << "\ntest pointer t:\n";
    cout << "value of t: " << *t << '\n';
    cout << "target of t: " << t << '\n';
    cout << "address of t: " << &t << endl;
    // delete p;
    // delete t;
    return 0;
}

/* RESULT:
test pointer p:
value of p: 0
target of p: 0x4cefffc64
address of p: 0x4cefffca0

test reinstate p:
value of p: 0
target of p: 0x4cefffc64
address of p: 0x4cefffca0

test pointer t:
value of t: 0
target of t: 0x4cefffc64
address of t: 0x4cefffc98
 */