#include <stdio.h>
#include <iostream>

struct LinearCombination
{
    /* data */
    int value;
    int s;
    int t;
};

LinearCombination extGcd(LinearCombination x, LinearCombination y) {
    // test the value is already 0 then:
    if (y.value == 0)
    {
        return x;
    }

    int q = x.value / y.value;
    int s = x.s - q*y.s;
    int t = x.t - q*y.t;

    LinearCombination remains = {x.value - q*y.value, s, t};
    
    return extGcd(y, remains);
}

LinearCombination extGcd(int a, int b) {
    // this is the function to perfomr the extended gcd prodcedure

    // check if both a and b are 0
    if (a == 0 && b == 0)
    {
        // return undefined as -1
        return LinearCombination({-1, 0, 0});
    }
    
    if (a == 0) 
    {
        return LinearCombination({b, 0, 1});
    }

    LinearCombination x = {a, 1, 0};
    LinearCombination y = {b, 0, 1};
    
    // start recursive
    return extGcd(x,y);
}

int main() {
    LinearCombination gcd = extGcd(223, 99);
    
    std::cout << gcd.value << " = (" << gcd.s << ")a + (" << gcd.t << ")b";
}