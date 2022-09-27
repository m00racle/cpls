#include <iostream>
#include <string>

using std::cout; using std::endl; using std::string; using std::cin;

int* CountToTen() {
    int* p = new int[10];
    cout << "input your numbers:\n";
    for(int i = 0; i < 10; i++){
        cout << "input index " << i << " value: " << i + 1 << '\n';
        p[i] = i + 1;
    }

    return p;
}

int main() {
    // calling the Count to ten function
    int* ten = CountToTen();
    cout << "\ntesting the output: \n";
    for (int k=0; k<10; k++){
        cout << "index " << k << " : " << ten[k] << endl;
    }
    // remember to delete the array referenced by pointer
    delete[] ten;
    // since p and ten address the same array then no delete[] p needed in the CountToTen()
    // this is why cleaning up is the responsibility of the caller function after they finish 
    // using it.
    return 0;
}
/* RESULT:
input your numbers:
input index 0 value: 1
input index 1 value: 2
input index 2 value: 3
input index 3 value: 4
input index 4 value: 5
input index 5 value: 6
input index 6 value: 7
input index 7 value: 8
input index 8 value: 9
input index 9 value: 10

testing the output:
index 0 : 1
index 1 : 2
index 2 : 3
index 3 : 4
index 4 : 5
index 5 : 6
index 6 : 7
index 7 : 8
index 8 : 9
index 9 : 10
 */