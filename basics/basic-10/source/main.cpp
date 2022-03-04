#include <iostream>
#include "print_Me.h"
#include "add_Ref2.h"

// 1) Create a function that takes an array as an argument using square brackets [].
void multi_Ten(double arr[], int size, int multiplier){
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * multiplier;
    }
}

// 2) Create a function called add_One that is declared before the main function and defined afterward. It takes in an int VALUE and returns an int value of one more than is copied in.
// declaration:
int add_One(int x);

int main() {
    namespace food = me::now;
    food::print_Me();
    // test challenge 1:
    double arr0[] {1,2,3,4,5};
    multi_Ten(arr0, 5, 10);
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr0[i] << ", ";
    }
    std::cout << std::endl;

    //test challenge 2:
    int add_Result = add_One(4);
    std::cout << "function add_One: " << add_Result << std::endl;

    //test challenge 3: first option with int args
    int add_Result2 = add_Two(8);
    std::cout << "function add_Two: " << add_Result2 << std::endl;
    int start_y = 10;
    shockalockaboomdiddyboom::add_Two_Ref(&start_y);
    std::cout << "function add_Two: " << start_y << std::endl;

    // test challenge 6:
    cheese::bolognia::print_Sandwich();

    return 0;
}

// cont. challenge 2)
int add_One(int x) {
    return ++x;
}