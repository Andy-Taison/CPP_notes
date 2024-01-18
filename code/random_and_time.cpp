#include <iostream>
#include <ctime>
#include <cstdlib>


int main(int argc, char const* argv[]) {

    std::cout << "time elasped since 1st Jan 1970 in seconds: " << time(0) << std::endl;

    std::srand(2);  // Seed for random number gen

    std::cout << "Constant seeded random number: " << std::rand() << std::endl;

    std::srand(time(0)); // Set seed to time to generate different random numbers every second

    std::cout << "Seed now set to time, so should generate different random num every second: " << std::rand() << std::endl;

    std::cout << "Another random number, (rerun to see different values): " << std::rand() << std::endl;

    std::cout << "Random number between 0 and 9 ('std::rand() % 10'): " << std::rand() % 10 << std::endl;

    std::cout << "Random number between 1 and 10 ('(std::rand() % 10) + 1'): " << (std::rand() % 10) + 1 << std::endl;

    return 0;
}