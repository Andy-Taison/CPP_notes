#include <iostream>

// Define base class
class Polygon {
    private: // Will only be accessible from within Polygon class (not child classes)
        const std::string name; // Can declare constants without initialising in classes

    protected: // Accessible from child classes, but not from other function (including main)
        int width, height;

    public: // Accessible from anywhere
        // Sets constant attribute in constructor
        Polygon(std::string name) : name(name){}
        void set_values(int a, int b) {
            this->width=a; 
            this->height=b;
        }
        void getName(){
            std::cout << "name: " << this->name << std::endl;
        }
        
};

// Define derived class (child / Square inherites from Polygon)
// Has access to width and height from here as protected (though would not from main function)
class Square : public Polygon {
        int someVal;
    public:
        // Can call parent constructor and initialise own members this way (or see triangle)
        // If using other objects inside a class, using the initiliser list to set the members value is required 
        // ie -  ' : attribute(value), ... '
        Square(std::string name, int val) : Polygon(name), someVal(val){}

        // Polymorphism (overwritting inherited method)
        void set_values(int a) {
            this->width=a;
            this->height=a;
        }

        int area() {
            return width * height;
        }

        void getVal() {
            std::cout << "Val: " << this->someVal << std::endl;
        }
};

class Triangle : public Polygon {
    int someVal;

    public:
        // Calling parent constructor as well as another way to set own members
        Triangle(std::string name, int val) : Polygon(name){this->someVal = val;}

        int area() {
            return width * height / 2;
        }

        void getVal() {
            std::cout << "Val: " << this->someVal << std::endl;
        }
};



int main(int argc, char const* argv[]) {

    Square sq("Square", 15);
    Triangle trgl("Triangle", 25);
    
    // Can access public methods here
    // Derived classes inherite methods and attributes of parent class
    // Example of poloymorphism (different forms), both sq and trgl are calling the same method (set_values) with different results
    sq.set_values (4); // Uses method defined in square
    trgl.set_values (4,5); // Uses parent method

    std::cout << sq.area() << '\n';
    std::cout << trgl.area() << '\n';

    sq.getName();
    trgl.getName();

    sq.getVal();
    trgl.getVal();


  return 0;
}