#include <iostream>

// A function which creates a copy of the variable passed and so will not affect original
void change(int v) {
    v = 100;
}

// A function where variable is passed by reference
// This WILL change original
void change_ref(int &v) {
    v = 200;
}

// A function which uses a pointer to the variable passed
// This will change original, but requires variable to be passed in as address-of
void change_point(int *v) { 
    *v = 300; // Dereferences v
}


int main(int argc, char const* argv[]) {

    int x = 10;

    // Output address of x
    std::cout << "Address of x: " << &x << std::endl;

    // Declare pointer and set to point at x
    int *p1 = &x;

    // Dereference pointer and set val to store value pointed to by p1
    int val = *p1;

    std::cout << "\nValue stored by val set by dereferencing p1: " << val << std::endl;

    // Declare array
    int arr[5] = {1, 2, 3, 4, 5};

    // Pointer y set to point at arr (address of first element)
    int *y = arr;

    std::cout << "\narr[2] = " << arr[2] << ", *y+2 = " << *y+2 << std::endl;

    // Different ways to increment
    std::cout << "\n*y++ dereferences pointer and then incremements pointer: " << *y++ << std::endl;
    std::cout << "y now points to: " << *y << std::endl;
    std::cout << "\n*++y increments pointer and then dereferences it: " << *++y << std::endl;
    std::cout << "y now pointing to: " << *y << std::endl;
    std::cout << "\n(*y)++ Dereferences pointer and post-increments the value it points to: " << (*y)++ << std::endl;
    std::cout << "y now pointing to: " << *y << "\tarr[2] (used to be 3): " << arr[2] << std::endl;
    std::cout << "\n++*y Dereferences pointer and increments the value it points to: " << ++*y << std::endl;
    std::cout << "arr[2] (used to be 4): " << arr[2] << std::endl;

    // Invalid pointers
    std::cout << "\nNote uninitialised pointers or pointers pointing to an array out of bounds are invalid pointers and can have undefined behaviour, *y+10 (out of bounds): " << *y+10 << std::endl;

    // Set y to be null pointer
    y = nullptr;
    int *z = nullptr;

    std::cout << "\ny is now a null pointer and explicitly points to nowhere (zero): " << y << "\tcomparing y to another null pointer results in: " << (y==z) << std::endl;


    int j = 50;

    std::cout << "\nValue of j: " << j << std::endl;

    change(j);
    std::cout << "Value of j after calling function which creates a copy of variable passed: " << j << std::endl;

    change_ref(j);
    std::cout << "Value of j after calling function which uses address-of variable: " << j << std::endl;

    change_point(&j);
    std::cout << "Value of j after calling function which uses pointer to variable (required passing in as address-of): " << j << std::endl;

    return 0;
}