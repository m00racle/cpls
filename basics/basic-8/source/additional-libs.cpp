#include <iostream>
#include <boost/optional.hpp>
#include <gsl>

// NOTE: I need to modify gsl libs since it is like using CLANG syntax copy_n while gcc recommend copy.
// check again how the libs (each) directory is structured. 
using namespace std;

int main() {
    int x = 5;
    cout << "x address: " << &x << endl;
    gsl::owner<int*> p = &x;
    boost::optional<int> yi;
    cout << "p :" << p << endl;
    return 0;
}