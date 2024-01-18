#include <iostream>

#include <array>  // STL (Standard template Library) array library (not used for standard arrays as first examples below)

#include <vector>  // Vectors are arrays which know their size

int main(int argc, char const* argv[]){

    // Declare a fixed size array and populate
    int arr[5] = {5, 7, 9, 0, 2};
    // Index vals:0, 1, 2, 3, 4

    std::cout << "If try to output array, get address: " << arr << std::endl;

    std::cout << "Output with index to access val: " << arr[2] << std::endl;


    // Declare unknown size array and populate
    int arr2[] = {5, 7, 9, 0, 2, 5, 8, 4};

    std::cout << "Access arr2: " << arr2[6] << std::endl;
    
    // Get size of array
    std::cout << "Find size of array 'sizeof(<arr>) / sizeof(*<arr>)': " << sizeof(arr2) / sizeof(*arr2) << std::endl;
    
    // Nested array
    // Can specify size of outter array (or not), however nested array requires specifying
    int nest[][3] = {
        {1, 2, 3},
        {0, 1, 0},
        {1, 2, 3}
    };

    std::cout << "Access nested array: " << nest[2][1] << std::endl;




    // Using STL array library
    // Declary array
    std::array<int, 4> ages = {55, 27, 35, 40};

    // Output size of array
    std::cout << "size of array using STL lib: " << ages.size() << std::endl;

    // First element of array
    std::cout << "First ele: " << ages.front() << std::endl;
    
    // Last element of array
    std::cout << "Last ele: " << ages.back() << std::endl;

    // Access index that does not exist
    std::cout << "Regular indexing when does not exist: " << ages[4] << std::endl;
    try{
        std::cout << "Using .at(<index) when index does not exist (aborts): " << ages.at(4);
    }catch(std::out_of_range) {
        std::cout << "\tstd::out_of_range error thrown!" << std::endl;
    }

    // Fill array with values
    ages.fill(10);
    for(int i : ages){
        std::cout << "array filled with 10's: " << i << std::endl;
    }





    // Using vectors
    //Declare a vector
    std::vector<int> data = {1, 4, 5, 6};

    // Iterate vector
    std::cout << "Outputting vector values:\n";
    for(int i : data) {
        std::cout << "\t" << i << std::endl;
    }

    // Get length of vector
    std::cout << "Vector current size: " << data.size() << std::endl;

    // Append to vector
    data.push_back(69);

    std::cout << "Vector new size after adding element with push_back(): " << data.size() << std::endl;

    // Resizes and intialises new elements to 0
    data.resize(9);


    std::cout << "Vector new size after resize: " << data.size() << std::endl;

    // Add element at index 5
    data[5] = 2;

    std::cout << "Outputting vector values after resize and adding ele at index 5:\n";
    for(int i : data) {
        std::cout << "\t" << i << std::endl;
    }

    // Access element which does not exist
    std::cout << "Access element which does not exist: " << data[9] << std::endl;


    // Resizes to empty array
    data.resize(0);
    std::cout << "Is array empty after resizing to 0: " << data.empty();

    // Sets data to be size 6 with all elements value 10
    data.assign(6, 10);

    std::cout << "Assigned 6 10's to vector: " << std::endl;
    for(int i : data) {
        std::cout << i << std::endl;
    }

    data.clear();

    std::cout << "Vector size after clear(): " << data.size() << std::endl;

    
    // Declare nested vectors - Note do not need to be same size
    std::vector<std::vector<int>> data2 = {
        {5,7,8},
        {3, 5, 8, 234, 3},
        {5}
    };

    std::cout << "Iterate nested vector values: " << std::endl;
    for(std::vector<int> v : data2) {
        for (int i : v) {
            std::cout << i << " ";
        }

        std::cout << "\n----" << std::endl;
    }

    return 0;
}