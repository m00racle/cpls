#include <iostream>

// 1) Create an enum of flowers, then create a switch that prints out which each is.
enum Flowers {
    rose,
    jasmine,
    violet
};

void print_Flowers(Flowers f) {
    switch (f)
    {
    case rose:
        /* code */
        std::cout << "you choose rose" << std::endl;
        break;
    case jasmine:
        std::cout << "you choose jasmine" << std::endl;
        break;
    case violet:
        std::cout << "you choose violet" << std::endl;
        break;
    default:
        std::cout << "Can't determine what flower?" << std::endl;
        break;
    }    
}

// 2) Create an enum of first names with the first being set to a value of 'b'. Then create a variable instance of each.
enum FirstNames {
    m00 = 'b',
    ra,
    cle
};

//3) Create an enum class of vegetables and other of breads.
enum class Vegetables {
    lettuce,
    cucumber,
    tomato,
    carrot
};

enum Breads {
    wheat,
    lettuce,
    sausage,
    cheese
};

// 4) Use "int('a')" to output the ascii values of a through g
enum class Ascii_Codes {
    a = 'a', b, c, d, e, f, g
};
//NOTE since I put 'a' at the beginning of the enum class the other values, b... up to g will just int +1 thus no need to define b = 'b' and so on.

// 5) Create a struct called fighter with an int called health, and another int called strength. Create an instance with values of 100 and 5.
struct Fighter
{
    /* data */
    int health;
    int strength;
    // cont. instantiation in main function
};


// 6) Create a struct called Dog, with an int called 'fur' with a default value of 5. then create a string called name. Create an instance, then set it's name to "Stanley"
struct Dog
{
    /* data */
    std::string name;
    int fur = 5;
    // NOTE the fur variable is put after the name since the variables with default value creates error when put at the top
    // cont. to the main function
};



int main() {
    //test challenge 1
    print_Flowers(rose);
    //test challenge 2
    FirstNames moo{m00};
    FirstNames sec= {ra};
    std::cout << "FirstNames m00: " << moo << std::endl; // should print ASCII int 98
    std::cout << "FirstNames ra: " << sec << std::endl; // should print 98 + 1
    // test challenge 3 
    std::cout << "lettuce index in enum class Veggetables: " << (int)Vegetables::lettuce << std::endl; //should cout 0
    std::cout << "lettuce index in enum breads: " << lettuce << std::endl; // should cout 1

    // test challenge 4
    std::cout << "ASCII code for a: " << (int)Ascii_Codes::a << std::endl;
    std::cout << "ASCII code for g: " << (int)Ascii_Codes::g << std::endl;

    // challenge 5 contnuance and test 
    Fighter fighter{100, 5};
    std::cout << "fighter health: " << fighter.health << std::endl; //should cout fighter health: 100

    // challenge 6 continuance and test
    Dog stanley = {"Stanley"};
    std::cout << "Dog's name: " << stanley.name << std::endl;
    std::cout << "Dog's fur type: " << stanley.fur << std::endl;

    return 0;
}