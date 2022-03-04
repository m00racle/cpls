#include <iostream>
#include <string>
using namespace std;

int main() {
    // final challenge array
    // 1. Create an int array with min/max int values
    int min_max_array[2] = {INT_MIN, INT_MAX};
    // NOTE: INT_MIN is minimum integer and INT_MAX is maximum integer data type in C++
    // proof
    cout << min_max_array[0] << endl;

    // 2. Create a double array with 5 double values
    double double_array[5]{1.2, 3.4, 5.6, 7.8889, 0.0};
    cout << double_array[3] << endl;

    // 3. create array size 1 and set its value
    int array_size_1[1];
    array_size_1[0] = 0;
    cout << array_size_1[0] << endl;

    // 4. Create a 2d array of characters, asigning them values 'a' through 'i'
    char array_2d[2][5] {{'a', 'b', 'c', 'd', 'e'},{'f', 'g', 'h', 'i', '\0'}};
    cout << array_2d[0] << endl;
    // NOTE: since the '\0' character is located in the array_sd[1] array in array when cout above is run it will print all letters since it goes through from array 0 and 1 inside the whole array.

    // 5. Create int 3d array with assigned values of 1-8;
    int array_3d[1][2][4] = {{{1,2,3,4},{5,6,7,8}}};
    cout << array_3d[0][1][2] << endl;

    // string y;

    /* The lines getline is purposed to make the result visible without declaring endl
    * I will only need to press enter to make the program ends. */
    // getline(cin, y);
    return 0;
}