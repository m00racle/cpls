#include <iostream>
#include <string>

using std::cout; using std::endl; using std::string; using std::cin;

int main() {
    int* p1 = new int[5]; // <- this creates new dynamic array with size of 5 int(s)
    // int* p2 = new int[]{1,2,3}; this declaration is not allowed!
    int* p2 = new int[6]; //<- just stick to this type of dynamic array declaration

    // compare it to the non dynamic array declaration and definition:'
    int a[] {1,2,3}; // <- this is allowed since it will fixed by the stack as array size 3 ints
    int b[4]; //<- this declaration put the stack array with empty member but with size 4 ints

    // always remember to clean up:
    // delete p1; WRONG: 'delete' applied to a pointer that was allocated with 'new[]'; did you mean 'delete[]'? [-Wmismatched-new-delete]
    delete[] p1;
    delete[] p2;
    cout << "end of run" << endl;
    return 0;
}