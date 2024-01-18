/*
Pass in variables when executing and index argv to access
*/

#include <iostream>

int main(int argc, const char* argv[]) {

    std::cout << "Number of arguments passed in: " << argc << std::endl;

    std::cout << "first argument (output filename), argv[0]: " << argv[0] << std::endl;

    return 0;
}