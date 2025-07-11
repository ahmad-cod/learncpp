#include <iostream>

// std::boolalpha is a C++ I/O manipulator used with streams (like std::cout and std::cin) to control
//  how boolean values are displayed or interpreted.

int main() {
    bool myBool = true;

    // Default behavior (prints 1 or 0)
    std::cout << "Default: " << myBool << std::endl; 

    // Using std::boolalpha (prints true or false)
    std::cout << "With boolalpha: " << std::boolalpha << myBool << std::endl;

    // Reverting to default behavior with std::noboolalpha
    std::cout << "Reverted: " << std::noboolalpha << myBool << std::endl;

    return 0;
}