/*
Header file for Book
Declarations are in a header (.h / .hpp) file (definitions in .cpp file)
*/

// Avoids multiple objects/classes being defined
#ifndef BOOK_H  

#define BOOK_H

#include <iostream>

class Book {
    private:
        std::string title, author;
        int pages;

    public:

        // Default constructor
        Book();
        
        // Overloaded constructor
        Book(std::string _title, std::string author, int pages);

        // Getter methods
        std::string getTitle();
        std::string getAuthor();
        int getPages();

        // Setter methods
        void setTitle(std::string title);
        void setAuthor(std::string author);
        void setPages(int pages);

        // Custom functions
        double calculatePrice(int popularity);

        // Destructor
        ~Book();
};

#endif