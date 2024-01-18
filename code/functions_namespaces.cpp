#include <iostream>

// Both 'mult' and 'sum' functions here (not namespace sum) are declared in global scope. Better practice to use namespace functions to avoid ambiguity

// Declaring function which exists below where used (in main function) - stops error
int mult(int x, int y);

// Declaring a function in full
int sum(int x, int y) {
    std::cout << "Declared above main. ";
    return x + y;
}


// Declaring a custom namespace
namespace myNamespace {
    int sum(int x, int y) {
        std::cout << "myNamespace sum function (sums + 1). ";
        return (x + y) + 1;
    }
}


/* Can declare which namespace using to avoid putting in front of each statement with:*/
using namespace myNamespace;

int main(int argc, char const* argv[]) {

    // Using a function
    // To explicitly qualify a global identifier, use the scope resolution operator with no name (::some_function(x);)
    // Note if the sum function had not been declared twice here (or 'using namespace'), 'sum(10, 9)' would work fine (as with 'mult' below).
    std::cout << "('sum(10, 9)'): " << ::sum(10,9) << std::endl;

    // Using a function when function is below where used in file
    std::cout << "('mult(5, 5)'): " << mult(5, 5) << std::endl;

    // Using a function in a custom namespace
    std::cout << "('myNamespace::sum(10,9)'): " << myNamespace::sum(10, 9) << std::endl;
}


// Function exists after where used, so requires declaration at top of file
int mult(int x, int y) { 
    std::cout << "Declared below main, but defined at top of file to avoid error. ";
    return x * y;
}