#include <iostream>
    
    // 6. Create constexpr variables for an int, char, string, double
    // 7. Create a function that creates a constexpr variable within it, but does nothing with it
    // 8. Create a recursive function that removes a letter from a string, then returns the reverse of the string
    // 9. Create overloaded inline functions for subtracting 1, 2 and 3 numbers away from the first number passed in

// 5. Create an inline function that takes in a const string const pointer and has a postcondition that ensures the string is not empty
inline void string_Not_Empty(const std::string* str){
    // TODO add gsl postcon here ensure string is not empty
}

// 3. Create an inline function that takes in a const int reference, has a precondition of it being greater than 0 and returns 5 more than that value
inline int add_Five(const int input_Num) {
    // TODO I have not downloaded gsl libs for precon in MacOS
    return input_Num + 5;
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
    std::cout << "test add_Five: " << add_Five(5) << std::endl;

    // 4. Create a const int const pointer set to 5
    const int* const fix_Pointer = new int(11);
    std::cout << "fix_Pointer: " << fix_Pointer << std::endl;
    std::cout << "fix_Pointer value: " << *fix_Pointer << std::endl;
    return 0;
}