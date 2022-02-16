
#include <iostream>
#include <string>

using namespace std;

int main() {
    int a = 5;
    cout << "a value = " << a << endl;
    cout << "a ref address = " << &a << endl; //this will print the address where the value of variable a is stored.

    // now let's make another variable but this time it is only referencing to the same value as variable a
    int& ref_to_a = a; // int& ref... can also be int & ref.. or int &ref.. but int& ref.. is a best practice
    // now test this 
    cout << "ref to a value = " << ref_to_a << endl;
    cout << "ref to a address = " << &ref_to_a << endl;

    // now compare to this:
    int b = a;
    cout << "b value = " << b << endl;
    cout << "b ref address = " << &b << endl;
    //NOTE the value of b is = a but the address of b is not the same as the address of a!

    // dereference operator (*) is the opposite of (&) which will get the value stored in that memory address
    cout << "deref to a address = " << *&a << endl;
    // why do I not just type the previous hex format of the variable a address?
    //ANSWER because the address will change for each run since the memory used is volatile.

    // now what if I put multiple & and *?
    cout << "ref to a deref multiple = " << &*&a << endl;
    //ANS it will go back and forth between address and value stores depending on which operator is the first.

    // Now let's try pointer variable:
    // since we know int a = 5; thus:
    int* pointer1 = &a; // this means the pointer1 is referencing to memory address storing variable a value.
    int* pointer2 = pointer1; // repeat the same step:
    // print the content
    cout << "pointer 1 = " << pointer1 << endl;
    cout << "pointer 2 = " << pointer2 << endl;
    //NOTE they both referencing the same memory location (which storing the value of variable a)

    // now test it further
    cout << "value in a address = " << *&a << endl; // meaning it dereferencing the address where the value of variable a is stored.
    cout << "deref value of pointer 1 = " << *pointer1 << endl; // meaning it dereferencing the address in the pointer1 variable
    //NOTE: both operations should return 5

    // POINTER TO ARRAY
    //let's create an array
    int arr[]{1,2,3};
    int* p1 = &arr[0]; //the pointer p1 is set to the address or 0th element of arr array
    cout << "derefer p1 = " << *p1 << endl;
    // now let's use other method of dereferencing:
    cout << "derefer by arr index: " << p1[0] << endl;
    //NOTE it resulted the same number = 1 which is the 0th element of arr array

    cout << "derefer to p1 +1:" << *(p1+1) << endl;
    cout << "address of the arr array: " << arr << endl;
    cout << "the p1 value: " << p1 << endl;
    // NOTE address of arr array, address of 0th element of arr array and the pointer p1 value are the same!
    cout << "derefer to p1 + 2: " << *(p1+2) << endl;
    cout << "address p1 + 2: " << p1 + 2 << endl;
    cout << "address of 2nd element of arr: " << &arr[2] << endl;

    // array of pointers
    int* pa[]{p1};

    cout << "pa = " << pa << endl;
    cout << "dereference to pa = " << *pa << endl;
    cout << "address pa: " << &pa << endl;
    cout << "deref pa[0] = " << *pa[0] << endl;
    cout << "deref pa[0] + 1 = " << *(pa[0] +1) << endl;

    //CHALLENGE: 
    // 1. Create 5 different variables of different data types. Output each their values and addresses
    // 2. Create 5 different variables of different data types. Create 5 different
    // 3. Create 3 different variables of the same type, Create 3 reference variables to those types and store them in an array. Output the values in the array.

    cout << "Final Challenge" << endl;
    cout << "challenge number 1" << endl;
    bool v1 = true;
    int v2 = 2;
    float v3 = 3.45;
    double v4 = 5.783466639498;
    string v5 = "Hello World";

    cout << "variable 1= " << v1 << endl;
    cout << "addres v 1= " << & v1 << endl;
    cout << "variable 2= " << v2 << endl;
    cout << "addres v 2= " << & v2 << endl;
    cout << "variable 3= " << v3 << endl;
    cout << "addres v 3= " << & v3 << endl;
    cout << "variable 4= " << v4 << endl;
    cout << "addres v 4= " << & v4 << endl;
    cout << "variable 5= " << v5 << endl;
    cout << "addres v 5= " << & v5 << endl;

    // challenge 2: this is my own takes
    // make the address of variables
    bool & va1 = v1;
    int * va2;
    //NOTE the dereference operator is allowed to have null value as at this moment va2 is still null
    va2 = & v2; // this takes the memory address where the value of v2 is stored.
    float* va3 = &v3;
    double& va4 = v4;
    string &va5 = v5;

    // proof the results
    cout << "va1 address = " << &va1 << endl;
    cout << "va2 address = " << va2 << endl;
    cout << "va3 address = " << va3 << endl;
    cout << "va4 address = " << &va4 << endl;
    cout << "va5 address = " << &va5 << endl;

    // Challange 3
    cout << "challenge 3" << endl;
    string s1 = "We got a problem";
    string s2 = "Houston Hello";
    string s3 = "1..2...3...Mayday";

    // make array of its reference variables
    string* sparray[]{&s1, &s2, &s3};
    // test 
    cout << "sparray address: " << sparray << endl;
    cout << "sparray 0 address: " << &sparray[0] << endl;
    cout << "sparray[0] value: " << sparray[0] << endl;
    cout << "deref sparray[0]: " << *(*sparray) << endl; // the address of the array is the address of its first (0th) element!
    cout << "deref sparray[1]: " << **(sparray + 1) << endl;
    cout << "deref sparray[2]: " << *sparray[2] << endl;
        
    return 0;
}