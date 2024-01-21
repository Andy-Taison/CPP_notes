/**
 * To run this file, may need latest version of gcc
 * Along with that, may need to specify thread flag:
 * g++ -pthread threads.cpp -o output && .\output
 * note -pthread may need to be -lpthread depending on version
 * It may not be required at all
*/


#include <iostream>
#include <thread>
#include <chrono> // seconds

bool run = true;

void something() {

    // Outputs thread id
    std::cout << "Worker thread ID: " << std::this_thread::get_id() << std::endl;

    // Infinite loop
    while(run) {
        std::cout << "Hello World" << std::endl;

        // Pauses thread for 1 second
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}


int main(int argc, char const *argv[]) {

    // Outputs thread id
    std::cout << "Main thread ID: " << std::this_thread::get_id() << std::endl;
    
    // Thread created called 'worker' and passed the function 'something'
    std::thread worker(something);

    // Main thread waits for user input
    std::cin.get();

    // Will exit 'something' function
    run = false;

    // Main thread waits for worker thread to finish its execution
    worker.join();

    std::cout << "Finished" << std::endl;
    
    return 0;
}
