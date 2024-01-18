#include <iostream>

#include <vector>
#include <algorithm>

// Allows type to not be specified for function
template <typename T>

// Function to iterate and print values from a vector with optional message prior to printing values
void print(std::vector<T> v, std::string m=""){

    // prints optional message
    if(m != ""){
        std::cout << m << std::endl;
    }

    // prints vectors values 
    for(T e : v) {
            std::cout << e << " ";
    }

    std::cout << std::endl;
}


int main(int argc, char const* argv[]) {

    // Define and populate a vector of ints
    std::vector<int> numbers = {6, 8, 1, 2, -4, 7, 3};

    print(numbers, "\nVector numbers:");
    // Sort numbers vector
    std::sort(numbers.begin(), numbers.end());
    print(numbers, "Vector numbers after sorting:");


    // Declare vector of chars
    std::vector<char> letters = {'z', 'Y', 'c', 'A', 'n'};

    // Sorting letters and skipping 1st element
    print(letters, "\nVector letters:");
    std::sort(letters.begin()+1, letters.end());
    print(letters, "Vector letters after sorting (skipping first element):");


    // Sorting numbers descending with lambda comparator
    numbers = {5, 7, 2, 3, 53, 25};
    print(numbers, "\nNew numbers vector:");
    std::sort(numbers.begin(), numbers.end(), [](int a, int b){ return a>b; });
    print(numbers, "Numbers descending:");

    return 0;
}