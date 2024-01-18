#include <iostream>

#include <map>


// Function to check if key is present in map
void checkKeyPresent(std::map<std::string, int> m, std::string k) {
    
    std::cout << k << (m.find(k) != m.end() ? " found in map" : " not found in map") << std::endl;
}


// Function to print out map keys or values depending on argument
void iterate(std::map<std::string, int> m, char k_v) {
    switch (k_v) {
        case 'k':
            std::cout << "iterating map keys: " << std::endl;
            break;
        case 'v':
            std::cout << "iterating map values: " << std::endl;
            break;
        default:
            std::cout << "k_v parameter must either be 'k' or 'v'" << std::endl;
            return;
    }
    

    for(auto i = m.begin(); i != m.end(); i++){
        switch (k_v) {
            case 'k':
                // Outputs keys
                std::cout << i->first << std::endl; 
                break;
            case 'v':
                // Outputs values
                std::cout << i->second << std::endl; 
                break;
        }
    }

    std::cout << std::endl;
}


int main(int argc, char const* argv[]) {

    std::map<std::string, int> person = {
        {"age", 30},
        {"height", 175},
        {"cars", 2}
    };

    // Access value by key
    std::cout << "persons height: " << person["height"] << std::endl;

    checkKeyPresent(person, "age");
    checkKeyPresent(person, "children");

    iterate(person, 'k');
    iterate(person, 'v');

    // Change value
    person["height"] = 180;

    std::cout << "persons corrected height: " << person["height"] << std::endl;


    // Add key value pair - will change value if key already exists
    person["children"] = 2;

    // Another way to insert key/value pair, however will do nothing if key already exists
    person.insert(std::pair<std::string, int>("children", 3));

    std::cout << "persons number of children (new key value pair added): " << person["children"] << std::endl;


    // Get number of key/value pairs
    std::cout << "number of key/value pairs: " << person.size() << std::endl;


    // Destroy key/value pair - reduces size
    person.erase("children");

    std::cout << "number of key/value pairs after erasing 'children': " << person.size() << std::endl;

    std::cout << "map empty?: " << person.empty() << std::endl;

    // Destroy all key/value pairs
    person.clear();

    std::cout << "number of key/value pairs after clearing: " << person.size() << std::endl;

    std::cout << "map empty?: " << person.empty() << std::endl;

    return 0;
}