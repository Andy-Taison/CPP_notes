/*
Main file which uses Book class
Ensure to compile both main.cpp and Book.cpp files:

g++ main.cpp Book.cpp -o output && .\output
*/

#include "Book.hpp"

int main(int argc, char const* argv[]) {

    Book myBook;
    myBook.setTitle("Speed");
    myBook.setAuthor("Jack");
    myBook.setPages(23);

    std::cout << myBook.getTitle() << std::endl;
    std::cout << myBook.getAuthor() << std::endl;
    std::cout << myBook.getPages() << std::endl;

    std::cout << "Calculated price (popularity 7): " << myBook.calculatePrice(7) << std::endl;
    std::cout << "Calculated price (popularity 3): " << myBook.calculatePrice(3) << std::endl;
    

    return 0;
}
