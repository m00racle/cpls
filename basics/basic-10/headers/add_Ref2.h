#ifndef ADD_REF2_H
#define ADD_REF2_H

// 4) Create Macros for a char, a negative int, and a negative double
#define CHAR_MAC 'X'
#define NEG_INT -1
#define PI 3.14159265

// 3) Create a function called add_Two that is declared in a header file and defined in a seperate cpp file from the main.cpp file. It has a REFERENCE int parameter that adds two to it. Nothing is returned.
// 5) Repeat number 3 but enclose it all within a namespace called shockalockaboomdiddyboom
namespace shockalockaboomdiddyboom {
    void add_Two_Ref(int* y);
}

// 6) Create a function called print_Sandwich, that returns nothing and does indeed print 'sandwich'. Nest that function with two namespaces named cheese and bolognia. Then create an alias namespace called boleese and use it to call print_Sandwich. 
namespace cheese {
    namespace bolognia {
        void print_Sandwich();
    }
}
#endif