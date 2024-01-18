#include <iostream>

#include <tuple>


int main(int argc, char const* argv[]) {

    // Types must be in order provided
    std::tuple<int, std::string, char> t(4, "hello", 'u');

    // Get value at index 1
    std::cout << std::get<1>(t) << std::endl;

    // Reassign a value - must be same type
    std::get<2>(t) = 'h';
    std::cout << std::get<2>(t) << std::endl;

    // Declare 2 new tuples
    std::tuple<int, int> tuple1(2, 3);
    std::tuple<int, int> tuple2(72, 56);

    // Output all values from tuples
    std::cout << "Tuple values:" << std::endl;
    std::cout << "tuple1: " << std::get<0>(tuple1) << std::endl;
    std::cout << "tuple1: " << std::get<1>(tuple1) << std::endl;
    std::cout << "tuple2: " << std::get<0>(tuple2) << std::endl;
    std::cout << "tuple2: " << std::get<1>(tuple2) << std::endl;

    // Swap values
    tuple1.swap(tuple2);

    std::cout << "values after swapping:" << std::endl;
    std::cout << "tuple1: " << std::get<0>(tuple1) << std::endl;
    std::cout << "tuple1: " << std::get<1>(tuple1) << std::endl;
    std::cout << "tuple2: " << std::get<0>(tuple2) << std::endl;
    std::cout << "tuple2: " << std::get<1>(tuple2) << std::endl;


    // Unpacking a tuple
    int a, b;
    std::tie(a,b) = tuple1;

    std::cout << "Unpacked tuple1 to int variables a: " << a << " and b: " << b << std::endl;
    
    
    // Concatenate tuples
    std::tuple<int, int, int, int> x = std::tuple_cat(tuple1, tuple2);

    std::cout << "Tuples concatenated to a single tuple std::tuple_cat(tuple1, tuple2), values: " << 
    std::get<0>(x) << " " << 
    std::get<1>(x) << " " << 
    std::get<2>(x) << " " << 
    std::get<3>(x) << 
    std::endl;

    return 0;
}