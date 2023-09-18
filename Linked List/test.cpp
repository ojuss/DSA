#include <iostream>

int main() {
    int x = 42;
    int* ptr = &x;   // Single pointer pointing to an integer

    int** doublePtr = &ptr;  // Double pointer pointing to a pointer

    // Access the value using the double pointer
    std::cout << ptr << std::endl;
    std::cout << &ptr << std::endl;

    std::cout << "Value using double pointer: " << **doublePtr << std::endl;

    // Modify the value using the double pointer
    **doublePtr = 10;
    std::cout << "Modified value using double pointer: " << **doublePtr << std::endl;

    return 0;
}
