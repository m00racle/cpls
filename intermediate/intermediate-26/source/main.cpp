#include <iostream>
#include <string>

using std::cout; using std::endl; using std::string; using std::cin;

/* 
Demo on creating multi dimensional array
 */

int main() {
/* 
Parameter: none

Creating and testing (run) multi dimensional array

return int
 */    
    int* p1[5]; //<- this is not instantiated with NEW
    int** p2; 
    p2 = new int* [5];
    int p3[5][4];
    int numb = 5;
    
    for (int i = 0; i < 5; i++) {
        p1[i] = &numb; //<- this making p1[i] points to address in STACK
        p1[i] = new int(i); //<- even when p1[1] is filled with new it still address in STACK
        p2[i] = new int(i * 5); //<- p2 from the beginning always using new -> STACK must delete later
        for (int j = 0; j < 4; j++){
            p3[i][j] = i + j;
        }
    }

    cout << "test multi dimensional array: \n";
    cout << "p1 array 1st element: " << *p1[1] << endl;
    cout << "p2 array 1st element: " << *p2[1] << endl;
    cout << "p3 array 1st element: " << p3[1] << endl;
    //delete[] p1; //<- since p1 is not allocated using new it can't be deleted!

    // now this is safer delete since I delete all HEAPs int(s) in p2
    for (int i=0; i < 5; i++) {
        delete[] p2[i];
    }
    // after that delete the array pointed by p2:
    delete[] p2; //<- since p2 points to address in STACK it must be delete[]
    // NOTE: I can just delete[] p2 and the whole HEAPs of int inside will be also deleted!
    // here is the example: since p2 array has been deleted we can assign it a new one:

    p2 = new int* [4]; //<- this time p2 will point to STACK address of 3 ints
    for (int k=0; k<3 ; k++) {
        // CAUTION: I prepare array of size 4 ints but only fill 3:
        p2[k] = new int(k + 3);
    }

    cout << "p2 reassigned 3rd element: " << *p2[2] << endl; //<- call for index 2 since the 4th element is NULL
    // if we call p[3] it will invoke SEGMENTATION ERROR EXCEPTION.

    // then we delete the p2 again:
    delete[] p2;


    return 0;
}
/* RESULT:
test multi dimensional array: 
p1 array 1st element: 1
p2 array 1st element: 5
p3 array 1st element: 0xf9907ff710
p2 reassigned 3rd element: 5
 */