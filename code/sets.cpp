#include <iostream>
#include <set>

// Function to check if char is present in char set
void elePresent(std::set<char> s, char c){
    if(s.find(c) != s.end()){
        std::cout << c << " present in set" << std::endl;
    } else {
        std::cout << c << " not found in set" << std::endl;
    }
}

int main(int argc, char const* argv[]) {

    std::set<char> letters = {'a', 'v', 'z', 'd', 'a', 'v', 'e'};
    
    std::cout << "Letters in set from {'a', 'v', 'z', 'd', 'a', 'v', 'e'}:" << std::endl;

    // Using auto keyword, begin and end methods
    for(auto i = letters.begin(); i != letters.end(); i++) {
        // Note dereference operator
        std::cout << *i << std::endl;
    }

    // Erase item
    letters.erase('d');

    std::cout << "Iterating with iterator instead of auto:" << std::endl;
    // Using iterator instead of auto to control type used
    for(std::set<char>::iterator i = letters.begin(); i != letters.end(); i++) {
        // Note dereference operator
        std::cout << *i << std::endl;
    }

    
    elePresent(letters, 'v');

    elePresent(letters, 'h');

    

    return 0;
}