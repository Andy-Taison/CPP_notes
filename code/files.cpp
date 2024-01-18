#include <iostream>

#include <fstream>
#include <string>


int main(int argc, char const* argv[]){

// Reading

    // String variable to hold text 
    std::string line;

    // Input File Stream
    std::ifstream myFile("file.txt");

    // Reads first line and prints
    getline(myFile, line); 
    std::cout << line << std::endl;

    // Reads next line and prints
    getline(myFile, line); 
    std::cout << line << std::endl;


    // Reads all lines in file (note did not repeat earlier lines as buffer was not reset)
    while(getline(myFile, line)) {
        std::cout << line << std::endl;
    }
    
    // ALWAYS close file or can cause problems
    myFile.close();


// Writing

    // Output file stream
    std::ofstream myFile2;

    // Requires explicit opening first
    myFile2.open("filew.txt");

    // Write to file (overwrites previous content)
    myFile2 << "Hello World\nI'm writting to file";

    myFile2.close();


    // Opens file in append mode
    myFile2.open("filew.txt", std::ios::app);

    myFile2 << "\nAppending a line";

    myFile2.close();

    return 0;
}