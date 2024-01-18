#include <iostream>

int main(int argc, char const* argv[]) {

    try
    {
        std::cout << "Hello ";
        
        // Throw an exception of type int
        throw 2;
    }
    catch(int err)
    {
        std::cout << "Error: " << err << std::endl;
    }
    
    std::cout << "World" << std::endl;

    try
    {
        std::cout << "Throw a string exception:\n";  

        throw "Error";
    }catch(int err){
        std::cout << "int error caught:" << err;
    }
    catch(...)
    {
        std::cout << "Unknown exception caught, but bad practice!" << std::endl;
    }
    

    return 0;
}
