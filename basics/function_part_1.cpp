#include <iostream>
#include <string>

using namespace std;

void add_One(int* i) {
    cout << "func init i: " << i << endl;
    // I want to fetch the value in *i address pointer and increment:
    cout << "func_add value: " << (*i)++ << endl;


    // I want to shift the address 1:
    *i++;
    cout << "func_address: " << i << endl;

    cout << "shift address val: " << (*i)++ << endl;
    // this las line is bad
}

int main() {
    int x = 5;

    add_One(&x);
    // add_One expect address as argument since it uses dereference or pointer as parameter
    cout << "final x value: " << x << endl;
    return 0;
}