#include <iostream>

// Enums would also be good to represent colour values

enum ErrorNum {
    USER_INPUT_ERR, // Has value 0
    ASYNC_ERR, // Value 1
    PROCESS_ERR = 100, // Value 100
    SYNTAX_ERR // Value 101, note no comma for last item
};

int main(int argc, char const* argv[]) {
    
    // For clarity, can sometimes be better to also specify namespace:
    // ErrorNum err = ErrorNum::USER_INPUT_ERR;
    ErrorNum err = USER_INPUT_ERR;

    std::cout << "First item in enum has value: " << err << std::endl;

    err = ASYNC_ERR;

    std::cout << "Second item in enum has value: " << err << std::endl;

    err = PROCESS_ERR;

    std::cout << "Third item (assigned value in enum) in enum has value: " << err << std::endl;

    err = SYNTAX_ERR;

    std::cout << "Forth item in enum has value: " << err << std::endl;

    return 0;
}