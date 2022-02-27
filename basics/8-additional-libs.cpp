#include <iostream>
#include <boost/optional.hpp>
#include <gsl>

using namespace std;

int main() {
    int x = 5;
    gsl::owner<int*> p = &x;
    boost::optional<int> yi;
    return 0;
}