#include <iostream>


// Define a class with public and private attributes
class Rectangle {

        int width, height;  // Declare private members (attributes)
    private:
        std::string colour; // Another way to declare private members
    public:
        Rectangle();  // Declare default constructor
        Rectangle(std::string); // Declare another constructor (overloading)
        ~Rectangle(); // Declare destructor
        std::string name;  // Declare public member
        int area() { return this->width*this->height; } // Declare & define public inline method
        void set_values(int, int); // Declare "normal" (not-inline) method
        void set_values(int square); // Declaring another method with same name but different params (overloading)
        std::string getColour();

    // Optionally constructor (along with destructor and other methods) can be defined in class:
    /*
    Rectangle() {
        colour = "blue";
    }
    */

} rect; // Object name declared, this is optional


// Define default constructor
// Called when instantiating WITHOUT parenthesis
Rectangle::Rectangle() {
    this->colour = "blue";
}

// Define another constructor (overloading)
Rectangle::Rectangle(std::string colour) {
    // Cannot set param name to be colour if assigning to a variable named the same, must be different.
    // Can use 'this->attribute...' or alternatively, set parameter to have underscore '_colour'
    this->colour = colour;
}


// Defining Destructor (called at end of objects life)  
Rectangle::~Rectangle() {
    std::cout << "Destroying " << this->colour << " Rectangle named: " << this->name << std::endl;
}



// Define "normal" (not-inline) public method
// Note private members are accessible here
void Rectangle::set_values(int width, int height) {
    this->width = width;
    this->height = height;
}

// With overloading, can define method multiple times with different parameters (though must declare all in class)
void Rectangle::set_values(int square) {
    this->width = square;
    this->height = square;
}

// Public method to retrieve private attribute
std::string Rectangle::getColour() {
    return this->colour;
}




int main(int argc, const char* argv[]) {

    // Instantiate
    // Note this would not call the constructor:
    // Rectangle rec_a();
    Rectangle rec_a;

    // Instantiate using the other constructor
    Rectangle rec_b("red");

    // Unable to set or access private attributes (inaccessible)
    // rec_a.width = 5;

    // Set public attribute directly
    rec_a.name = "My rectangle";

    // Set private members via public method
    rec_a.set_values(3, 4);

    // Access public attribute and public method
    std::cout << rec_a.name << " area is: " << rec_a.area() << std::endl;

    // Uses public method to retrieve private attribute set by constructor
    std::cout << "Colour set by constructor to: " << rec_a.getColour() << std::endl;

    // Uses public method to retrieve private attribute set by overloaded constructor 
    std::cout << "Colour set by overloaded constructor: " << rec_b.getColour() << std::endl;

    // Setting name of rectangle declared after class definition
    rect.name = "A different rectangle";

    // Access object declared after class definition
    std::cout << "Rectangle instantiated after class definition has the name: " << rect.name << std::endl;
    
    // Change values with 2nd set_values method 
    rec_a.set_values(5);
    std::cout << "Rectangle is now a square with sides 5, area: " << rec_a.area() << std::endl;

    return 0;
}