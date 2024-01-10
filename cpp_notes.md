# <center>CPP Notes</center>

<u>Compile</u>

`g++ <filename> -o <output_name>`  
* gcc can be used instead of g++  
* Output name is optional, default is a.exe (extension does not need specifying)  

`.\<filename>`  
* Runs compiled file
* Can compile and run in one line using `&&`  

---  

<u>Outputs</u>  

`std::cout << "Hello" << <int data> << std::endl;`  
* Output to console whatever follows the insertion operator `<<` ("put to")  
* * Part of iostream library `#include <iostream>`  
* `<int data>` above is example of adding a number or variable to output  
* Optionally follow with `<< std::endl` to add new line  

`printf("Hello %i", <int data>);`
* c method to output to console  
* Can be used to pass data into the output  

---  

<u>User input</u>

`std::cin >> <variable_to_store>;`  
* Good for getting words or small inputs  
* Part of iostream library `#include <iostream>`  
* Stores input in variable which follows extraction operator `>>` ("get from") 

`std::getline(std::cin, <variable_to_store>);`  
* Gets line of user input and stores in variable  
* Part of string library `#include <string>`  
* Note if used after `cin` has already been used, then must first **ignore whats already in the buffer** `std::cin.ignore();`

---  

<u>Namespaces</u>  

`using namespace std;`
* Can be included as shown at top of file, however **more common to use `std::`** in front of `cout` and `endl`, as `using namespace std;` **can cause issues** if libraries are also using the namespace  

---  

<u>Data types</u>  

|Type|How to declare|Example|Note|
|:--:|:--:|:--:|:--:|
|Char|char letter = 'b';|'a'|Must use single quotes<br>Can be used to store ascii values when assigned to a number|
|String|std::string myName = "Andy";|"Dave"|Must use double quotes|
|Int|int age = 24;|5||
|Float|float num = 3.14159;|||
|Double|double x = 5.234245252525;||longer number|
|Unsigned|unsigned int y = 2;||Unsigned cannot be negative, but allows for twice the largest value of the number type used<br>Assigning to -1 will return the largest value|
|Boolean|bool old = false;|||


---  

<u>Maths</u>

`#include <cmath>`  

`pow(x, y)`  = **x<sup>y</sup>**  
`sqrt(x)`  = **$\sqrt{x}$**  
`round(x)`  = rounds x to **nearest** int  
`floor(x)`  = rounds **down**  
`ceil(x)`  = rounds **up**  
`fmax(x, y)`  = returns highest value  
`fmin(x, y)`  = returns lowest value  

---  