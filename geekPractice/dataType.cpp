// { Driver Code Starts
// Initial template for C++
// https://practice.geeksforgeeks.org/problems/c-basic-data-types3128/1#

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User functiom template for C++

class Solution {
  public:
    int BasicDataType(string s) {
        // code here
        // check for char
        if (s.length() == 1) {
            // check it it is and int or char
            if (int(s[0] - '0') <= 9){
                return 4;
            } else {
                return 1;
            }
        }
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '.') {
                // detect decimal separator
                if (s.length() - i > 6){
                    // more than 6 significant numbers (double)
                    return 8;
                } else {
                    // less than 6 significant numbers (float)
                    return 4;
                }
            }
        }
        // integers
        return 4;
    }

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.BasicDataType(S) << endl;
    }
}  // } Driver Code Ends