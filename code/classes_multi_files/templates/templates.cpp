#include <iostream>

// Declare template 'T'
template <class T>

// Define template function which can be used with different types
T sum(T a, T b) {
    return a + b;
}


int main(int argc, char const* argv[]) {

    int i=5, j=6, k;
    double f=2.1, g=0.6, h;

    k = sum(i,j);
    h = sum(f, g);
    
    std::cout << "k result: " << k << std::endl;
    std::cout << "h result: " << h << std::endl;
    std::cout << "'#' + '$' ASCii values = " << sum('#', '$') << std::endl;

    return 0;
}