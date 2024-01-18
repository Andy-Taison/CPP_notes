#include <iostream>

int main(int argc, char const* argv[]) {

    // For loop
    for(int i=0; i<5; i++) {
        std::cout << "loop i: " << i << std::endl;
    }


    // Declare array
    std::string people[] = {"Mike", "Jack", "Andy", "Dave"};
    // Calculate length of array
    int arrLength = sizeof(people) / sizeof(*people);


    // For loop
    for(int i=0; i<arrLength; i++){
        std::cout << "Name(for loop): " << people[i] << std::endl;
    }


    // For each
    for(std::string person : people) {
        std::cout << "Name(for each loop):" << person << std::endl;
    }


    // While loop
    int count = 0;
    while(count < arrLength){
        // Skips "Jack"
        if(count == 2){
            count++;
            continue;
        }

        // Early break
        if(count == 3){
            break;
        }

        std::cout << "Name(while loop): " << people[count] << std::endl;

        count++;
    }


    // Do..while loop
    do
    {
        std::cout << "Name(do loop) - Count not reset, but still runs once: " << people[count] << std::endl;

        count++;
    } while (count < 2);
   
    return 0;
}