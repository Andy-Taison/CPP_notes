/*
c++ file for Book class definitions
*/

#include "Book.hpp"

// Default constructor
Book::Book() {
    title = "No Title";
    author = "No Author";
    pages = 0;
}

// Overloaded constructor
Book::Book(std::string title, std::string author, int pages) {
    this->title = title;
    this->author = author;
    this->pages = pages;
}


// Getter methods
std::string Book::getTitle() {
    return this->title;
}

std::string Book::getAuthor() {
    return this->author;
}

int Book::getPages() {
    return this->pages * 2;  // front and back
}


// Setter methods
void Book::setTitle(std::string title) {
    std::cout << "Setting title" << std::endl;
    this->title = title;
}

void Book::setAuthor(std::string author) {
    std::cout << "Setting author" << std::endl;
    this->author = author;
}

void Book::setPages(int pages) {
    std::cout << "setting pages" << std::endl;
    this->pages = pages;  // front and back
}


// Custom functions
double Book::calculatePrice(int popularity) {
    if(popularity > 5){
        return this->pages * popularity;
    }else{
        return this->pages * 3;
    }
}


// Destructor
Book::~Book() {
    std::cout << "Destroying Book" << std::endl;
}