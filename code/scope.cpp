#include <iostream>

int x = 15; // Defining global variable


int main(int argc, char const* argv[]){

    std::cout << "using global variable: " << x << std::endl;

    int x = 20; // Defining local variable ( without 'int', the global will be overwitten)

    std::cout << "local variable takes priority over global: " << x << std::endl;

    std::cout << "using global when local defined using '::<global>' : " << (::x) << std::endl;
    
    return 0;
}