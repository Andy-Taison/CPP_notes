/*
Demonstration of operator overloading declared as member and non-member functions
*/

#include <iostream>
#include <string>


// Class defining a coordinate vector
class CVector {
    private:
        int x, y;

    public:
        CVector () {}; // Constructor (no params)
        CVector (int a, int b) : x(a), y(b) {}; // Constructor (params passed)

        // Declaring operator overloading function (defined outside class but member function)
        CVector operator+(const CVector&); 

        // Declaring non-member function as friend so has access to private members
        friend CVector operator-(const CVector&, const CVector&);

        // String representation of object using output stream operator overloading (note this must be implemented as a non-member function)
        // This allows the object to be used directly in 'std::cout << obj;'
        friend std::ostream &operator<<(std::ostream &os, const CVector &vector) { 
            os << vector.x << ", " << vector.y;
            return os;
        }
};


// Defining member function for operator overloading
CVector CVector::operator+(const CVector &param) {
    CVector temp;
    temp.x = this->x + param.x;
    temp.y = this->y + param.y;
    return temp;
}

// Defining non-member function for operator overloading
CVector operator-(const CVector &obj1, const CVector &obj2) {
    CVector temp;
    temp.x = obj1.x - obj2.x;
    temp.y = obj1.y - obj2.y;
    return temp;
}


int main(int argc, char const* argv[]) {

    // Instantiate objects
    CVector foo(3, 4);
    CVector bar(5, 8);
    CVector result;

    // Using member function
    result = foo + bar;

    // Using output stream operator overloading function to allow inserting the object directly in std::cout
    std::cout << "foos coordinates: " << foo << std::endl;
    std::cout << "bars coordinates: " << bar << std::endl;
    std::cout << "result coordintates from '+': " << result << std::endl;
    
    // Using non-member function
    result = foo - bar;

    std::cout << "foos coordinates: " << foo << std::endl;
    std::cout << "bars coordinates: " << bar << std::endl;
    std::cout << "result coordintates from '-': " << result << std::endl;

    return 0;
}