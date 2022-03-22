#include <iostream>
#include <string>

// 1. Create a class for three different vegetables with an int called 'fiber' set to different amounts.
class Vegetable {
    private:
        int fiber;
    public:
        Vegetable(int fiber_Amount) : fiber(fiber_Amount) {}

        int get_Fiber() {
            return fiber;
        }
};

// 2. Create a class called 'Fighter' with two private double member variables called 'health' and 'attack'. Create a public constructor that sets each to 50. Create a public function called 'print_Info' with void return type and no parameters. Then have it print out the health and attack. Create an instance and test the function.
class Fighter {
    private:
        double health;
        double attack;
    public:
        Fighter() {
            health = 50;
            attack = 50;
        }

        void print_Info() {
            std::cout << "health: " << health << std::endl;
            std::cout << "attack: " << attack << std::endl;
        }
};

// 3. Create a class called 'Unicorn_Spottings' with a single private int called count. Then create three public functions called 'get_Count', 'add_Spottings' and 'remove_Spottings'. Return types and parameters should be appropriate. Create a pointer to a class instance and test/output each function result.
class Unicorn_Spottings {
    private:
        int count;
    public:
        int get_Count() {
            return count;
        }

        void add_Spottings(int addition = 1) {
            count = count + addition;
        }

        void remove_Spottings(int removal = 1) {
            if (count >= removal) {
                count = count - removal;
            } else {
                std::cout << "ERROR: removal much larger than existing spottings!" << std::endl;
            }
        }
};

int main() {
    // 1. challenge 1 test
    Vegetable spinach(5);
    Vegetable kale(8);
    Vegetable cabbage(3);
    std::cout << "spinach fiber: " << spinach.get_Fiber() << std::endl;
    std::cout << "kale fiber: " << kale.get_Fiber() << std::endl;

    // 2. challenge 2 test
    Fighter ken;
    std::cout << "\nFighter info: " << std::endl;
    ken.print_Info();

    // 3. challenge 3 test
    Unicorn_Spottings spots;
    std::cout << "\nUnicorn spotted:" << std::endl;
    std::cout << "test initial count: " << spots.get_Count() << std::endl;
    std::cout << "assert error removal to negative count:" << std::endl;
    spots.remove_Spottings(7);
    spots.add_Spottings(5);
    std::cout << "spots after adding 5: " << spots.get_Count() << std::endl;
    spots.remove_Spottings(3);
    std::cout << "spots after remove 3: " << spots.get_Count() << std::endl;
    spots.add_Spottings();
    std::cout << "spots after add by default value: " << spots.get_Count() << std::endl;
    spots.remove_Spottings();
    std::cout << "spots after removal by default value: " << spots.get_Count() << std::endl;
    return 0;
}