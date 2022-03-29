#include <iostream>
#include <string>

class RipTire {
    
    public:
        // make the constructor:
        RipTire() {
            std::cout << "This will be ripped" << std::endl;
        }
        // make the destructor:
        ~RipTire() noexcept { // <- noexcept is to ensure that destructor never failed
            // NOTE destructor begin with ~
            std::cout << "BOOOM!" << std::endl;
        }
};

int main() {
    // instantiate class
    RipTire rip = RipTire();
    // this should just instantiate, construct, and finally destructed.
    return 0;
}