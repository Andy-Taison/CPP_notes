#include <iostream>

// Less common to use namespace like this as could cause issues if libraries are also using same namespace.
// More common to add std:: in front of cout and endl
using namespace std;

// argc and argv are not required, however they provide a way to access console parameters
int main(int argc, char const *argv[]) {
    /*
    'cout' is console out
    '<< endl' is optional, and adds a new line to the output
    */
    cout << "Hello!\n" << 19 << endl;

    // 'return' is optional in cpp
    return 0;
}