#include <iostream>
#include "add_Ref2.h"

void shockalockaboomdiddyboom::add_Two_Ref(int* y) {
    (*y) = (*y)+2;
}

namespace sandwich = cheese::bolognia;

void sandwich::print_Sandwich() {
    std::cout << "sandwich";
}