#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // try again with vector
    vector<string> msg {"hello", "C++", "world!"};
    //now iterate
    for (const string& word: msg){
        cout << word << " ";
    }
    cout << " hello M00racle from C++" << endl;
    return 0;
}