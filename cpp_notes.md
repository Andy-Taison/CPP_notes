# CPP Notes

[Reference](https://cplusplus.com/reference/)  


### <center>Table of Contents</center>  
|Item|Heading|   Sub Contents|
|:---:|:---:|:---:|
| **1.** | [Comments](#comments) | Single,<br>Multi,<br>Document |
| **2.** | [Compile](#compile) | [Compiling](#compile),<br>[Makefiles](#makefiles),<br>[CMake Basics](#cmake-basics) |
| **3.** | [Include Libraries/Files](#include-librariesfiles) | [#include](#include-librariesfiles),<br>[Custom Header Files](#custom-header-files),<br>[bits/stdc++.h](#bitsstdch) |
| **4.** | [Standard Libraries and Functions](#standard-libraries-and-functions) | |
| **5.** | [Command Line Arguments](#command-line-arguments) | argc,<br>argv |
| **6.** | [Outputs](#outputs) | [std::cout](#stdcout),<br>[printf](#printf),<br>[std::cerr - Standard Error Stream](#stdcerr--standard-error-stream) |
| **7.** | [User Input](#user-input) | cin,<br>get,<br>getline |
| **8.** | [Namespaces](#namespaces) | [Using namespace](#namespaces),<br>[Namespace Functions](#custom-namespaces) |
| **9.** | [Scopes](#scopes) | Global,<br>Local |
| **10.** | [Data Types](#data-types) | [const](#const-keyword),<br>[static](#static-keyword),<br>[auto Keyword](#auto-keyword),<br>[Type Promotion](#type-promotion-and-conversion),<br>[size() - Runtime Size of Containers](#size---runtime-size-of-containers),<br>[sizeof()](#sizeof),<br>[size_t - unsigned type for sizes](#size_t--unsigned-type-for-sizes),<br>[limits.h](#limitsh),<br>[Data Types List](#data-types---list),<br>[Finding the Type of an Object (typeid)](#finding-the-type-of-an-object-typeid),<br>[Aliases](#aliases),<br>[#define (Macros)](#define-macros),<br>[Conditional Inclusions](#conditional-inclusions) |
| **11.** | [Pointers](#pointers) | [Declare](#pointers),<br>[Address-of-Operator](#pointers),<br>[Dereference Operator](#pointers),<br>[Incrementing](#incrementing),<br>[Const Pointers](#constant-pointers),<br>[Void Pointers](#void-pointers),<br>[Invalid Pointers](#invalid-pointers),<br>[Null Pointers](#null-pointers),<br>[Dynamic Memory](#dynamic-memory),<br>[Checking Allocation](#check-allocation-successful),<br>[Smart Pointers](#smart-pointers) |  
| **12.** | [Iterators](#iterators) | |
| **13.** | [Strings](#strings) | String Methods |
| **14.** | [Regex](#regex) | Pattern Matching |
| **15.** | [STL Container Comparison](#stl-container-comparison) |
| **16.** | [Arrays](#arrays) | [Standard arrays](#arrays),<br>[STL Arrays](#stl-arrays),<br>[STL Vectors](#stl-vectors),<br>[Sort](#sort) |
| **17.** | [Lists](#lists) | |
| **18.** | [Deque](#deque) | |
| **19.** | [Queues](#queues) | |
| **20.** | [Stacks](#stacks) | |
| **21.** | [Maps (Dictionaries)](#maps-dictionaries) | [Maps](#maps-dictionaries),<br>[Multimaps](#multimaps),<br>[std::unordered_map](#stdunordered_map) |
| **22.** | [Sets](#sets) | [Sets](#sets),<br>[std::unordered_set](#stdunordered_set) |
| **23.** | [Pairs](#pairs) | |
| **24.** | [Tuples](#tuples) | |
| **25.** | [Algorithms Library](#algorithms-library) | [Algorithms List](#algorithms-library) |
| **26.** | [Maths](#maths) | cmath |
| **27.** | [numeric](#numeric) | Reduction/aggregation operations |
| **28.** | [Control Statements & Flow](#control-statements--flow) | [If](#if-statement),<br>[Ternary Operator](#ternary-operator),<br>[Switch](#switch-statement),<br>[Comparison & Logic Operators](#comparison--logic-operators),<br>[Jump](#jump-statements) |
| **29.** | [Loops](#loops) | [For](#for),<br>[For Each (Range-Based)](#for-each-range-based),<br>[While](#while),<br>[Do](#do) |
| **30.** | [Functions](#functions) | [Function Declaration](#functions),<br>[Function Overloading](#function-overloading),<br>[Lambda Functions](#lambda-functions),<br>[Optional Return Values](#optional-return-values) |
| **31.** | [Classes & Struts](#classes--struts) | [Class Definition](#class-definition--inline-methods),<br>[Inline Methods](#class-definition--inline-methods),<br>[Static Members](#class-definition--inline-methods),<br>[toString](#class-definition--inline-methods),<br>[Normal (Not-inline) Methods](#normal-not-inline-methods),<br>[Constructor](#constructor),<br>[default Keyword](#default-keyword),<br>[explicit Keyword](#explicit-keyword),<br>[Destructor](#destructor),<br>[Copy Constructor vs Copy Assignment Operator](#copy-constructor-vs-copy-assignment-operator),<br>[Disable Copying of Class](#disable-copying-of-class),<br>[Rule of 0 / 3 / 5](#rule-of-0--3--5),<br>[Move Semantics](#move-semantics-c11),<br>[Instantiation & Member Access](#instantiation--member-access),<br>[Inheritance](#inheritance),<br>[Polymorphism](#inheritance),<br>[Virtual Functions and Override](#virtual-functions-and-override),<br>[Object Slicing](#object-slicing),<br>[Friend Functions](#friend-functions),<br>[Operator Overloading](#operator-overloading),<br>[Templates](#templates),<br>[Structs](#structs) |
| **32.** | [RAII (Resource Acquisition Is Initialisation)](#raii-resource-acquisition-is-initialisation) | |
| **33.** | [Enums](#enums) | [Traditional Enum](#traditional-enums),<br>[Enum Class](#enum-class) |
| **34.** | [Error Handling](#error-handling) | [Throw, Try..Catch](#throw-trycatch),<br>[Exception Rules](#exception-rules),<br>[noexcept](#noexcept),<br>[Types of Standard Exceptions](#types-of-standard-exceptions) |
| **35.** | [Time](#time) | [Time](#time),<br>[Random Numbers](#random-numbers) |
| **36.** | [Chrono Library](#chrono-library---time-and-duration) | Time and Duration |
| **37.** | [Filesystem Library](#filesystem-library) | File checking, directory iteration, path manipulations |
| **38.** | [Working With Files](#working-with-files) | [Writing](#working-with-files),<br>[Reading](#working-with-files),<br>[Modes](#modes),<br>[std::stringstream](#stdstringstream),<br>[Parsing CSV Files](#parsing-csv-files) |
| **39.** | [Logging / Writing Logs ](#logging--writing-logs) | |
| **40.** | [ Unit Testing](#unit-testing-in-c) | |
| **41.** | [Threads](#threads) | [Threads](#threads),<br>[Concurrency Basics](#concurrency-basics-for-future-reference) |

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### Comments  

`// Single line comment`  

<br>  

`/*`  
&emsp;`Multi`  
&emsp;`Line`  
&emsp;`Comment`  
`*/`  

<br>  

`/**`  
&emsp;`* Documentation Comments`  
&emsp;`* Optional additional information types shown below:`  
&emsp;`* `  
&emsp;`* @param param1 Description of parameter 1`  
&emsp;`* @param param2 Description of parameter 2`  
&emsp;`* `  
&emsp;`* @return Description of return value`  
&emsp;`* `  
&emsp;`* @brief Brief description of the code element`    
&emsp;`* Note detailed descriptions are just comments`  
&emsp;`* following the * and can span multiple lines`  
&emsp;`* `  
&emsp;`* @throws SomeExceptionType Description of when the function may throw`  
&emsp;`* `  
 &emsp;`* @code` - Example usage of code  
&emsp;`* MyObject obj;`  
&emsp;`* obj.initialize();`  
&emsp;`* obj.doSomething();`  
&emsp;`* @endcode`  
&emsp;`* `  
&emsp;`* @pre Preconditions or requirements before calling the function`  
&emsp;`* @post Postconditions or guarantees after the function is called`  
&emsp;`* `  
&emsp;`* @note Additional notes or remarks`  
&emsp;`* @attention Important information that needs special attention`  
&emsp;`* `  
&emsp;`* @see OtherFunction() Link to another function or documentation`  
&emsp;`* @see SomeClass Link to another class`  
`*/`  

* Using documentation comments for functions, classes and programs can be useful as this can generate tool tips. Software can also be used to automatically generate documentation from these comments  

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### Compile  

`g++ <filename> -o <output_name>`  
* gcc can be used instead of g++  
* Output name is optional, default is a.exe (extension does not need specifying)  
* If compiling **multiple files**, list all in same place `<filename>`. Note **only c++** files require compiling (not header files)  

* Use `-c` flag in front of `filename` to compile to object file. Call again on object files without `-c` to link into an executable  

`.\<filename>`  
* Runs compiled file
* Can compile and run in one line using `&&`  

##### Makefiles  

`target_rule: dependencies_list`  
&emsp;&emsp;`tab_indented_commands`  
e.g.:  
`output: main.o Vector.o`  
&emsp;&emsp;`g++ main.o Vector.o -o output`  
* Makefiles make compilation easy by calling `make`  
* **Filename** should be `Makefile`  
* A list of rules followed by dependencies and below should be tab indented commands to run  
* Makefiles check modification times of the files involved and only executes commands to bring target up to date based on dependencies  
* Each object file dependencie should have its own rule for compiling  
* It is also good practice to have a rule for `clean` which should remove the output files (but would require calling separately with `make clean`)  
* CMakeList files can be used to configure and automatically build make files absracting away platform specific details  

##### CMake Basics  

* CMake is the most common build tool for modern C++ projects  

```cmake
# Create `CMakeLists.txt`:
cmake_minimum_required(VERSION 3.10)
project(MyApp)

set(CMAKE_CXX_STANDARD 17)

add_executable(MyApp main.cpp)
```

```bash
# Usage in bash
mkdir build
cd build
cmake ..
make
./MyApp
```

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### Include Libraries/Files  

`#include <system_header_file>`  
**OR**  
`#include "all_other_header_files"`  
* Use quotes for custom header files  
* `;` NOT used  

##### Custom Header Files  

* Can have extension `.h` (C style) or `.hpp`  
* Good practice to have the following in header file:  
  
&emsp;`#ifndef SOME_CONSTANT` (relate constant to header file name)  
&emsp;`define SOME_CONSTANT`  
&emsp;`#include <relevant_system_libraries>`  
&emsp;`Declare class/functions/variables ...;` (Declare NOT define in a header file)  
&emsp;`#endif`  
* `#ifndef` protects against multiple objects/classes being defined  

* Define functions in `.cpp` file and **ensure to include** `#include "header_filename.hpp"` at top  
* When compiling, need to compile **all** `cpp` files (not header files):  
&emsp;`g++ file1.cpp file2.cpp -o output && .\output`  

<br>

##### bits/stdc++.h

`#include <bits/stdc++.h>`  
* GCC-specific header file that includes **almost all standard libraries**
* Useful in coding competitions and quick testing
* **Not recommended for production code** (not portable, slows down compile time)
* In production code, **explicitly include only the headers you need**  
For example:
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
/*
* Improves compilation time
* Ensures portability across compilers (e.g., MSVC, Clang)
* Makes dependencies explicit, which aids readability and debugging
*/
```

<br>  

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### Standard Libraries and Functions  

##### `<iostream>` - Input/Output  
* `std::cin` — Reads input from standard input (keyboard)  
* `std::cout` — Writes output to standard output (screen)  
* `std::cerr` — Writes error messages to standard error  
* `std::endl` — Inserts a newline and flushes the output stream  
See [User Input](#user-input) and [Outputs](#outputs)  

##### `<iomanip>` — I/O Formatting  
* `std::setw` — Sets the width of the next input/output field  
* `std::setprecision` — Sets the decimal precision for floating-point output  
* `std::fixed` — Displays floating-point numbers in fixed-point notation  
* `std::quoted` — Wraps strings in quotes and escapes special characters  
* `std::boolalpha` — Prints bool values as `true` or `false` instead of `1`/`0`

##### `<cstdlib>` — General Utilities  
* `EXIT_SUCCESS` — Indicates successful program termination  
* `EXIT_FAILURE` — Indicates unsuccessful program termination  
* `std::rand` — Generates a pseudo-random integer  
* `std::abs` — Computes the absolute value of an integer  
* `std::atoi` — Converts a C-string to an integer  
See [Random Numbers](#random-numbers)  

##### `<string>` — Strings  
* `std::string` — Represents a sequence of characters (dynamic string)  
* `std::stoi` — Converts a string to an integer  
* `std::to_string` — Converts a number to a string  
See [Strings](#strings)  

##### `<vector>` — Containers  
* `std::vector` — Dynamic array that resizes automatically  
See [STL Container Comparison](#stl-container-comparison) and [Vectors](#stl-vectors)  

##### `<array>` — Containers  
* `std::array` — Fixed-size array with STL interface  
See [STL Container Comparison](#stl-container-comparison) and [Arrays](#arrays)  

##### `<map>` — Associative Containers  
* `std::map` — Stores key-value pairs sorted by key  
* `std::multimap` — Like map, but allows duplicate keys  
See [STL Container Comparison](#stl-container-comparison) and [Maps](#maps-dictionaries)  

##### `<unordered_map>` — Hash Containers  
* `std::unordered_map` — Stores key-value pairs with fast lookup using hashing  
See [STL Container Comparison](#stl-container-comparison) and [Maps](#maps-dictionaries)  

##### `<set>` — Containers  
* `std::set` — Stores unique values in sorted order  
See [STL Container Comparison](#stl-container-comparison) and [Sets](#sets)  

##### `<algorithm>` — Algorithms  
* `std::sort` — Sorts elements in a range  
* `std::find` — Finds an element in a range  
* `std::count` — Counts occurrences of a value in a range  
* `std::copy` — Copies elements from one range to another  
* `std::transform` — Applies a function to a range and stores the result  
See [Algorithms Library](#algorithms-library)  

##### `<numeric>` — Algorithms  
* `std::accumulate` — Computes the sum (or other result) of a range  
* `std::iota` — Fills a range with sequentially increasing values  
* `std::inner_product` — Computes the inner (dot) product of two ranges  
See [numeric](#numeric) and [Maths](#maths)  

##### `<utility>` — Utilities  
* `std::pair` — Holds two values of possibly different types  
* `std::make_pair` — Creates a pair object without specifying types  
* `std::move` — Enables move semantics (transfers resources)  
* `std::swap` — Swaps the values of two objects  
See [Pairs](#pairs)  

##### `<memory>` — Memory Management  
* `std::unique_ptr` — Smart pointer with sole ownership of a resource  
* `std::shared_ptr` — Smart pointer with shared ownership  
* `std::make_unique` — Creates a unique_ptr safely and efficiently  
See [Smart Pointers](#smart-pointers)  

##### `<functional>` — Function Utilities  
* `std::function` — Type-erased wrapper for callable objects  
* `std::bind` — Binds arguments to a function to create a new callable  
* `std::mem_fn` — Creates a callable object from a member function pointer  

##### `<thread>` — Multithreading  
* `std::thread` — Represents and controls a thread  
* `std::this_thread` — Namespace with utilities for the current thread  
* `std::mutex` — Mutual exclusion for thread-safe code  
See [Threads](#threads)  

##### `<chrono>` — Time  
* `std::chrono::duration` — Represents a span of time  
* `std::chrono::seconds` — Represents a duration in seconds  
* `std::this_thread::sleep_for` — Blocks the current thread for a duration  
See [Chrono Library](#chrono-library---time-and-duration) and [Time](#time)  

##### `<type_traits>` — Type Info & Templates  
* `std::is_same` — Checks if two types are the same  
* `std::enable_if` — Enables/Disables function overloads based on types  
* `std::remove_reference` — Removes reference qualifiers from a type  

<br>  

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### Command Line Arguments

C++ Boilerplate:
`#include <iostream>`  - if using input/output (`cout` / `cin` / `cerr` etc.)  

`// Define any functions`  

`int main(int argc, char const* argv[]) {`  
&emsp;`// code`  

&emsp;`return 0;`
`}`  
* `int argc` and `char const* argv[]` are optional, but allow for command line arguments to be retrieved  
* `return 0;` is optional, but good practice  
  
<br>  

* `argc` = **number** of arguments passed in, note the executable is always passed in as first argument  
* Access arguments by indexing `argv` (0 indexed). Note other things are passed in (environment variables and such). So if index more than custom passed in, then may return something unexpected  
  * `argv[0]` is always the program name  
  * `argv[1]` to `argv[argc-1]` are any additional arguments  
  * `argv[argc]` is always a nullptr  

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### Outputs  

##### std::cout

`std::cout << "Hello" << <int data> << std::endl;`  
* Output to console whatever follows the insertion operator `<<` ("put to")  
* Part of iostream library `#include <iostream>`  
* `<int data>` above is example of adding a number or variable to output  
* Optionally follow with `<< std::endl` to add new line (can also use `"\n"` )  

##### printf()  

`printf("Hello %i", <int data>);`
* c method to output to console  
* Can be used to pass data into the output  
* Must specify type:  

|Type|Symbol|Note|
|:--:|:--:|:--:|
|int|`%i`||
|float|`%f`||
|string|`%s`|Must first convert to character using `c_str()`: `printf("%s", var.c_str());`| 


##### std::cerr – Standard Error Stream

* Used to output **error messages** and diagnostics  
* Writes to **standard error (stderr)** — typically shown in console but separate from `std::cout`  
* **Unbuffered** by default (immediate output), making it **useful for crash/debug logging**  
* Use `std::clog` (buffered error stream) if you want errors with performance buffering  
* Can be redirected separately from `std::cout`  

```cpp
std::cerr << "Error: file not found" << std::endl;
```

Redirecting output in terminal (bash):
```bash
# Here, '1>' redirects 'stdout' and '2>' redirects 'stderr'  
./app 1>output.txt 2>errors.txt
```

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### User Input

`std::cin >> <variable_to_store>;`  
* Good for getting words or small inputs  
* Part of iostream library `#include <iostream>`  
* Stores input in variable which follows extraction operator `>>` ("get from") 

`#include <string>`  
`std::getline(std::cin, <variable_to_store>);`  
* Gets line of user input and stores in variable  
* Part of string library `#include <string>`  
* Note if used after `cin` has already been used, then must first **ignore whats already in the buffer** `std::cin.ignore();`

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### Namespaces  

[Reference](https://cplusplus.com/doc/tutorial/namespaces/#namespace)  

`using namespace std;` - Not recommended in headers  
* Can be included as shown at top of file, however **more common to use `std::`** in front of `cout` and `endl`, as `using namespace std;` **can cause issues** if libraries are also using the namespace  

##### Custom Namespaces  

`namespace <custom_name> {`  
&emsp;`<return_type> <function_name>(<type1> <param1>, <type2> <param2>...) {`  
&emsp;&emsp;`// code`  
&emsp;&emsp;`return_statement;`  
&emsp;`}`  

&emsp;`// Example namespace function`  
&emsp;`int sum(int x, int y) {`  
&emsp;&emsp;`return x + y;`  
&emsp;`}`  
`}`  

`// Using namespace functions`  
`...`  
&emsp;`<custom_name>::sum(10, 9);`  

* Namespaces exist as different libraries may have functions with same name, so can specify which library (or custom namespace) to use function from  
* As with any namespace, custom namespaces can be used with `using namespace <custom_name>;` to save putting `<custom_name>::` in front of each statement    
* If an identifier is not declared in an explicit namespace, it is part of the implicit global namespace. In general, **try to avoid making declarations at global scope when possible**, except for the entry point main Function, which is required to be in the global namespace.  
* To explicitly qualify a global identifier, use the scope resolution operator with no name, as in `::SomeFunction(x);`. This will differentiate the identifier from anything with the same name in any other namespace  

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### Scopes  

[Reference](https://cplusplus.com/doc/tutorial/namespaces/)  

`Global` - Variables defined outside functions at top of file (typically below the includes) are accessible anywhere within the file. Common practice is to proceed global variable names with `g_`  
`Local` - Variables defined within a function are only accessible within that function, these **will take priority over global variables**  
* Variables must be defined with **`<type>`** or variables previously defined will be overwritten  

`::<global>` - Use global variable even when local defined  

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### Data Types  

[Reference](https://cplusplus.com/doc/tutorial/variables/)  
[Type casting reference](https://cplusplus.com/doc/tutorial/typecasting/)  

##### const keyword
`const <type> VAR = val;` - Variables declared `const` are constants and cannot be modified once initialised. Typically declare `VAR` in **capitals** to denote constant. Note this is different to `#define` constants which are preprocessor directives, `const` are program constants  
Different positioning of `const`:  
```cpp
void foo() const	        \\ Member function that does not modify the object
const int x	                \\ x is immutable inside the function
const std::string&	        \\ Reference that can’t be modified
std::string&	                \\ Reference that can be modified
const std::string& bar() const	\\ Returns read-only string, and doesn't modify this
```

##### static keyword
`static` [(storage specifier)](https://en.cppreference.com/w/cpp/language/storage_duration) - The storage for the object is allocated when the program begins and deallocated when the program ends. Only one instance of the object exists. `static` variables in classes are identical and shared across all instances of the class, whereas in functions the value persists across calls   

##### auto keyword
`auto var = expression;`  
* Automatically infers type based on right-hand expression  
* Reduces boilerplate, especially for iterators or templates  
* Use cautiously for readability  
* Use `typeid(var).name()` to check what type `auto` resolved to (for debugging) [see notes on typeid()](#finding-the-type-of-an-object-typeid)  

```cpp
auto x = 5;            // int
auto name = "Andy";    // const char*
auto it = map.begin(); // std::map<Key, Val>::iterator
```

##### Type Promotion and Conversion

* **Integer Promotion** – smaller types (e.g., `char`, `short`) are promoted to `int` during expressions
```cpp
char a = 65;
int b = a + 5;   // a promoted to int
```
* Usual Arithmetic Conversions – when types differ, the smaller or less precise type is promoted:  
  * int + double → result is double
  * float + long → result is float
* Auto uses promotion logic when type deduction happens:  
```cpp
auto x = 5;       // int
auto y = 5.0;     // double
auto z = 'A';     // char promoted to int (if used in arithmetic)

// Can explicitly control promotion using casting:
int x = 5;
double y = static_cast<double>(x);
```  

##### size() - Runtime Size of Containers  

* Returns the **number of elements** in a [container](#container-quick-guide) like `std::vector`, `std::string`, `std::array`, etc.  
* Returns a [size_t](#size_t--unsigned-type-for-sizes)  
* Safe and preferred for loops instead of hardcoding lengths  
* Can be used with `.empty()` for safe checks  

```cpp
std::vector<int> v = {10, 20, 30};
std::cout << v.size(); // Outputs 3

// can be used with .empty()
if (!v.empty()) {
    std::cout << "First element: " << v[0];
}
```

##### sizeof()  
`sizeof(<type>)`  
* Returns the **size in bytes** of a type or variable **at compile time**  
* Always returns a [size_t](#size_t--unsigned-type-for-sizes) value  
* Works on both primitive and user-defined types (though user-defined types may include padding)  
* Use parentheses for types: `sizeof(int)`, but optional for variables: `sizeof var`  
* Not to be confused with [size()](#size---runtime-size-of-containers), which is a runtime function for containers  

```cpp
int x = 5;
std::cout << sizeof(int) << '\n'; // Size of int type: 4 (bytes)
std::cout << sizeof x << '\n';    // Size of variable x: 4 (bytes)
```

##### size_t – Unsigned Type for Sizes

* `size_t` is the standard unsigned integer type used for sizes and indices in C++.
* It is returned by functions like `.size()`, `sizeof()`, and used for indexing STL containers.
* Defined in `<cstddef>`, but also available via most STL headers.  
<br>

* **Avoid mixing** `int` and `size_t` in comparisons — it can cause compiler warnings   
* **Prefer** `size_t` **when iterating over** `.size()` or indexing containers  
* It's an unsigned type, so avoid negative comparisons like `i >= 0` with `size_t`  
* `size_t` is platform-dependent:  
  * On 64-bit systems, it’s typically `unsigned long long`  
  * On 32-bit systems, it’s typically `unsigned int`  

```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> v = {10, 20, 30};

    for (size_t i = 0; i < v.size(); ++i) {
        std::cout << "Element " << i << ": " << v[i] << '\n';
    }
}
```

##### limits.h  
`#include <limits.h>` - Library which contains functions such as `INT_MAX` and `LONG_MIN` to retrieve min and max values  

##### Data Types - List
|Type|How to declare & define|Example|Note|Size (RAM used bytes)|MAX value(signed)|
|:--:|:--:|:--:|:--:|:--:|:--:|
|Char|char letter = 'b';|'a'|Must use single quotes<br>Can be used to store ascii values when assigned to a number|1|127 (ASCII)|
|String|std::string myName = "Andy";|"Dave"|Must use double quotes|24||
|Int|int age = 24;|5||4|2 147 483 647|
|Long Long|long long num = 2257483647;||long also availiable, but appears to behave similar to int|8|9 223 372 036 854 775 807|
|Float|float num = 3.14159;||Up to 7 decimal places|4||
|Double|double x = 5.234245252525;||longer number - up to 15 decimal places|8||
|Unsigned|unsigned int y = 2;||Unsigned cannot be negative, but allows for twice the largest value of the number type used<br>Assigning to -1 will return the largest value|||
|Boolean|bool old = false;|||1||

<br>

### Finding the Type of an Object (typeid)

`#include <typeinfo>`  

Use `typeid(obj).name()` to find an object's dynamic type (mostly for debugging):

* `typeid(obj).name()` returns a `const char*`, but the **output string format is not standardised**  
* For example, on GCC: `int` → "i", `std::string` → `NSt7__cxx1112basic_string...`  
* On MSVC, it may return readable strings like `int`, `std::string`, etc    
* **Use for debugging or tooling**, <u>not for logic</u>  

```cpp
#include <typeinfo>

int a = 5;
std::cout << typeid(a).name();  // Output: "i" (implementation-defined)

// Use with pointers
int* p = &a;
std::cout << typeid(p).name();  // Output: "Pi"
```

For polymorphic types (with virtual functions), it shows the dynamic type:  
```cpp
class Base { public: virtual ~Base() = default; };
class Derived : public Base {};

Base* obj = new Derived;
std::cout << typeid(*obj).name();  // Shows Derived
```

<br>

### Aliases  
[Reference](https://cplusplus.com/doc/tutorial/other_data_types/)  

`typedef <existing_type> <new_type_name>;`  
OR
`using <new_type_name> = <existing_type>;`  
* Identifying types by a different name  
* New aliase can be used same as regular types  

<br>  

### #define (Macros)  
[Reference](https://cplusplus.com/doc/tutorial/preprocessor/)  

* Lines preceeded by a `#` are directives for the preprocessor. The preprocessor examines the code before actual compilation of code begins and resolves all these directives before any code is actually generated by regular statements  

`#define identifier replacement`  
e.g.  
&emsp;`#define MAX 100`  
* Preprocessor directives  
* Usually used for constants  
* Typically `identifier` is **CAPITALISED**  
* Replaces `identifier` anywhere in the code with `replacement`  
* Note **no semicolon**  
* `replacement` does not need to be an int, could be a type e.g.  
&emsp;`#define NUMBER int` - now `NUMBER` can be used instead of `int`  

`#undef identifier`  
* Defined macros are not affected by block structure. A macro lasts until it is undefined with the `#undef` preprocessor directive  

##### Conditional Inclusions  

* These directives allow to include or discard (and not compile) part of the code of a program if a certain condition is met  
* `;` should NOT be used  
* Can be useful to use with `#define DEBUG = true`  

`#ifdef identifier`  - If identifier has been defined  
`#ifndef identifier`  - If identifier has **not** been defined  
`#if condition_true`  - Similar to regular if  
`#else`  - Similar to regular else  
`#elif condition_true` - Similar to else if  
`#endif` - Ends directive   

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### Pointers  

[Reference](https://cplusplus.com/doc/tutorial/pointers/)  

> ✅ Use pointers when:
>  - You need **shared ownership** or lifetime control
> - You are **passing large objects** to avoid copying
> - You are dealing with **polymorphism** or dynamic allocation
> 
> ❌ Use regular variables when:
> - The object has a clear lifetime
> - You don’t need to share or pass by reference

`type *pointer_var;` - Declare a pointer  

`pointer_var = &var;` - Set pointer variable to store the address of var using **address-of operator** `&`  

`val_var = *pointer_var;` - Sets `val_var` to store the **value** that `pointer_var` points to using **dereference operator** `*` (NOT same as pointer declaration)  

`pointer->member;` - Access members of an object through a pointer to that object using the arrow operator `->`  

`a[5]` is equivalent to `*(a+5)` - Arrays are similar to pointers (they point to the first address in the array). The square brackets (offset operator) dereference the variable they follow. Both examples here offset the address by the  index passed  

`++pointer;` - Increments the pointer **by the <u>size</u> of the <u>data type</u> it points to**  

<br>  

##### Incrementing:  
|Syntax|Explination|
|:--:|:--:|
|*p++|Same as *(p++):<br>Increment pointer, and dereference unincremented address|
|*++p|Same as *(++p):<br>Increment pointer, and dereference incremented address|
|++*p|Same as ++(*p):<br>Dereference pointer, and increment the value it points to|
|(*p)++|Dereference pointer, and post-increment the value it points to| 

<br>   

##### Constant Pointers  

`int x = 10;`  
`const int* ptr = &x;` – pointer to a **const int** (value cannot be changed)  
`int* const ptr = &x;` – **const pointer** to an int (address cannot be changed)  
`const int* const ptr = &x;` – const pointer to a const int (neither can change)  

<br>  

##### Void Pointers  

`void *p;`  
* Void pointers point to a value that has no type (and thus also an undetermined length and undetermined dereferencing properties)  
* Any address in a void pointer **needs to be transformed** into some other pointer type that points to a concrete data type before being dereferenced  
* Useful in functions  

<br>  

##### Invalid Pointers  

`int * p;` - Uninitialized pointer  
`int myarray[10];`  
`int * q = myarray+20;` - Element out of bounds  
* Uninitialised pointers and pointers set to point to a value outside of an array (out of bounds) are **invalid pointers**. Accessing such a pointer causes undefined behavior, ranging from an error during runtime to accessing some random value  

<br>  

##### Null Pointers  

`int *p = 0;`  
`int *q = nullptr;`  
`int *r = NULL;` - Older syntax  
`p` will now output `0`  
`p == q` will output `1`  
* **Null pointers** explicitly point to nowhere  
* All null pointers compare equal to other null pointers  

<br>  

##### Dynamic Memory  

[Reference](https://cplusplus.com/doc/tutorial/dynamic/)  

[Smart pointers](#smart-pointers) are **<u>preferred</u>** to avoid memory leaks  

[`<new>` Dynamic Memory Header Reference](https://cplusplus.com/reference/new/)  

`pointer = new type(val);`  
* Allocates new memory on the **heap** to contain one single element of type `type` on the **heap**, you are responsible for memory management (a regular varaible would be allocated on the stack and memory management would be handled automatically)    
* Useful if when you need memory that persists beyond the scope of the current block  
* Defining `(val)` is optional when declaring the pointer, could be defined later  
  
<br>  

`pointer = new type[number_of_elements];`  
* Allocate a block (an array) of elements of type `type`, where number_of_elements is an integer value representing the amount of these  
* Normal arrays size must be defined with a constant expression, whereas dynamic allocation using keyword `new` allows for a **variable to be used for the size**  
  
<br>  

> Dynamic allocations **MUST be <u>deleted</u>** after use:  
&emsp;`delete pointer;` - Releases the memory of a single element allocated using `new`  
&emsp;`delete[] pointer;` -  Releases the memory allocated for arrays of elements using new and a size in brackets  

<br>  

##### Check allocation successful:  

* If allocation fails, exception `std::bad_alloc` will be thrown. This should be handled appropriately (**<u>preferred</u> method for checking successful allocation**):  
&emsp;`try {`  
&emsp;&emsp;`pointer = new type[size];` - Dynamically allocate  
&emsp;&emsp;`// other code`  
&emsp;`} catch (const std::bad_alloc &e) {`  
&emsp;&emsp;`std::cerr << "Error: " << e.what() << std::endl;`  
&emsp;&emsp;`return 1;`  
&emsp;`}`  
&emsp;`delete[] pointer;` - Free memory block  
* Alternatively (Note this **may not work in some environments**. An exception may still be thrown), a simpler method (**but less efficient** since it implies explicitly checking the pointer value returned after each and every allocation) is to use `std::nothrow`:  
&emsp;`include<new>`
&emsp;`pointer = new (std::nothrow) type[size];`  
&emsp;`if(pointer == nullptr) {`  
&emsp;&emsp;`// Error assigning memory. Take measures`  
&emsp;`}`  

<br>  

> Functions `malloc`, `calloc`, `realloc` and `free`, defined in the header `<cstdlib>` (known as `<stdlib.h>` in C) are still availiable in C++, however these should **NOT be mixed** with memory allocated with `new` as may not be compatible  

<br>  

### Smart Pointers  

[Reference](https://cplusplus.com/reference/memory/)  

* Smart pointers manage memory allocation  
* Smart pointers help avoid writing custom copy/move/destruct code (see [Rule of 0](#rule-of-0))

<br>  

##### Unique Pointers  

`#include <memory>`  

`std::unique_ptr<type> pointer_var = std::make_unique<type>(val/var);`  
* Creates a unique pointer  
* `val/var` is optional and only required if pointing to a specific pre-declared object or passing a specific value to the object constructor  
* Unique pointers are a one-to-one relationship and grants exclusive ownership  
* Unique pointers cannot be copied, although ownership can be moved:  
&emsp;`std::unique_ptr<type> pointer_var2 = std::move(original_pointer_var);` - `original_pointer_var` becomes **nullptr**  
* The unique pointer will be deleted and freed once the object is deleted (such as exiting its scope)  

<br>  

##### Shared Pointers  

`#include <memory>`  

`std::shared_ptr<type> pointer_var1 = std::make_shared<type>(val/var);`  
`std::shared_ptr<type> pointer_var2 = pointer_var1;`  
* Creates a shared pointer  
* `pointer_var2` also points to the object that `pointer_var1` points to  
* `val/var` is optional and only required if pointing to a specific pre-declared object or passing a specific value to the object constructor  
* The pointer is only deleted once **all shared pointers** to that object have been deleted (exited scope)  

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---    

### Iterators  

* Like **pointers** for [containers](#stl-container-comparison)  
* Support `++`, `*`, `->` and can loop through container elements (see [pointer incrementing](#incrementing))  
* STL algorithms use iterators (`begin()`, `end()`)  
* Note `end()` points to **one past last valid element**  
* Avoid index-based loops where possible — use range-based or iterators  

```cpp
std::vector<int> v = {1, 2, 3};
for (auto it = v.begin(); it != v.end(); ++it)
    std::cout << *it;
```

```cpp
// Define an iterator
#include <vector>

std::vector<int> v = {1, 2, 3};  // initialise vector

std::vector<int>:: iterator it;  // initialise iterator

it = v.begin();  // sets iterator to point to first element of the vector
```

* You can store the address of an iterator (not common, but possible)  
* Usually avoid storing iterator addresses — iterators may become invalidated  

```cpp
auto it = v.begin();
auto* ptrToIt = &it;
```

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---   

### Strings  

[Library Reference](https://cplusplus.com/reference/string/)  
[Class Reference](https://cplusplus.com/reference/string/string/)  

Also see [std::stringstream](#stdstringstream), which allows strings to be treated as streams. Useful for tokenising or converting between types  

`#include <string>`  

* Most methods below can be combined,  
&emsp;e.g.  
&emsp;`std::string str = "there is some other";`  
&emsp;`str.insert(str.find("some") + 4, "thing");`  
&emsp;>> `"there is something other"`
  
`<string>.length();`  = returns length  
`<string>.size();`  = returns length  
  
`<string>.append(<string2>);`  same as `<string> += <string2>`  

`<string>.pop_back();`  = removes last char  

`<string>.compare(<string2>);`  = compares strings, **returns 0 (same)**, returns another value if not same (see documentation)  

`<string>.substr(<start>, <end>);`  0 indexed, creates substring  

`<string>.find(<find_str>);`  returns index of first char of `find_str` in `string`, note this is case sensitive and will match partial words. Returns `std::npos` when no match  

`<string>.rfind(<find_str>);`  returns index of first char of **last** `find_str` in `string`  

`<string>.find_first_of(<string_list>);`  returns index of first char **within** `string_list` in `string`  

`<string>.find_first_not_of(<string_list>);`  returns index of first char **NOT in** `string_list` (will find spaces if not listed)  

`<string>.erase(<index>);`  erases everything in `string` after index specified  

`<string>.replace(<start>, <#chars>, <replace_str>)`  replaces number of `#chars` from `start` index in `string` with `replace_str`  

`<string>.insert(<index>, <str>)` inserts `str` at `index` in `string`  

`std::stoi(<string>);` Converts string to integer - **Wrap in `try...catch`**. Also see [std::stringstream](#stdstringstream)  

`#include <string>`  
`std::to_string(int_val);` Converts int to string  

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### Regex  

[CPlusPlus.com](https://cplusplus.com/reference/regex/)  
[GeeksForGeeks](https://www.geeksforgeeks.org/cpp/regex-regular-expression-in-c/)  

`#include <regex>`

* For pattern matching  
* Use for string validation, search, and extraction  
* Can be slow – avoid for frequent or performance-critical use  

```cpp
#include <regex>
std::string s = "hello123";
std::regex pattern("\\d+");

if (std::regex_search(s, pattern)) {
    std::cout << "Found number!";
}
```

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### STL Container Comparison

[CppReference.com](https://cppreference.com/w/cpp/container.html)  

###### Container Quick Guide

- Need fast random access? → Use [std::vector](#stl-vectors)  
- Need frequent insert/remove in middle? → Use [std::list](#lists)  
- Need key/value lookup (sorted)? → Use [std::map](#maps-dictionaries)  
- Need fast key/value lookup (unsorted)? → Use [std::unordered_map](#stdunordered_map)  
- Need FIFO queue? → Use [std::queue](#queues)  
- Need LIFO stack? → Use [std::stack](#stacks)  


| Container        | Fast Insert | Fast Lookup | Ordered | Allows Duplicates | Notes                          |
|:--:|-------------|-------------|---------|--------------------|-------------------------------|
| [C-style array](#arrays)<br>[STL Arrays](#stl-arrays)         | ✅ - fixed size at compile time         | ❌         | ✅ (fixed) | ✅          | C-style array, no size info<br><br>Elements can still be reassigned, but not added or removed<br><br>`push_back()` and `resize()` not supported         |
| [vector](#stl-vectors)         | ✅ (end)    | ❌ (linear) | ✅ (in order added) | ✅ | Use when order matters and data is dense<br><br>Can be resized<br><br>Inserting in the middle may be expensive (requires shifting elements) |
| [list](#lists)           | ✅          | ❌         | ✅     | ✅                 | Doubly linked list<br><br>Cannot have elements added in the middle without iterating through to obtain the position - cannot do `mylist[3]`<br><br>Inserting at any position is fast once you have the iterator (constant time)             |
| [deque](#deque)          | ✅ (ends)   | ❌         | ✅     | ✅                 | Double-ended queue             |
| [queue](#queues)          | ✅ (back)   | ❌         | FIFO   | ✅                 | FIFO – push/pop only           |
| [stack](#stacks)          | ✅ (top)    | ❌         | LIFO   | ✅                 | LIFO – push/pop only           |
| [map](#maps-dictionaries)            | ✅ (log n)  | ✅ (log n) | ✅     | ❌                 | Sorted key-value pairs         |
| [multimap](#multimaps)       | ✅ (log n)  | ✅         | ✅     | ✅                 | Multiple values per key        |
| [unordered_map](#stdunordered_map)  | ✅ (avg)    | ✅ (avg)   | ❌     | ❌                 | Fast key access                |
| [set](#sets)            | ✅ (log n)  | ✅ (log n) | ✅     | ❌                 | BST-backed, sorted             |
| [unordered_set](#stdunordered_set)  | ✅ (avg)    | ✅ (avg)   | ❌     | ❌                 | Hash table                     |


**Notes on Object Slicing**  

[See full example](#virtual-functions-and-override)  

When storing derived objects by value in a base-type container (e.g. `std::vector<Animal>`), only the `Animal` portion is copied. The `Dog`/`Cat` parts are **sliced off**.

```cpp
std::vector<Animal> pets;
pets.push_back(Dog()); // Sliced — becomes just Animal
```

Polymorphism only works through pointers or references
Use `std::vector<std::unique_ptr<Animal>>` to avoid slicing

<br>

[⬆ Table of Contents ⬆](#cpp-notes)   

---

### Arrays  

> To use dynamic arrays (with **variables as size**), see [dynamic memory](#dynamic-memory) above  

`<type> <arr_var>[<size>] = {<item1>, <item2>, ...};` - Declare array and populate  
* Declaring size of array is optional  
* Size is **fixed** at compile time (elements can still be reassigned, but not added or removed)
* `push_back()` and `resize()` not supported    
* No bounds checking available  
* Can't resize or use standard container methods  
* See [STL Arrays](#stl-arrays) for a safer and more robust alternative  
<br>
* Use when fixed size is known and performance is critical  
* Avoid for most use cases — prefer `std::array` or `std::vector`

`<arr_var>[<index>];` - Access items by index  

`sizeof(<arr_var>) / sizeof(*<arr_var>);` - Get size of array (number of items)  

`<type> <arr_var>[][<size>] = {`  
&emsp;`{<item> ...},`  
&emsp;`{<item> ...}`  
`};`  
* Declare & populate nested array  
* Size of outer array is optional, however **required for nested**  
* Access nested items `<arr_var>[<row_index>][<col_index>];`  

<br>  

##### STL Arrays  
[Library Reference](https://cplusplus.com/reference/array/)  
[Class Reference](https://cplusplus.com/reference/array/array/)  

* Standard template library arrays  
* Fixed size wrapper around [c-style array](#arrays)  
* Elements can still be reassigned, but not added or removed  
* `push_back()` and `resize()` not supported    
* Maintains its size information (unlike c-style), more robust and safer interface  
* Offers value semantics so it can be passed by value to functions and copied   
* Provided member functions for common array operations `size()`, `empty()`, `at()`, `front()`, `back()`, `data()`
  
`#include <array>`  

`std::array<type, size> var = {item1, item2, ...};`  
e.g.  
&emsp;`std::array<int, 4> ages = {55, 27, 35, 40};`  
* Declary an array using STL lib  

`<var>.front();`  
* First ele of array  

`<var>.back();`  
* Last ele of array  

`<var>.at(<index>);`  
* Access element at index  
* Can still use regular indexing  
* This protects against trying to access an **index which does not exist** as will abort  

`<var>.fill(<value>);`  
* Populates every element in array with value passed  

`<arr1>.swap(<arr2>);`  
* Swaps elements of arr1 with arr2 and vice-versa  


##### STL Vectors  
[Library Reference](https://cplusplus.com/reference/vector/)  
[Class Reference](https://cplusplus.com/reference/vector/vector/)  
* Vectors are like arrays but know their size  
* Can be resized  
* Supports `resize()`, `push_back()`, `pop_back()`, and `insert()`/`erase()` operations  
* **Automatically resizes** when capacity is exceeded  
* Random access is fast (O(1))  
* **Inserting in the middle may be expensive** (requires shifting elements)  

`#include <vector>`  

`std::vector<type> var = {item1, item2, ...};`  
e.g.  
&emsp;`std::vector<int> data = {1, 4, 5, 6};`  
* Can be used with standard 'for each' loop  

`var[index];`  
* Access element at index  
* If out of bounds will return 1 (or address), but not throw an error  
* If want error when out of bounds, use `var.at(index);`  

`<var>.front();`  
* First ele of array  

`<var>.back();`  
* Last ele of array  

`var.push_back(<item>);`  
* Appends item to var  

`var.emplace_back(val);`   
* Adds a new element at the end by **constructing it in-place**  
* Slightly more efficient than `push_back` when the element is a complex object  

`var.size();`  
* Returns vector length  

`var.resize(<new_size>)`  
* Resizes vector and initialises new items as 0  

`var.assign(<new_size>, <initialise_to_value>);`  
* Resizes vector to `new_size` and initialises each to value passed  

`var.erase(<iterator position>);`  
* This will erase the element at the position pointed to by the iterator  
* NOTE you should **reassign the iterator** as can invalidate the iterator causing undefined behaviour  
```cpp
// Erase example showing people less than or equal to 30 being removed from the people vector
for (auto it = people.begin(); it != people.end(); ) {
    if (std::stoi(it->age) <= 30) {
        it = people.erase(it); // Don't increment
    } else {
        ++it;
    }
}
```

`var.clear();`  
* Destroys elements and clears array (size = 0)  

`var.empty();`  
* Checks if array is empty (size == 0, NOT items == 0), returns 1 if true  

`std::vector<std::vector<type>> var = {`  
&emsp;`{item1, item2, ...},`  
&emsp;`{item1},`  
&emsp;`...`  
`};`  
* Nested vectors do not need to be of same size  

`for(std::vector<type> v : var) {`  
&emsp;`for(<type> var : v) {`  
&emsp;&emsp;`std::cout << var << std::endl;`  
&emsp;`}`  
`}`  
* Outputs nested vector values  

##### Sort  
Also see [Algorithms library](#algorithms-library) for more details  
* Used to sort elements in a container (usually vector or array)  
* Sorts by **ascending order** by default using the `<` operator  
* Note: may not preserve the relative order of equal elements. Use `std::stable_sort` if that’s important  
* Works only on random-access iterators (i.e. NOT lists)  

`#include <algorithm>`  

`std::sort(var.begin(), var.end());`  

Custom sorting:  
`std::sort(var.begin(), var.end(), [](int a, int b) {`  
&emsp;`return a > b;`  
`});`  
* Example shows reversing default comparison  

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### Lists  

* Ordered sequence of variables of **the same type**  
* Cannot have elements added in the middle without iterating through to obtain the position - cannot do `mylist[3]`  
* Inserting at any position is fast once you have the iterator (constant time)  

`#include <list>`  
`list<type> var({ele1, ele2...});`  

* Need to loop through a list to print elements. (use `for(type val : var){}`)  

`var.push_front(ele)` add element to beginning of list  
`var.push_back(ele)` add element to end of list  
`var.insert(position_to_insert, args)`  `args` can either be a value, or number of values to insert then the value to fill with, or iterator start and end positions (e.g. another list)  

<br>

[⬆ Table of Contents ⬆](#cpp-notes)

---  

### Deque

* Double-ended queue (pronounced "deck")  
* Fast insert/remove from both front and back  
* Slower random access than `vector`  
* Slightly heavier than vector due to dynamic block allocation  
* Use when you need **fast front/back operations**  

```cpp
#include <deque>
std::deque<int> dq;
dq.push_back(1);
dq.push_front(0);
dq.pop_back();    // removes 1
```

<br>

[⬆ Table of Contents ⬆](#cpp-notes)

---  

### Queues  

* FIFO (First-In, First-Out) container adaptor  
* Built on top of [deque](#deque) by default  
* Use when items must be processed in order  
* **No iterator access**; only `front()` and `back()` are exposed  

```cpp
#include <queue>
std::queue<int> q;
q.push(1);
q.push(2);
q.pop();           // removes 1 but does not return the value  
std::cout << q.front(); // prints 2, accesses value but does not remove
```

<br>

[⬆ Table of Contents ⬆](#cpp-notes)

---  

### Stacks

* LIFO (Last-In, First-Out) container adaptor  
* Built on top of [deque](#deque) by default  
* Use when you **only need push/pop from one side**  
* No access to elements below top  

```cpp
#include <stack>
std::stack<int> s;
s.push(1);
s.push(2);
s.pop();             // removes 2
std::cout << s.top(); // prints 1
```

<br>

[⬆ Table of Contents ⬆](#cpp-notes)

---  

### Maps (Dictionaries)  

[Library Reference](https://cplusplus.com/reference/map/)  
[Class Reference](https://cplusplus.com/reference/map/map)  

`#include <map>`  

`std::map<key_type, value_type> var = {`  
&emsp;`{key1, val},`  
&emsp;`{key2, val},`  
&emsp;`...`  - Last key/val pair is not followed by comma  
`};`    
* Map **keys** are **ordered** and **unique**  
* **Sorted by key** (ascending by default, can change by calling a function as 3rd initialisation argument)  

`std::map<key_type, value_type> var = { {key1, val1}, {key2, val2}... };` Add items when initialising  

Access:  
`var[key];` - Access value, will output default value of 0 if does not exist    
`var.at(key);` - safer, throws exception when not found  

`var[key] = val;` - Add new key value pair or change value  
`var.insert(std::pair<key_type, val_type>(key, val));` - First checks if key exists before inserting pair, does nothing if it does exist  
`var.emplace(key, val);`  
* Adds a new key–value pair like `insert` but **constructs in-place**  
* Slightly more efficient than `insert` if constructing complex objects  

`var.size();` - number of key-value pairs  
`var.empty();` - returns true if empty, 0 = false, 1 = true  
`var.find(key);` - Searches container `var` for `key` and returns an iterator to it if found, otherwise returns iterator to `map::end` (theoretical  element that would follow the last element in the map container)  

Remove:  
`var.erase(key);` - removes key if present  
`var.clear();` - empties map  

Iterate:
Loop through to print items:  
  &emsp;`for (auto item : var) {`  
  &emsp;&emsp;`std::cout << "key: " << item.first << " value: " \<< item.second;}`

OR:
`for(auto i = var.begin(); i != var.end(); i++) {`  
&emsp;`... i->first ...;` - Outputs map key, do something with it  
`}`  
* Iterates map **keys**  
* Iterate map **values** by changing `i->first` to **`i->second`**  
* `auto` deduces type, can be better to use `std::map<key_type, value_type>::iterator var` to control type used  


##### Multimaps

`#include <map>`  
`std::multimap<key_type, value_type> mmap;` - instantiate  
* Allows **multiple values per key** (unlike `map`)
* Items are sorted by key, but **duplicate keys are allowed**  
* Use when multiple values need to be stored under the same key (e.g. logs, categories, lookup with synonyms)  

Insert:
`mmap.insert({key, val});` or `mmap.emplace(key, val);`  

Access all values for a key:  
```cpp
auto range = mmap.equal_range(key);  
for (auto it = range.first; it != range.second; ++it) {  
    std::cout << it->first << " => " << it->second << "\n";  
}
```  

Example:
```cpp
// Multimap: mapping error codes to multiple messages
std::multimap<int, std::string> errorLog;
errorLog.insert({404, "Not Found"});
errorLog.insert({404, "Missing image"});
errorLog.insert({500, "Internal Error"});

for (auto [code, msg] : errorLog)
    std::cout << code << ": " << msg << "\n";
```


##### std::unordered_map  

`#include <unordered_map>`  
* Like `std::map`, but uses **hash table** instead of binary search tree  
* No ordering – keys appear in arbitrary order  
* Faster for large datasets or frequent insert/find  
* Faster average-case lookup  



<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### Sets  

[Library Reference](https://cplusplus.com/reference/set/)  
[Class Reference](https://cplusplus.com/reference/set/set/)  

`#include <set>`  

`std::set<type> var = {ele1, ele2, ...};`  
* Sets are **ordered**  
* Sets are **unique**  

Iterating:
`for(auto i = var.begin(); i != var.end(); i++) {`  
&emsp;`std::cout << *i << std::endl;`  - Note dereference operator
`}`  
* `auto` deduces type, can be better to use `std::set<type>::iterator var` to control type used  
* `begin()` and `end()` methods return an iterator to first element in set and **past-the-end** element respectfully  

`var.erase(ele);` - Removes element from set  

`var.find(ele);` - Searches container `var` and returns an iterator to it if found, otherwise returns iterator to `set::end` (theoretical  element that would follow the last element in the set container)  


##### std::unordered_set

* Like `std::set`, but elements are **unordered**  
* Backed by hash table, not tree  
* Use when you don't need order and want faster lookups  

```cpp
#include <unordered_set>
std::unordered_set<int> nums = {3, 1, 4, 1}; 
```

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### Pairs  

* A container to hold two related values of **possibly different types**  

`std::pair<type1, type2> var = {ele1, ele2};`  
OR  
`auto var = std::make_pair(ele1, ele2);`  

Access:  
`var.first;`
`var.second;`  

Can use comparison operators for two pairs, it will **compare first elements**, if they are equal it then compares the second elements  

`std::tie(var1, var2) = var;` – Unpacks the pair into two variables  
* Requires `#include <tuple>` - [see below](#tuples)  

Can compare two `pair`s using `==`, `<`, etc.  
* Compares `.first`, then `.second` if equal

<br>

[⬆ Table of Contents ⬆](#cpp-notes)   

---  

### Tuples  

[Library Reference](https://cplusplus.com/reference/tuple/)  
[Class Reference](https://cplusplus.com/reference/tuple/tuple)  

* Object capable of holding collection of elements (different types)  

`#include <tuple>`  

`std::tuple<type1, type2,...> var(ele1, ele2,...);`  
OR
`std::tuple<type1, type2,...> var;`  
`var = std::make_tuple(ele1, ele2,...);`
* Declare a tuple  
* Types must be in order corresponding elements are in  
  
`std::get<index>(var);` - Get value from tuple at index specified  

`std::get<index>(var) = new_ele;` - Reassigns value at index, must be **same type**  

`std::tie(var1, var2,...) = tuple;` - Unpacks `tuple` contents to variables as per element positions  
[Tie reference](https://cplusplus.com/reference/tuple/tie/)  

`tuple1.swap(tuple2);` - Swaps elements of `tuple1` with `tuple2` so long as tuples are **same length and types**  

`std::tuple<type1, type2,...> var = std::tuple_cat(tuple1, tuple2,...);` - Concatenates tuples into a single tuple. **Types must match order**  

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### Algorithms Library  

[cplusplus.com](https://cplusplus.com/reference/algorithm/)  reference  
[cppreference.com](https://en.cppreference.com/w/cpp/algorithm.html)  reference  
[w3schools.com](https://www.w3schools.com/cpp/cpp_ref_algorithm.asp)  

`#include <algorithm>`  

* Collection of functions especially designed to be used on ranges of elements (sorting, merging, min/max, various tests ect.)  

| Function          | Purpose                                  |
|-------------------|------------------------------------------|
| [std::sort](#stdsort)       | Sorts a range (e.g. vector)              |
| [std::stable_sort](#stdstable_sort)        | Like `std::sort`, but **preserves relative order** of equal elements     |
| [std::find](#stdfind)       | Finds first matching element             |
| [std::count](#stdcount)      | Counts how many times a value appears    |
| [std::for_each](#stdfor_each)   | Applies function/lambda to each element  |
| [std::transform](#stdtransform)  | Applies function and writes result       |
| [std::copy](#stdcopy)       | Copies one range to another              |
| [std::remove_if](#stdremove_if)  | Removes items conditionally              |
| [std::any_of](#stdany_of--all_of--none_of)     | Returns true if any element matches      |
| [std::all_of](#stdany_of--all_of--none_of)     | Returns true if all elements match       |
| [std::none_of](#stdany_of--all_of--none_of)    | Returns true if none match               |
| [std::accumulate](#stdaccumulate) | Sums or combines values (from `<numeric>`) |
| [std::equal](#stdequal)      | Compares ranges                         |

##### std::sort  
[Sort reference](https://cplusplus.com/reference/algorithm/sort/)  
Also see [Sort](#sort) above  

`std::sort(iterator_first, iterator_last, comparator);` - Sorts iterator (object pointing to some element in a range of elements) in ascending order from first to last  
e.g.
&emsp;`std::sort(vector.begin(), vector.end());`  
* Modifies original variable  
* `comparator` is **optional**, can be a function (incl [lambdas](#lambda-functions)) or strut/object  

##### std::stable_sort  
`#include <algorithm>`

* Like `std::sort`, but **preserves relative order** of equal elements  
* Useful when **secondary criteria** are not explicitly coded but meaningful  
* Slower than `std::sort` (O(n log² n) worst case vs O(n log n))  
* Use [std::sort](#stdsort) unless **stable ordering is essential**  

```cpp
// The "Bob" and "Alice (25)" entries retain their original order because the sort is stable

#include <algorithm>
#include <vector>
#include <string>

struct Person {
    std::string name;
    int age;
};

std::vector<Person> people = {
    {"Alice", 30}, {"Bob", 25}, {"Alice", 25}, {"Charlie", 30}
};

std::stable_sort(people.begin(), people.end(), [](const Person& a, const Person& b) {
    return a.age < b.age;
});
// {"Bob", 25}, {"Alice", 25}, {"Alice", 30}, {"Charlie", 30}
```

##### std::find  

`find(iterator start, iterator end, <type> value);`  
* Finds the **first element** of a data range with a specified value  
* Returns an iterator pointing to the first occurrence of the specified value in the data range, or the end of the data range if the value was not found  

```cpp
std::vector<int> v = {1, 2, 3, 4};
auto it = std::find(v.begin(), v.end(), 3);
if (it != v.end()) std::cout << "Found 3";
```

##### std::count  

`count(iterator start, iterator end, <type> value);`  
* Counts the number of times that a value occurs in a data range  
* Returns an integer representing the number of times the specified value appears in the data range  

```cpp
std::vector<int> v = {1, 2, 3, 3, 3};
int n = std::count(v.begin(), v.end(), 3); // n = 3
```

##### std::for_each  

`for_each(iterator start, iterator end, function fun);`  
* Runs a function on every element in a data range  

```cpp
std::vector<int> v = {1, 2, 3};
std::for_each(v.begin(), v.end(), [](int x){ std::cout << x << " "; });  // Prints elements


// alternatively insert a call to a function 
void add_one(int &value) {
  value++;
}
for_each(numbers.begin(), numbers.end(), add_one);  // Increase each number by one
```

##### std::transform  

`std::transform(start, end, dest_start, func);`  
* Applies `func` to each element and stores in `dest_start`  
* Often used with [lambda](#lambda-functions)  

```cpp
std::vector<int> a = {1, 2, 3};
std::vector<int> b(a.size());

//            source start, source end, dest start, [capture clause](params) {body}
std::transform(a.begin(), a.end(), b.begin(), [](int x) {
    return x * 2;
});
// b is now {2, 4, 6}
```

##### std::copy  

`copy( iterator start, iterator end, iterator destination );`  
* Copies the values from a data range into a different data range  
* Returns an iterator pointing to the end of the destination data range  

```cpp
std::vector<int> v = {1, 2, 3};
std::vector<int> out(3);  // out initialised to {0, 0, 0}
std::copy(v.begin(), v.end(), out.begin());  // out now contains {1, 2, 3}
```

##### std::remove_if  

`remove_if( iterator start, iterator end, function condition, <type> remove );`  
* Removes all values in a data range that satisfy a condition  
* Returns pointer to **new end()**  
* **Must** be used with `erase()` as `remove_if` just moves non-matched elements (those we want to keep) to the front. The old elements remain and the length of the container remains the same as the original  

```cpp
// Removes even numbers
// v without using v.erase() = {1, 3, 3, 4}
#include <vector>
#include <algorithm>

std::vector<int> v = {1, 2, 3, 4};
v.erase(
  // Moves '1' and '3' to positions [0] and [1] - the non matched items to keep
  // Returns pointer to new end which erase() uses as its begin()
  std::remove_if(v.begin(), v.end(), [](int x){ return x % 2 == 0; }), 
  
  // erase() removes elements from the returned new end to v.end() 
  v.end()
);
```

##### std::any_of / all_of / none_of  

`any_of(iterator start, iterator end, function condition);`  
* Returns a boolean value:
&emsp;`1` - if **any / all / none** of the elements matched the condition
&emsp;`0` - otherwise  

```cpp
std::vector<int> v = {1, 2, 3};
std::any_of(v.begin(), v.end(), [](int x){ return x > 2; });  // 1 (true)
std::all_of(v.begin(), v.end(), [](int x){ return x > 0; });  // 1 (true)
std::none_of(v.begin(), v.end(), [](int x){ return x < 0; }); // 1 (true)


// Can also use with a function
bool greater_than_5 (int value) {
  return value > 5;
}
std::any_of(numbers.begin(), numbers.end(), greater_than_5);
```

##### std::accumulate  

`std::accumulate(iterator start, iterator end, initial value, optional operation function - default is addition);`  
* Finds the sum or other accumulated value on the elements in the given range  
* Returns the accumulated value after performing the operation on each element  

```cpp
#include <numeric>
std::vector<int> v = {1, 2, 3};
int sum = std::accumulate(v.begin(), v.end(), 0);  // sum = 6
```

##### std::equal  

`std::equal(iterator 1 start, iterator 1 end, iterator 2 start);`  
* Tests whether two sets of element are equal or not  
* Returns 1 (true) if all the element in the range of `iterator 1 start` to `iterator 1 end` are equal to those of the range starting at `iterator 2 start` otherwise it returns 0 (false)  

```cpp
std::vector<int> a = {1, 2, 3};
std::vector<int> b = {1, 2, 3};
bool same = std::equal(a.begin(), a.end(), b.begin()); // 1 (true)
```

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### Maths

[Reference](https://cplusplus.com/reference/cmath/)  

`#include <cmath>`  

`pow(x, y)`  = **x<sup>y</sup>**  
`sqrt(x)`  = **$\sqrt{x}$**  
`round(x)`  = rounds x to **nearest** int  
`floor(x)`  = rounds **down**  
`ceil(x)`  = rounds **up**  
`fmax(x, y)`  = returns highest value  
`fmin(x, y)`  = returns lowest value  

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### numeric

`#include <numeric>`  

Useful for reduction/aggregation operations  

* `std::accumulate` - sum or combine values in a range  
* `std::inner_product` - dot product  
* `std::partial_sum` - running total  
* `std::adjacent_difference` - differences between adjacent values  

#### Example: accumulate

```cpp
#include <numeric>
std::vector<int> v = {1, 2, 3};
int sum = std::accumulate(v.begin(), v.end(), 0);
```

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### Control Statements & Flow  

[Control tutorial](https://cplusplus.com/doc/tutorial/control/) 

##### If Statement


`if(<condition>){`  
&emsp;`<expression_true>;`  
`}else if(<condition2>){`  
&emsp;`<expression2_true>;`  
`}else{`  
&emsp;`<expression_false>;`  
`}`  

<br>

##### Ternary Operator  

`<variable> = <condition> ? expression_true : expression_false;`  

<br>

##### Switch Statement  

`switch(expression) {`  
&emsp;`case constant1:`  
&emsp;&emsp;`group-of-statments-1;`  
&emsp;&emsp;`break;`  
&emsp;`case constant2:`  
&emsp;&emsp;`group-of-statments-2;`  
&emsp;&emsp;`break;`  
&emsp;`...`  
&emsp;`...`  
&emsp;`default:`  
&emsp;&emsp;`default-group-of-statments;`  
* Note switch is limited to compare its evaluated expression against labels that are **constant expressions**. It is <u>not possible to use variables</u> as labels or ranges  
* `expression` must be an int  
* `default` is optional  
  
<br>

##### Comparison & Logic Operators:  
`==`  equals  
`>=`  greater than or equals  
`!=`  not equal  
`&&`  AND  
`||`  OR  

##### Jump Statements  

[Control tutorial](https://cplusplus.com/doc/tutorial/control/#jumps) 

`break;` - Leaves loop  

`continue;` - Skip current iteration  

`myLabel:`  
&emsp;`//code`  
&emsp;`(optional_condition) goto myLabel;` - Keyword `goto` jumps to label specified  

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### Loops  

[Control tutorial](https://cplusplus.com/doc/tutorial/control/#loops) 

##### For  

`for(<start>; <until>; <increment>) {`  
&emsp;`// code`  
`}`  

`int length = sizeof(<arr>) / sizeof(*<arr>);` - calculate length of array  

`for(int i=0; i<length; i++){`  
&emsp;`std::cout << <arr>[i] << std::endl;`    
`}`  
* `auto` can be used instead of declaring the type for `start` and will be deduced from type of elements in the iterator  
* Iterates an array  
* Can be combined with break and continue statements  

##### For Each (Range-Based)  

* Simplified loop that uses iterators internally  

`for(<type> <var> : <array>) {`  
&emsp;`std::cout << <var> << std::endl;`  
`}`  
* Outputs each element `<var>` of array  

##### While  

`while(<condition_true>){`  
&emsp;`// code`  
`}`  
* Executes loop while condition is true  
* May not execute at all  

##### Do  

`do{`  
&emsp;`// code`  
`} while (<condition_true>);`  
* Executes at least once, checks condition after executing  

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### Functions  

[Reference](https://cplusplus.com/doc/tutorial/functions/)  

* Can be good practice and **more efficient** to pass references to a function (`&var`), rather than using parameters. This is due to parameters cause a copy to be made. 
* Though reference parameter functions are typically perceived as functions to modify the arguments passed, solution...
* Can define reference (parameters) as constansts `const` guaranteeing function will not modify arguments  
* For **short functions**, can reduce overhead by using `inline` in front of function definition. This does not affect the function mechanism, but inserts the function at each call by compiler instead of using more expensive jumps and stacking arguments  
* **Methods** are a set of instructions associated with an object, whereas a **function** is a set of instructions or procedures to perform a specific task (independent of any object)  

`<return_type> <function_name>(<type1> <param1>, <type2> <param2>...) {`  
&emsp;`// code`  
&emsp;`return_statement;`  
`}`  
* Use return type **void** when not returning anything  
* `return statement` only required if there is a `return_type`  
* Set default values setting `param` with `=`  
* **Declare function** before where function is used, usually at top (return type, name and params with types including defaults). Alternatively can have entire function **before main**/where used  
* When assigning `parameters` in function, ensure **`assigned_name` is different to `param`**, or won't work. Alternatively set parameter to have underscore `_param` and variable assigning to to be without. If using object attributes, best practice to use `this->attribute ...;` to refer to    

`template <typename T>`  
`void someFunction(container<T> var) {`  
&emsp;`// code`  
&emsp;`return_statement;`  
`}`  
* Can allow a function to accept a container e.g. `std::vector<T>` with any type by specifying a template with `typename`

##### Function Overloading  
* Define function multiple times with same function name but **<u>different parameters</u>** (**different number of params** and/or **different types**, can also have **different return type**)  
* Allows function to change behaviour when different arguments passed in (different numbers)  

<br>  

##### Lambda Functions  

`[capture_clause](parameters) -> return_type { method }`  
* Unnamed function - used once  
* `-> return_type` is optional and generally evaluated by the compiler so usually not required. Use when return type is not obvious or differs by condition. Though **required** if return type is ambiguous or varies    
* `capture_clause` - for specifying how **external outer-scope variables** are captured:   
&emsp;`[]` : Empty capture clause can only access variables which are local to it  
&emsp;`[=]` : capture all external variables by value  
&emsp;`[&]` : capture all external variables by reference  
&emsp;`[a]`	Capture `a` by value only
&emsp;`[&a]`	Capture `a` by reference only  
&emsp;`[a, &b]` : mixture, capture `a` by value and `b` by reference  

```cpp
// Example
auto add = [](int a, int b) { return a + b; };
std::cout << add(2, 3);  // 5

// Another example
std::vector<int> v = {1, 2, 3};
std::for_each(v.begin(), v.end(), [](int x){
    std::cout << x << "\n";
});

// Example with capture clause and arrow return type
int factor = 10;
// Capture clause: [=] means capture 'factor' by value (the external variable)
// Arrow -> double declares return type explicitly
auto scale = [=](int x) -> double {
    return x * factor * 0.5;
};
std::cout << scale(4);  // Output: 20
```

##### Optional Return Values  

`#include <optional>`

* Better than sentinel values (e.g., -1)  
* Check with if (opt) before accessing  

```cpp
#include <optional>

std::optional<int> maybeDivide(int a, int b) {
    if (b == 0) return std::nullopt;
    return a / b;
}
```

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### Classes & Struts  

[Reference](https://cplusplus.com/doc/tutorial/classes/)  
[Reference2](https://cplusplus.com/doc/tutorial/templates/)  

##### Class Definition & Inline Methods  

Use **class member objects** when an object **HAS-A**  
Use [inheritance](#inheritance) when an object **IS-A**,  

`Class <Class_name>{`  
&emsp;&emsp;`<type> <attribute>;` - Define private attribute  
&emsp;`private:`  
&emsp;&emsp;`<type> <attribute>;`  - Another way to define private attribute  
&emsp;`public:`  
&emsp;&emsp;`<type> <attribute>;`  - Define public attribute  
&emsp;&emsp;`<return_type> <method_name>(<type optional_params>) { return <code>;}`  - Declare public **inline** method  
&emsp;&emsp;`<return_type> <method_name>(<type optional_params>);`  - Declare public **normal (not-inline)** method  
`} object_names;` - Object_names are optional  
* Defines a class with public and private attributes  
* `public` attributes can be accessed from anywhere the class is visible  
* `private` attributes can only be accessed from inside the class (or by other members of the class)  
* If access specifier is not specified or members (attributes) are declared before the specifier, then those members will be `private` by default  
* Inline methods are good for simple methods, otherwise better to use normal not-inline methods where only the declaration is included and the actual definition comes later outside the class (see below)  
* **`static`** `type` `attribute;` - [attributes declared `static`](https://en.cppreference.com/w/cpp/language/static) declares members that are not bound to class instances (one variable/method for all). Note `static` is different outside a class (which means stays in memory after lifetime of function)  
* Most classes should include a **`toString`** method, which should return a string representation of the object (probably consisting of the members):  
e.g.  
&emsp;`std::string Class_name::toString(){`  
&emsp;&emsp;`return <string_attribute(s)> ...;`  
&emsp;`}`  
  * Convert int to string: 
&emsp;`#include <string>`  
&emsp;`std::to_string(int_var);`  
  * This should still be used as a normal function `obj.toString();`  
  
&emsp;&emsp;A **better way** would be to use operator overloading for the output stream (must be implemented as a non-member function):  
&emsp;&emsp;`friend std::ostream &operator<<(std::ostream &os, const <Class> &obj) {`  
&emsp;&emsp;&emsp;`os << class.attr;`  
&emsp;&emsp;&emsp;`return os;`  
&emsp;&emsp;`}`  
&emsp;&emsp;Now the object can be inserted directly into `std::cout << obj;`  
  
<br>  

##### Normal (Not-inline) Methods  

`<return_type> <Class_name>::<method_name>(<type optional_params>) {`  
&emsp;`//code`  
`}`  

`obj.method();` - Call function
* Defining a normal (not-inline) method outside the class.  
* Note **private members (attributes) ARE accessible** within this method  
* Can define multiple times for **method overloading**, however must declare all methods with the varying parameters/return types in the class  
* Best practice to refer to attributes with `this->attribute ...;` Not required, but protects against unexpected behaviour  

<br>  

##### Constructor  

[Reference](https://cplusplus.com/doc/tutorial/classes2/)  

**Define outside class:**  
`<Class_name>::<Class_name>(<type optional_params>) :memberA(value), memberB(value) {`  
&emsp;`//code`  
`};`  
**OR define in class:**  
`class Example{`  
&emsp;&emsp;`int private_number_attribute = default_value;`  
&emsp;`public:`  
&emsp;&emsp;`std::string public_string_attribute;`  

&emsp;`// Constructor`
&emsp;`Example() :memberA(value), memberB(value) {`  - showing initialiser list
&emsp;&emsp;`this->private_number_attribute = 5;`  
&emsp;`}`  
`};`  
* `:memberA(value), memberB(value)` shown above is the constructor initialiser list. This is optional, members can be set either as default values, in the initialiser list, or in the constructor body. But the **initialiser list is <u>preferred</u>**. `const` and **reference** members **MUST** be initialised in the initialiser list - they can't be assigned to in the constructor body  
* Set members in the **order they are declared** to avoid bugs  
* Order of priority for setting member values:  
`[Highest priority] Constructor body > Initialiser list > Default member value`
* **Must declare in class** even if defining outside  
* Defines **constructor** which is automatically called whenever a new object of this class is created  
* Optional to include a constructor at all  
* Can define multiple times for **method overloading** (instantiate with parenthasis and parameters)  
* If no parameters, this will form the **default constructor**. Though note this is only called with:  
&emsp;`<Class_name> var;`  
If empty parenthesis are used, this **WILL NOT** call the default constructor  
* Best practice to refer to attributes with `this->attribute ...;` Not required, but protects against unexpected behaviour  

```cpp
/*
When a constructor is called, the following rules apply:

1. **Default values** in member declarations (e.g. `int x = 5;`)
2. **Initialisation list** in constructor (`: x(10)`)
3. **Assignments in the constructor body**

Order of priority:  
`Constructor body > Initialiser list > Default member value`
*/

class Example {
    int a = 1;          // (1) default member init
public:
    Example() : a(2) {  // (2) constructor init list - overrides default value
        a = 3;          // (3) constructor body - overrides all other init values
    }
};
```

##### default Keyword

* Auto-generates default constructor/operator  
* Use when your class doesn't manage resources but still needs to be constructible/copyable  

```cpp
class Foo {
public:
    Foo() = default;  // compiler provides default constructor
};
```

##### explicit Keyword  

Use `explicit` to <u>prevent</u> **implicit conversions** from one type to your class type  

```cpp
class MyClass {
public:
    explicit MyClass(int x) { ... }
};

MyClass obj1 = 10;        // error (implicit) - would be automatically converted without explicit
MyClass obj2(10);         // ok (explicit)
```

<br>  

##### Destructor  

[Reference](https://cplusplus.com/doc/tutorial/classes2/#destructor)  

**Define outside class:**  
`<Class_name>::~<Class_name>() {`  
&emsp;`//code`  
`};`  
**OR define in class:**  
`class Example{`  
&emsp;&emsp;`...`  

&emsp;`// Constructor`  
&emsp;&emsp;`...`  

&emsp;`// Destructor`
&emsp;`~Example() {`  
&emsp;&emsp;`// code`  
&emsp;`}`  
`};`  
* Optional  
* **Must declare in class** even if defining outside  
* Note tilde `~`  
* Called at **end of objects life**  
* Useful for cleanup (**especially if dynamic memory was used**)  

<br>  

##### Copy Constructor vs Copy Assignment Operator

```cpp
class MyClass {
    int* data;
public:
    // Simple constructor
    MyClass(int val) {
        data = new int(val);
    }

    // Copy constructor (deep copy)
    MyClass(const MyClass& other) {
        data = new int(*other.data);
    }

    // Copy assignment operator (deep copy)
    MyClass& operator=(const MyClass& other) {
        if (this != &other) {
            delete data;
            data = new int(*other.data);
        }
        return *this;
    }

    ~MyClass() { delete data; }  
};

// Use copy constructor when creating a new object from an existing one:
MyClass a(5);
MyClass b = a;   // copy constructor

// Use assignment operator when assigning to an existing object:
MyClass a(5);
MyClass b(10);
b = a;           // copy assignment
```
* Use deep copies if the class owns a pointer or other resource  
* If your class manages memory, always implement **[Rule of 3](#rule-of-0--3--5)**: destructor, copy constructor, and assignment operator  

###### Disable Copying of Class  

```cpp
class MyClass {
public:
    MyClass(const MyClass&) = delete; // Copying not allowed
};
```
If someone tries to write:  
`MyClass b = a;`   
or  
`MyClass b(a);`  
it will cause a compile-time error  

<br>  

##### Rule of 0 / 3 / 5  
###### Rule of 0  
* Using [smart pointers](#smart-pointers) - `std::unique_ptr` or `std::shared_ptr` allows you to rely on the Rule of 0 (no custom destructor/copy/move needed)  
<br>
* If you don’t manage resources, let the compiler generate everything:  
```cpp
class MyClass {
    int x;
    std::string name;
    // Rule of 0: Compiler will auto-generate ctor/dtor/copy/move ops
};
```
* OR use [= default](#default-keyword) keyword to explicitly request compiler-generated functions  
* Use [= delete](#disable-copying-of-class) to prevent undesired operations (e.g., copying):
```cpp
MyClass(const MyClass&) = delete;
MyClass() = default;
```

* Only use Rule of 3 or 5 if **deep copy**, **[RAII](#raii-resource-acquisition-is-initialisation)**, or **ownership semantics** apply  
* Otherwise, prefer Rule of 0 – lean on smart pointers & STL  


###### Rule of 3
If your class manages a **resource** (e.g., <u>dynamic memory</u>, <u>file handle</u>, <u>pointer</u>), you should implement (**ALL**):  
1. **Destructor**  
2. **Copy Constructor**  
3. **Copy Assignment Operator**  

If you implement one, you almost always need all three:
```cpp
class MyClass {
    int* data;
public:
    MyClass(int val);
    ~MyClass();                         // Rule 3: Destructor
    MyClass(const MyClass& other);     // Rule 3: Copy constructor
    MyClass& operator=(const MyClass& other); // Rule 3: Copy assignment
};
```
###### Rule of 5
If your class also needs to support move semantics, implement:  
1. Move Constructor  
2. Move Assignment Operator  
3. And all of [Rule of 3](#rule-of-3)  

```cpp
MyClass(MyClass&& other) noexcept;            // Move constructor
MyClass& operator=(MyClass&& other) noexcept; // Move assignment
```
* Use [noexcept](#noexcept) in move operations when possible  

<br>

##### Move Semantics (C++11+)

`std::move()`  
* Moves resource ownership rather than copying  
* Transfers the pointer to its heap memory avoiding unnecessary copies  
* Useful for performance with **large objects** or **unique_ptrs**
* For user-defined types, define [move constructor and move assignment operator](#rule-of-5) 

```cpp
std::vector<int> a = {1,2,3};
std::vector<int> b = std::move(a); // a becomes empty
```

<br>

##### Instantiation & Member Access  

`<Class> <var>;` - Instantiate a class  

`<var>.<attribute> = <val>;` - Set a public attribute value  

`<var>.<attribute>;` - Access public attribute  
`pointer->attribute;` - Access attributes (members) of an object through a pointer to that object with the arrow operator `->`  

`Class(type var) : const_attribute(val) { //code }` - constant members can be set in constructor. Note `:` (member initiliser list) and is set between `()` and `{}`  

`Class(type var) : Parent(param), attribute(val) {this->another_way_attribute = val;}` - Calls parent constructor as well as sets own members `attribute` value (shown multiple ways) - This way of setting members (using the member initiliser list `': attr(val),...'`) is **REQUIRED** <u>if using other objects inside a class</u>   

<br>  

##### Inheritance  

[Reference](https://cplusplus.com/doc/tutorial/inheritance/#inheritance)  

Use **inheritance** when an object **IS-A**,  
Use [class member objects](#class-definition--inline-methods) when an object **HAS-A**    

`class <Derived_class_name> : <access_specifier> <Parent_class_name> {`  
&emsp;`// code`  
`};`  
* Can inherit from multiple classes at once by comma seperating:  
&emsp;`class <Derived> : <access1> <Parent1>, <access2> <Parent2>,... {...};`
* `derived_class` (child) will have access to all members and methods of `parent_class` as per the `access_specifier`:  

<table style="border-collapse: collapse;">
  <tr>
    <td style="border: 1px solid #000; text-align: center;"><strong>Access</strong></td>
    <td style="border: 1px solid #000; text-align: center;"><strong><code>public</code></strong></td>
    <td style="border: 1px solid #000; text-align: center;"><strong><code>protected</code></strong></td>
    <td style="border: 1px solid #000; text-align: center;"><strong><code>private</code></strong></td>
  </tr>
  <tr>
    <td style="border: 1px solid #000; text-align: center;">Members of the same class</td>
    <td style="border: 1px solid #000; background-color: #D0E0D0; text-align: center;">Yes</td>
    <td style="border: 1px solid #000; background-color: #D0E0D0; text-align: center;">Yes</td>
    <td style="border: 1px solid #000; background-color: #D0E0D0; text-align: center;">Yes</td>
  </tr>
  <tr>
    <td style="border: 1px solid #000; text-align: center;">Members of the derived class (child)</td>
    <td style="border: 1px solid #000; background-color: #D0E0D0; text-align: center;">Yes</td>
    <td style="border: 1px solid #000; background-color: #D0E0D0; text-align: center;">Yes</td>
    <td style="border: 1px solid #000; text-align: center;">No</td>
  </tr>
  <tr>
    <td style="border: 1px solid #000; text-align: center;">Not members</td>
    <td style="border: 1px solid #000; background-color: #D0E0D0; text-align: center;">Yes</td>
    <td style="border: 1px solid #000; text-align: center;">No</td>
    <td style="border: 1px solid #000; text-align: center;">No</td>
  </tr>
</table>

* Polymorphism (taking many forms), is when a class overwrites inherited members (attributes or methods) so when different objects call a member using the same name (interface) e.g. `.print()` or `.set_values(5, 6)`, the output will be differnt based on the object  
* In principle, a publicly derived class inherits access to every member of a base class except:  

  * its constructors and its destructor  
  * its assignment operator members (operator=)  
  * its friends  
  * its private members  

<br>  

##### Virtual Functions and override  
* Allow **runtime polymorphism**
* Enables **dynamic dispatch**: method chosen by actual (derived) type, not pointer type  
* Use `const` for when the method does not change the state of the object and does not modify member variables  

```cpp
class Animal {
public:
    virtual void speak() const {
        std::cout << "Animal sound\n";
    }
};

// Extends Animal
class Dog : public Animal {
public:
    void speak() const override {  // override confirms match
        std::cout << "Woof\n";
    }
};

Animal* a = new Dog();
a->speak();  // Woof — calls Dog's method, not Animal’s
```

* `override` Keyword ensures the method matches a virtual function in the base class - catches typos or signature mismatches at compile time  

```cpp
void speak() override;   // correct
void speak(int) override; // error: no matching virtual
```

Pure Virtual Functions - Declare interface-like functions:  
* Makes the class abstract (cannot instantiate)  

```cpp
class Shape {
public:
    virtual double area() const = 0;  // pure virtual
};
```

Virtual Destructors
* Always make **base class destructors virtual** when using inheritance  
* Without virtual destructor: `delete basePtr` may not call derived destructor — leads to memory leaks  
```cpp
class Base {
public:
    virtual ~Base();  // ensures derived destructor is called
};
```

Allows for the same interface to be used with different behaviours:  
```cpp
#include <iostream>
#include <vector>
#include <memory>

class Animal {
public:
    virtual std::string speak() const { return "???"; }
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    std::string speak() const override { return "Woof"; }
};

class Cat : public Animal {
public:
    std::string speak() const override { return "Meow"; }
};

int main() {
    // Vector of Animals - will accept different types of animals
    std::vector<std::unique_ptr<Animal>> pets;
    
    pets.push_back(std::make_unique<Dog>());
    pets.push_back(std::make_unique<Cat>());

    for (const auto& pet : pets)
        std::cout << pet->speak() << "\n";  // Outputs: "Woof" "Meow"
}
```

##### Object Slicing  

When storing derived objects by value in a base-type container (e.g. `std::vector<Animal>`), only the `Animal` portion is copied. The `Dog`/`Cat` parts are **sliced off**.

```cpp
std::vector<Animal> pets;
pets.push_back(Dog()); // Sliced — becomes just Animal
```

Polymorphism only works through pointers or references
Use `std::vector<std::unique_ptr<Animal>>` to avoid slicing  

<br>

##### Friend Functions  

[Reference](https://cplusplus.com/doc/tutorial/inheritance/)  

`class Class_name {`  
&emsp;`private:`  
&emsp;&emsp;`type member;`  
&emsp;`public:`  
&emsp;&emsp;`friend return_type func_name(Class_name &obj);`  
`};`  

`return_type func_name(Class_name &obj) {`  
&emsp;`obj.member;` - Access objects private member  
`}`  

`func_name(obj);` - Calls function  
* Friend functions allow syntax to be chosen (note difference to calling normal method)  
* Useful for when multiple (different) classes require similar functionality to access private or protected members of each  
* NOTE - Friendship functions/classes **are NOT inherited**  
* Functions or classes declared as `friend` can access `private` and `protected` members without being a class member themselves  

<br>  

##### Operator Overloading  

[Reference](https://cplusplus.com/doc/tutorial/templates/)  

* Define behaviour for operators  

`class Class_name {`  
&emsp;`// Declarations`  
&emsp;`...`  
&emsp;`Class_return operator sign(const Class &var) {`  
&emsp;&emsp;`Class temp_var;`  
&emsp;&emsp;`temp.attr = this->attr sign var.attr;`  
&emsp;&emsp;`return temp;`  
&emsp;`}`  
`};`  
* Above shows an example declared as **member function**  
* `Class_return` is the return type of the function, which will most likely be an instance of the class  
* `sign` should be replaced with the operator e.g. `+` or `-`  
* `&var` refers to the second object (operand)  

`Class_return operator sign(const Class &var1, const Class &var2) {`  
&emsp;`Class temp;`  
&emsp;`temp.attr = var1.attr sign var2.attr;`  
&emsp;`return temp;`  
`}`  
* Above shows an example declared as a **non-member function**, here both objects must be passed to the function  

<br>

After declaring the functions, both member and non-member functions can be used as follows:  
&emsp;`Class var(attr_val);` - instantiate obj (assuming constructor to set attribute)  
&emsp;`Class var2(attr_val);` - instantiate 2nd obj  
&emsp;`Class result_var;` - instantiate obj to store result (assuming constructor which takes no params)  
&emsp;**`result_var = var + var2;`**  
* Example using `+` operator  

<br>  

##### Templates  

[Reference](https://cplusplus.com/doc/tutorial/functions2/#templates)  

Use templates when your code:  
  - Works for **multiple types**  
  - Avoids code duplication  
  - Requires **compile-time type safety**  

```cpp
template <typename T>
class MyContainer {
    T val;
public:
    MyContainer(T v) : val(v) {}
    T get() const { return val; }
};
``` 
* Avoids the need for multiple overloaded functions to define function to be used with different types but same body  
* `T` is a class name variable, and can be named as you wish, though `T` is common  

```cpp
template<typename T>
void mySwap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 1, y = 2;
    mySwap(x, y);  // Works for int

    std::string a = "Hi", b = "Bye";
    mySwap(a, b);  // Works for string
}
```

<br>  

### Structs  

[Reference](https://cplusplus.com/doc/tutorial/classes/#struct_and_union)  

`struct Struct_name {`  
&emsp;`// Code`  
`};`  
* Similar to classes, however by default, members have **public access** (where classes are private by default)  
* Generally used to declare plain data structures, can also be used to declare classes that have member functions  

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### RAII (Resource Acquisition Is Initialisation)

* C++ idiom: tie resource lifetime to object lifetime
* Constructor allocates resource
* Destructor releases it
* Avoids leaks. Handles exceptions safely (via stack unwinding)
* Smart pointers are RAII wrappers for memory

```cpp
class FileWrapper {
    std::fstream file;
public:
    FileWrapper(const std::string& path) {
        file.open(path);
    }
    ~FileWrapper() {
        file.close();
    }
};
```

<br>

[⬆ Table of Contents ⬆](#cpp-notes)  

---  

### Enums  

##### Traditional Enums:  
[Reference](https://cplusplus.com/doc/tutorial/other_data_types/#enumerated_types)  

`enum <Enum_name> {`  
&emsp;`<ITEM1>,` - has value 0  
&emsp;`<ITEM2>,` - has value 1  
&emsp;`<ITEM3> = 100,` - has value 100  
&emsp;`<ITEM4>` - has value 101  
`}`  

`// Using:`  
`<Enum_name> <variable> = <ITEM>;`  
* Represents a group of constants  
* Optionally can add namespace (`<Enum_name>::`) in front of `<ITEM>` when using for clarity  
* Good practice to use uppercase for `Enum_name` as well as `ITEMS`  
* Without specifying a value, list starts at value 0 and increments  
* If specify a value, the following items continue from that value  
* Enums are good to represent error codes as well as colour values  
* Can be combined with switch or if statements  

|Feature|Traditional Enum|Enum Class (see below)|
|:--:|:--:|:--:|
|Type Safety|No|Yes|
|Scope|Global|Scoped|
|Implicit Conversion|Converts to int|No implicit conversion|
|Enumerator Conflicts|Possible|Not possible|x

##### Enum Class:  
`enum class COLOUR {`  
&emsp;`RED,`  
&emsp;`GREEN,`  
&emsp;`BLUE };`  
* Strongly typed and strongly scoped (unlike traditional enums) and allows for more control (**see table above**)  
* **Scoped** enums – no implicit conversion to int  
* **Safe from name collisions**
* Access via `COLOUR::RED`  
* enum class values cannot be implicitly converted to int  
* You must use `static_cast<int>(Enum::Value)` to get the int  

```cpp
COLOUR c = COLOUR::GREEN;
if (c == COLOUR::GREEN)
```

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---   

### Error Handling  

[Reference](https://cplusplus.com/doc/tutorial/exceptions/)  

##### Throw, Try..Catch

`throw <exception>` - Throws an exception. Exception can be an int, string or other  

`try {`  
&emsp;`// Code`  
`} catch (<type> <err_variable>) {`  
&emsp;`// Handle error`  
&emsp;`std::cerr << "Error: << e.what() << std::endl;` - Output error  
`}`  

`// Other code`  
* Catch block is run if error occurs in try block  
* Can chain catch blocks for different error types  
* `catch(...)` can be used to catch all (majority) of errors, but bad practice  

**Best practice**: only throw by value, catch by (const) reference
```cpp
try {
    throw std::runtime_error("Oops");
}
catch (const std::exception& e) {
    std::cerr << e.what();
}
```

##### Exception Rules  

* C++ uses **stack unwinding** – objects are destroyed in **reverse order of construction** when exception is thrown  
* Destructors are always called before leaving the stack  
* RAII ensures cleanup (e.g., smart pointers)  

##### noexcept  

* Marks a function as **not throwing exceptions**  
* If exception is thrown from a noexcept function → `std::terminate()`  
* Use `noexcept` only when **certain no exception will be thrown**  
```cpp
void func() noexcept;
```

##### Types of Standard Exceptions

All inherit from `std::exception` (must include `<stdexcept>`):

| Exception Type           | Description                              | When To Use |
|:--|:--|:--|
| `std::exception`         | Base class for all standard exceptions   | Can use it directly, but it is typically used in catch blocks, not for throwing. In practice, you’ll almost always throw a derived type because they let you attach a custom message |
| `std::runtime_error`     | Errors detectable only at runtime        | file not found, network issues, corrupt input |
| `std::logic_error`       | Errors in logic — should not happen at runtime | wrong algorithm assumption, invalid state |
| `std::invalid_argument`  | Invalid parameter passed to function     | passing a null pointer or illegal value | accessing out-of-bounds index |
| `std::out_of_range`      | Accessing beyond bounds (e.g., vector)   | accessing out-of-bounds index |
| `std::length_error`      | Exceeding max allowed size               | trying to create a container that's too large |
| `std::domain_error`      | Argument outside valid domain (e.g., sqrt(-1)) | illegal math inputs (like log(-1)) |
| `std::bad_alloc`         | Memory allocation failure (e.g., `new`)  | system out of memory |

Example:
```cpp
throw std::invalid_argument("Value must be > 0");

try {
    // Can be thrown directly (prints "std::exception"), 
    // though typically use a derived type (such as shown above) to attach custom message
    throw std::exception();  
}
catch (const std::exception& e) {
    std::cout << e.what();  // Outputs: "std::exception"
}


try {
    throw std::runtime_error("Something broke");
}
catch (const std::exception& e) {
    std::cout << e.what();  // Output: Something broke
}
```

* Best practice: **catch** exceptions **by reference**, **throw by value**    
* Use `what()` to get error string  

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### Time  

[Library Reference](https://cplusplus.com/reference/ctime/)  
[Function Reference](https://cplusplus.com/reference/ctime/time)  

See [Chrono Library](#chrono-library---time-and-duration) as an alternative  

`#include <ctime>` - includes time library  
`time(0)` - number of seconds passed since 1st Jan 1970  


### Random Numbers  

`#include <cstdlib>` - includes standard library which includes random number gen  
`std::srand(<int>)` - Sets seed for random number gen  
`std::srand(time(0))` - sets seed to generate a different random number every second  
`std::rand()` - Generates random number  
`std::rand() % 10` - Defines random numbers between 0 and **9** (+ 1 if wanting 1 - 10)  
**Alternatively** use `<random>` library - [See here](https://cplusplus.com/reference/random/)

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### Chrono Library - Time and Duration  

`#include <chrono>`  

* Used for measuring durations and timestamps  
* Use steady_clock for durations, system_clock for real time  

```cpp
#include <chrono>
auto start = std::chrono::steady_clock::now();
// ... code ...
auto end = std::chrono::steady_clock::now();
std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
```

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### Filesystem Library  

`#include <filesystem>` 

* For files and paths  
* Great for file checking, directory iteration, path manipulations  

```cpp
#include <filesystem>
namespace fs = std::filesystem;

if (fs::exists("file.txt")) {
    std::cout << "File exists!";
}
```

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### Working With Files  

[Reference](https://cplusplus.com/doc/tutorial/files/)  

`#include <fstream>`  

`std::ofstream stream_var;`  
`stream_var.open("path.ext", mode);` - Opens file for **<u>writting</u>** (output)  
* Will create file if not exists  
* Will overwrite if already exists  
* Can put on same line as with `ifstream` below (optional)  
* `mode` is optional, **default** `ios::out`  
  
`std::ifstream stream_var("path.ext", mode);` - Opens file for **<u>reading</u>** (input)  
* Will not create file if does not exist  
* `mode` is optional, **default** `ios::in`  
    
`std::fstream stream_var("path.ext", mode);` - Opens file for **<u>reading AND writting</u>**  
* `mode` is optional, **default** `ios::in | ios::out`

<br>    

`stream_var.close();` - **<u>ALWAYS close</u> file** once done  

`if(stream_var.is_open()){...}`
* **Checks if file is open** (and permission to read/write)  

<br>

`include <string>`
`getline(stream_var, var_store_line);` - **Reads line from file and stores in variable**, buffer will be at start of next line  
* Put in while loop to read all lines  

<br>  

`stream_var << "some text\nThe next line";`  
* **Writes to file**  
* Overwrites any previous content  

<br>  

##### Modes  

* Modes can be combined using `|`  

|Mode|Description|
|:--:|:--|
|std::ios::in|Open for input operations|
|std::ios::out|Open for output operations|
|std::ios::binary|Open in binary mode.|
|std::ios::ate|Set the initial position at the end of the file<br>If this flag is not set, the initial position is the beginning of the file|
|std::ios::app|All output operations are performed at the end of the file, appending the content to the current content of the file|
|std::ios::trunc|If the file is opened for output operations and it already existed, its previous content is deleted and replaced by the new one|

##### std::stringstream  

`#include <sstream>`  

* `std::stringstream` is used to treat strings like streams. Useful for tokenising or converting between types  
* `std::stringstream` - input and output  
* `std::istringstream` - input only  
* `std::ostringstream` - output only  
* Use `clear()` and `str("")` to reset a stream  
* Safer alternative to `stoi()` when parsing formatted strings  
<br>

* `seekg(pos)` – sets the read (**get**) position  
* `seekp(pos)` – sets the write (**put**) position  
* Common usage: `ss.seekg(0)` to rewind to the beginning for reading again  


```cpp
#include <sstream>

std::string line = "42 hello";
std::stringstream ss(line);  // Create stream object called ss

int num; std::string word;
ss >> num >> word; // read from buffer, num = 42, word = "hello"
```

Important gotcha:
```cpp
std::stringstream ss;
ss << 42 << " " << "hello";  // Buffer: "42 hello" 

int num; std::string word;
ss >> num >> word;           // Reads to separate variables: 42, "hello"

ss << " next";               // Appends to buffer → now: "42 hello next"
ss >> word;                  // Nothing happens — still at end
std::cout << word;           // Still prints "hello"


// Fix it by resetting the stream properly
ss.clear();       // Clear eof or fail flags
ss.seekg(0);      // Reset read position (get pointer) to beginning -> without this and only clear() " next" will be printed
std::getline(ss, word);  // Read entire line into "word"
ss >> word;        // Now reads from start again -> "42 hello next"


// Or wipe the buffer entirely and reuse
ss.str("");       // Clear the internal string buffer
ss.clear();       // Clear flags
ss << "next";     // Now safe to write fresh content
ss >> word;       // word = "next"
```


##### Parsing CSV Files

* Use `std::stringstream` to tokenise line by commas  
* Watch out for quoted strings and embedded commas (use a CSV parser lib if needed)  
```cpp
#include <sstream>
std::string line;
while (std::getline(file, line)) {  // Read each line from file
    std::stringstream ss(line);  // Create stream object called ss
    std::string cell;

    while (std::getline(ss, cell, ',')) {  // Read from ss, deliminate by ',' and store result in cell
        std::cout << "Cell: " << cell << "\n";
    }
}
```

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### Logging / Writing Logs  

* Consider using [cerr](#stdcerr--standard-error-stream)  
* Logging is typically done using file streams   
* Prefer `std::ofstream` with append mode (see [working with files](#working-with-files))  

```cpp
#include <fstream>
std::ofstream log("log.txt", std::ios::app);
if (log.is_open()) {
    log << "Log message: value = " << var << std::endl;
}
```  

* Always open with ios::app to avoid overwriting  
* Use timestamps (`<ctime>` or `<chrono>`) for tracking  
* Wrap logging in a function or class if used often  

<br>

[⬆ Table of Contents ⬆](#cpp-notes)   

---  

### Unit Testing in C++

```cpp
// Basic Manual Approach
#include <cassert>
int add(int a, int b) { return a + b; }

int main() {
    assert(add(2, 3) == 5);
    assert(add(-1, 1) == 0);
    std::cout << "All tests passed.\n";
}
```

* For more control and reporting (e.g., test cases, setup/teardown), use third-party frameworks like **Catch2** or **Google Test**  

<br>

[⬆ Table of Contents ⬆](#cpp-notes)   

---  

### Threads  

[Reference](https://cplusplus.com/reference/thread/)  

`#include <thread>`  

`std::thread thread_var(callable, arg1, arg2...);`  

* Creates a thread which starts to execute the `callable`  
* `callable` can be a function, function pointer, lambdas, objects with a callable behaviour. `arg1 ...` are objects with move semantics (that can be moved into the thread) that are arguments for the callable function  

`thread_var.join();`  
* Main thread waits for `thread_var` to finish its execution before continuing  
* This is **important to include**  

`std::this_thread::get_id();`  
* Returns threads ID  

`#include <chrono>`  

`std::this_thread::sleep_for(std::chrono::seconds(number_of_seconds));`  
* Pauses thread for specified time  

<br>  

> Note to run a program containing threads, may need an updated version of gcc. Additionally **may** need to pass flag when compiling:  
> `g++ -pthread program.cpp`  
> flag `-lpthread` may be required instead  

<br>

### Concurrency Basics (for future reference)

* C++11 adds `<thread>`, `<mutex>`, `<atomic>`, and more
* Use `std::thread`, `std::lock_guard`, and `std::atomic` for safety
* Consider thread safety when sharing data between threads


<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  