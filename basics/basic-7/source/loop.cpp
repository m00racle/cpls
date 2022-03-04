#include <iostream>
#include <cstring>

using namespace std;

int main() {
    // while loop
    cout << "while loop:" << endl;
    int x = 5;
    while (x) // this is a bit strange but basically as long as the x != 0 the loop will exist
    {
        cout << x-- << endl;
        //NOTE the int 5 will still be printed out since the x-- is executed after the cout of the original x which is 5
    }

    // do while loop
    cout << "do while loop :" << endl;
    int y = 5;
    do {
        cout << y-- << endl;
        // this code will still be executed although the condition on while (y > 5) is already unsatisfied
        // NOTE: THIS IS LESS RECOMMENDED COMPARED TO THE WHILE LOOP SINCE MORE ERROR PRONE!
    } while (y > 5);

    // for loop:
    cout << "for loop :" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }

    cout << "another form of for loop:" << endl;
    int k = 0;
    for(;;) {
        // just for fun let's skip 5 from printed out
        if (k == 5) {
            k++; // this will skip 5 from printed out
            continue; // this will skip the rest of the body but continue the loop
        }
        cout << k++ << endl;
        if (k > 10) break ;
    }

    // final challenge:
    // 1. Create a for loop that prints out 0-10 (done on example above 2 in fact)
    // 2. Create a for loop that prints out 0-100, but only even number
    cout << "0-100 but even number only: " << endl;
    for (int i = 0; i <= 100; i++)
    {
        /* code */
        if (i % 2 == 0)
        {
           cout << i << endl;
        }
        
    }

    // 3. Create a for loop that prints out 0-100 but only odd numbers
    cout << "0-100 but only odd numbers: " << endl;
    for (int i = 0; i <= 100; i++)
    {
        /* code */
        if (i % 2 == 0)
        {
           continue; // not printed the nubmer and continue to the next iteration
        }
        cout << i << endl;
    }

    // 4. Create a while loop that removes a letter from a string until there are no letters remaining.
    
    char s[] = "Hello";
    cout << "the string: " << s << endl;
    
    while (strlen(s)) {
        s[strlen(s) - 1] = '\0';
        cout << s << endl;
    }
    cout << "the string length after: " << strlen(s) << endl;

    string hold;
    getline(cin, hold);
    return 0;
}