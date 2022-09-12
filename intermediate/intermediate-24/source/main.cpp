/* INTERMEDIATE 24 DYMANIC MEMORY
THIS code is to demonstrate the practical pricnciples and Guidelines of using Dynamic Memory

In this code the focus was also to test the basic yet best practice when it comes to DYNAMIC MEMORY
 */

#include <iostream>
#include <string>

using std::cout; using std::endl; using std::string;

void Print_add(int* a) {
    /* 
    This function is to demo to pointer as paremeter.
    This will take int pointer as argument and process it
     */
    // *a++; // <- since we are using pointer then this is not allowed it will increment the address not the value inside
    *a = *a + 1;

    // begin test in Print_add function:
    cout << "\nFrom Print_add function: \n";
    cout << "pointer address: " << &a << endl;
    cout << "pointer target: " << a << endl;
    cout << "pointer value: " << *a << endl;

    // clear the pointer a target:
    delete a;
    cout << "\nend of Print_add test\n";
}

int main() {
    int* ib;
    ib = new int(10);
    Print_add(ib);

    // Begin test in main function:
    cout << "\nFrom main function: \n";
    cout << "pointer address: " << &ib << endl;
    cout << "pointer target: " << ib << endl;
    cout << "pointer value: " << *ib << endl;
    delete ib;
    cout << "\ntest end process" << endl;
    return 0;
}

/* RESULT:
From Print_add function: 
pointer address: 0x7ffee489f6d8
pointer target: 0x7fce4bc059c0
pointer value: 11

end of Print_add test

From main function: 
pointer address: 0x7ffee489f700
pointer target: 0x7fce4bc059c0
pointer value: 11
main.out(5581,0x10c3d1e00) malloc: *** error for object 0x7fce4bc059c0: pointer being freed was not allocated
main.out(5581,0x10c3d1e00) malloc: *** set a breakpoint in malloc_error_break to debug
[1]    5581 abort      ./main.out
 */