#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> msg {"Hello", "C++", "World", "from", "VSCode", "and teh C++ extension"};

    for (const string &word : msg)
    {
        /* code */
        cout << word << " ";
    }
    cout << endl;
}