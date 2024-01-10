#include <iostream>
#include <string>

int main() {

    // Getting single inputs
    std::cout << "Please enter your age and name: ";

    int age;
    std::string name;

    // Gets user input from console in
    // Will wait for 2nd input if not given
    std::cin >> age >> name;

    std::cout << "You are " << age << " old " << name << std::endl;


    // Ignores previously entered in buffer
    std::cin.ignore();

    // Getting a line input
    std::cout << "Please enter your description: ";

    std::string desc;

    std::getline(std::cin, desc);

    std::cout << "Description: " << desc << std::endl;
}