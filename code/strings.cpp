#include <iostream>
#include <string>

int main() {
    // Create a string variable
    std::string str = "Hello";
    std::cout << str << std::endl;

    // One method to append
    str += " World";
    std::cout << str << std::endl;

    // Another method to append
    str.append("!!!");
    std::cout << str << std::endl;

    // Removes last char
    str.pop_back();
    std::cout << str << std::endl;

    // Copy string and compare
    std::string str2 = str;
    std::cout << "strings are the same: " << str.compare(str2) << std::endl;

    // Note 0 when same, and NOT 0 otherwise
    str.pop_back();
    std::cout << "strings NOT same: " << str.compare(str2) << std::endl;
    std::cout << "strings NOT same: " << str2.compare(str) << std::endl;
    
    // Return index position of first match
    std::cout << "index of 'Wor' in " << str << ": " << str.find("Wor") << std::endl;

    // Returns string::npos if no match
    std::cout << "When no match (std::npos): " << str.find("bye") << std::endl; 

    // Find last
    std::string str3 = "once upon a time there was a story";
    std::cout << "find last 'a' in [" << str3 << "]: " << str3.rfind("a") << std::endl;

    // Find a char from list
    std::cout << "find first of 'ethr' within [" << str3 << "]" << str3.find_first_of("ethr") << std::endl;

    // Find first char not listed
    std::cout << "find first not of 'cn oe' in [" << str3 << "]" << str3.find_first_not_of("cn oe") << std::endl; 

    // Erase
    std::cout << "erasing from index 6 in [" << str3 << "]: " << str3.erase(6) << std::endl;

    // Replace
    std::cout << "replacing from index 6, 5 chars in [" << str << "]: ";
    str.replace(6,5,"And");
    std::cout << str << std::endl;

    // Insert
    str.insert(9,"y");
    std::cout << "inserting 'y' at index 9: " << str << std::endl;

    // Combining methods
    std::string test = "there is some other";
    std::string test_org = test;
    test.insert(test.find("some") + 4, "thing");
    std::cout << "find 'some' in [" << test_org << "], add 4 to index and insert 'thing': " << test << std::endl;
}