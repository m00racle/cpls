#include <iostream>
#include <string>

using std::cout; using std::endl; using std::string; using std::cin;

int main() {
    int arraySize, inputNumber;
    // begin by asking the user their intended array size:
    cout << "Define array size: ";
    cin >> arraySize;

    // create Dynamic Array as user's size intended:
    int* p = new int[arraySize];

    // ask user to input their numbers into the array:
    for (int i = 0; i < arraySize; i++)
    {
        switch (i)
        {
        case 0:
            cout << "Enter 1st number: ";
            break;
        case 1:
            cout << "Enter 2nd number: ";
            break;
        case 2:
            cout << "Enter 3rd number: ";
            break;
        default:
            cout << "Enter " << i + 1 << "th number: ";
            break;
        }
        cin >> inputNumber;
        p[i] = inputNumber;
    }

    // test the Dynamic Array:
    cout << "\ntest dynamic array output: \n";
    for (int k=0; k < arraySize; k++)
    {
        switch (k)
        {
        case 0:
            cout << "1st number: " << p[k] << '\n';
            break;
        case 1:
            cout << "2nd number: " << p[k] << '\n';
            break;
        case 2:
            cout << "3rd number: " << p[k] << '\n';
            break;
        default:
            cout << k + 1 << "th number: " << p[k] << '\n';
            break;
        }
    }

    delete[] p;
    
    cout << "\nend of run" << endl;
    return 0;
}

/* RESULT:
Define array size: 5
Enter 1st number: 1
Enter 2nd number: 2
Enter 3rd number: 3
Enter 4th number: 4
Enter 5th number: 5

test dynamic array output:
1st number: 1
2nd number: 2
3rd number: 3
4th number: 4
5th number: 5

end of run
 */