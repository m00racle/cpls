#include <iostream>
#include <string>

using namespace std;

    // Create a function called 'times_Ten' that takes an int as a parameter, then returns the product of it times ten. No references or pointers.
    int times_Ten(int x) {
        return x * 10;
    }

    // Create a 'print' function that takes a string with default value of "ham" and simply prints out the value of the string
    void print(string x = "ham") {
        cout << x << endl;
    }

    // Create a 'mult_Array' function that takes in: a pointer to an array, the size of the array, and a double called 'multiplier'. Create a loop within the function that multiplies every value in the array by the multiplier
    void mult_Array(double arr[], int size, double multiplier) {
        for (int i = 0; i < size; i++)
        {
            // multiply each component of the array by multiplier
            arr[i] = arr[i] * multiplier;
            // NOTE: arr[i] is the same as shifting pointer around starting from pointer of first component of the array
        }
        
    }

    // Create a 'combine_Arrays' function that takes in two pointers to arrays of the same size and a int parameter for size. Create a loop that adds thes the second array to the first and then sets the seconds values to zero.
    void  combine_Arrays(double* arr_1, double* arr_2, int size) {
        for (int i = 0; i < size; i++)
        {
            arr_1[i] = arr_1[i] + arr_2[i];
            arr_2[i] = 0;
        }
        
    }


int main() {
    // test the challenge:
    // Create a function called 'times_Ten' that takes an int as a parameter, then returns the product of it times ten. No references or pointers.
    cout << "times_Ten(10)= " << times_Ten(10) << endl;

    // Create a 'print' function that takes a string with default value of "ham" and simply prints out the value of the string
    cout << "print(string) = " ;
    print();
    // NOTE: I can't directly put print("Hellow World") to the cout since print function returns void thus nothing to out from cout!!
    cout << endl;

    // Create a 'mult_Array' function that takes in: a pointer to an array, the size of the array, and a double called 'multiplier'. Create a loop within the function that multiplies every value in the array by the multiplier
    double arr_0[]{1,2,3,4,5};
    mult_Array(arr_0, 5, 10);
    cout << "mult_Array with multiplier 10 = " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr_0[i] << ", ";
    }
    cout << endl;

    // Create a 'combine_Arrays' function that takes in two pointers to arrays of the same size and a int parameter for size. Create a loop that adds thes the second array to the first and then sets the seconds values to zero.
    double arr_1[] {1,2,3,4,5};
    combine_Arrays(arr_1, arr_0, 5);
    cout << "combine array 1 = " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr_1[i] << ", ";
    }
    cout << endl;

    cout << "combine array 0 = " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr_0[i] << ", ";
    }
    cout << endl;
    return 0;
}