#include <iostream>
#include <string>

using namespace std;

int main() {
    // conditional operator - ternary operator
    5 > 4 ? cout << "correct" << endl : cout << "wrong" << endl;
    // this is the same as :
    if (5>4) {
        cout << "correct" << endl;
    } else {
        cout << "wrong" << endl;
    }

    // the more practical use of conditional operator is to assign optional value to variable:
    int x = 5 > 4 ? 1 : 2 ;
    cout << "x = " << x << endl;
    //this is the same as :
    int y;
    if (5 > 4) {
        y = 1;
    } else {
        y = 2;
    }
    cout << "y = " << y << endl;

    // SWITCHES
    // WARNING: ONLY WORKS FOR CHAR AND INT
    // NOT INTENDED FOR STRING OR DOUBLE AND FLOATS
    switch (1)
    {
    case 1:
        
    case 2:
        /* code */
        cout << "x is 1" << endl;
        cout << "x is 2" << endl;
        break;
    default:
        cout << "not intended to be swicherd" << endl;
        break;
    }

    //FINAL CHALLENGES
    //1. Create 3 "if" statements with '1', true and false as the arguments but DO NOTHING!
    if (1) ;
    if (true)
        ;
    if (false) {
        ;
    }

    // 2. Create 3 'if' 'else if' statements that check an int to see if it's >, == or < 0. Then output each as a statement 
    if (5 > 0) {
        cout << "5 > 0" << endl;
    }
    else if (5 == 0) {
        cout << "5 == 0" << endl;
    }
    else if (5 < 0) {
        cout << "5 > 0" << endl;
    }

    // 3. Create an if else statement that checks if a variable is odd/even and output just that along with lots of other random days of the week in a block of code using {}
    if (x % 2 == 0){
        cout << "x is even" << endl;
    }
    else {
        cout << "x is odd" << endl;
    }
    return 0;
}