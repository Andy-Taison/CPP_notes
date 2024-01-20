#include <iostream>
#include "Vector.hpp" 

int main(int argc, char const* argv[]) {

    Vector playerPos(20);
    Vector enemyPos(30);

    std::cout << "x dist: " << enemyPos - playerPos << std::endl;

    return 0;
}