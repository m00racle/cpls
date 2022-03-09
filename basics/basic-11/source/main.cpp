#include <iostream>
#include <string>
#include <gsl>
    
    // 9. Create overloaded inline functions for subtracting 1, 2 and 3 numbers away from the first number passed in
int subs_Multi(int a, int b, int c) {
    return a - b - c;
}

int subs_Multi(int a, int b) {
    return a - b;
}

// 7. Create a function that creates a constexpr variable within it, but does nothing with it
void create_Constexpr() {
    constexpr int made_Constexpr = 19;
}

// 5. Create an inline function that takes in a const string const pointer and has a postcondition that ensures the string is not empty
inline void string_Not_Empty(const std::string* str){
    //  add gsl postcon here ensure string is not empty
    int string_Length = str->length();
    Ensures(string_Length > 0);
}

// 3. Create an inline function that takes in a const int reference, has a precondition of it being greater than 0 and returns 5 more than that value
inline int add_Five(const int input_Num) {
    //  I have not downloaded gsl libs for precon in MacOS
    Expects(input_Num > 0);
    return input_Num + 5;
}

// 8. Create a recursive function that removes a letter from a string, then returns the reverse of the string

std::string reverse_Str(std::string& s, std::string rest = ""){

    // NOTE: I use string& s since I want to change the input text thus s and input text must be refer to the same address. This way input will also erased not just s
    //  WARNING: if you use string s then input will be copied and s and input will have different memory address thus erasing s will not erase the input string.
    
    if (s.length() == 0)
    {
        return rest;
    }
    rest += s[s.length()-1];
    return reverse_Str(s.erase(s.length()-1), rest);
}

int main(){
    // 1. Create const variables for an int, char, string, and double
    const int j = 5;
    const char chr = 'c';
    const std::string str = "String";
    const double doub = 3.1415;

    // 2. Create const pointers for an int, char, double (so that addess cannot change)
    int* const pointerInt = new int(5);
    char* const pointerChar = new char('t');
    double* const pointerDouble = new double(3.5698989586);

    // test challenge number 3
    std::cout << "test add_Five: " << add_Five(10) << std::endl;

    // 4. Create a const int const pointer set to 5
    const int* const fix_Pointer = new int(11);
    std::cout << "fix_Pointer: " << fix_Pointer << std::endl;
    std::cout << "fix_Pointer value: " << *fix_Pointer << std::endl;

    // 6. Create constexpr variables for an int, char, string, double
    constexpr int expr_Int = 6;
    constexpr char expr_Char = 'h';
    constexpr char expr_String[] = "constexpr";
    constexpr double expr_Double = 3.556789;
    std::cout << "expr_String: " << expr_String << std::endl;

    // test challenge 8:
    std::string input = "Hellow";
    std::cout << "input word :" << input << std::endl;
    
    std::cout << "result: " << reverse_Str(input) << std::endl;
    std::cout << "input length after: " << input.length() << std::endl;
    return 0;
}