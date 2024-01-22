# <center>CPP Notes</center>

[Reference](https://cplusplus.com/reference/)  


### <center>Table of Contents</center>  
|Item|Heading|   Sub Contents|
|:---:|:---:|:---:|
| **1.** | [Comments](#Comments) | Single,<br>Multi,<br>Document |
| **2.** | [Compile](#compile) | [Compiling,](#compile)<br>[Makefiles](#makefiles) |
| **3.** | [Include Libraries/Files](#include-librariesfiles) | [#include,](#include-librariesfiles)<br>[Custom Header Files](#custom-header-files) |
| **4.** | [Command Line Arguments](#command-line-arguments) | argc,<br>argv |
| **5.** | [Outputs](#outputs) | cout,<br>printf |
| **6.** | [User Input](#user-input) | cin,<br>get,<br>getline |
| **7.** | [Namespaces](#namespaces) | [Using namespace,](#namespaces)<br>[Namespace Functions](#custom-namespaces) |
| **8.** | [Scopes](#scopes) | Global,<br>Local |
| **9.** | [Data Types](#data-types) | [const,](#data-types)<br>[static,](#data-types)<br>[Data Types List,](#data-types)<br>[Aliases,](#aliases)<br>[#define (Macros)](#define-macros),<br>[Conditional Inclusions](#conditional-inclusions) |
| **10.** | [Pointers](#pointers) | [Declare,](#pointers)<br>[Address-of-Operator,](#pointers)<br>[Dereference Operator,](#pointers)<br>[Incrementing,](#incrementing)<br>[Const Pointers,](#constant-pointers)<br>[Void Pointers,](#void-pointers)<br>[Invalid Pointers,](#invalid-pointers)<br>[Null Pointers,](#null-pointers)<br>[Dynamic Memory,](#dynamic-memory)<br>[Checking Allocation,](#check-allocation-successful)<br>[Smart Pointers](#smart-pointers) |  
| **11.** | [Maths](#maths) | cmath |
| **12.** | [Strings](#strings) | String Methods |
| **13.** | [Control Statements & Flow](#control-statements--flow) | [If,](#if-statement)<br>[Ternary Operator,](#ternary-operator)<br>[Switch,](#switch-statement)<br>[Comparison & Logic Operators,](#comparison--logic-operators)<br>[Jump](#jump-statements) |
| **14.** | [Loops](#loops) | [For,](#for)<br>[For Each,](#for-each)<br>[While,](#while)<br>[Do](#do) |
| **15.** | [Functions](#functions) | [Function Declaration,](#functions)<br>[Function Overloading,](#function-overloading)<br>[Lambda Functions](#lambda-functions) |
| **16.** | [Classes & Struts](#classes--struts) | [Class Definition,](#class-definition--inline-methods)<br>[Inline Methods,](#class-definition--inline-methods)<br>[Static Members,](#class-definition--inline-methods)<br>[toString,](#class-definition--inline-methods)<br>[Normal (Not-inline) Methods,](#normal-not-inline-methods)<br>[Constructor,](#constructor)<br>[Destructor,](#destructor)<br>[Instantiation & Member Access,](#instantiation--member-access)<br>[Inheritance,](#inheritance)<br>[Polymorphism,](#inheritance)<br>[Friend Functions,](#friend-functions)<br>[Operator Overloading,](#operator-overloading)<br>[Templates,](#templates)<br>[Structs](#structs) |
| **17.** | [Enums](#enums) | |
| **18.** | [Error Handling](#error-handling) | Throw,<br>Try..Catch |
| **19.** | [Time](#time) | [Time,](#time)<br>[Random Numbers](#random-numbers) |
| **20.** | [Arrays](#arrays) | [Standard arrays,](#arrays)<br>[STL Arrays,](#stl-arrays)<br>[STL Vectors](#stl-vectors) |
| **21.** | [Sets](#sets) | |
| **22.** | [Tuples](#tuples) | |
| **23.** | [Maps (Dictionaries)](#maps-dictionaries) | |
| **24.** | [Algorithms Library](#algorithms-library) | [Algorithms Lib,](#algorithms-library)<br>[Sort](#sort) |
| **25.** | [Working With Files](#working-with-files) | [Writing,](#working-with-files)<br>[Reading,](#working-with-files)<br>[Modes](#modes) |
| **26.** | [Threads](#threads) | |

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### <u>Comments</u>  

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

### <u>Compile</u>

`g++ <filename> -o <output_name>`  
* gcc can be used instead of g++  
* Output name is optional, default is a.exe (extension does not need specifying)  
* If compiling **multiple files**, list all in same place `<filename>`. Note **only c++** files require compiling (not header files)  

`.\<filename>`  
* Runs compiled file
* Can compile and run in one line using `&&`  

##### <u>Makefiles</u>  

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

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### <u>Include Libraries/Files</u>  

`#include <system_header_file>`  
**OR**  
`#include "all_other_header_files"`  
* Use quotes for custom header files  
* `;` NOT used  

##### <u>Custom Header Files</u>  

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

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### <u>Command Line Arguments</u>

C++ Boilerplate:
`#include <iostream>`  - if using input/output 

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

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### <u>Outputs</u>  

`std::cout << "Hello" << <int data> << std::endl;`  
* Output to console whatever follows the insertion operator `<<` ("put to")  
* Part of iostream library `#include <iostream>`  
* `<int data>` above is example of adding a number or variable to output  
* Optionally follow with `<< std::endl` to add new line (can also use `"\n"` )  

`printf("Hello %i", <int data>);`
* c method to output to console  
* Can be used to pass data into the output  

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### <u>User Input</u>

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

### <u>Namespaces</u>  

[Reference](https://cplusplus.com/doc/tutorial/namespaces/#namespace)  

`using namespace std;`
* Can be included as shown at top of file, however **more common to use `std::`** in front of `cout` and `endl`, as `using namespace std;` **can cause issues** if libraries are also using the namespace  

##### <u>Custom Namespaces</u>  

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

### <u>Scopes</u>  

[Reference](https://cplusplus.com/doc/tutorial/namespaces/)  

`Global` - Variables defined outside functions at top of file are accessible anywhere within the file  
`Local` - Variables defined within a function are only accessible within that function, these **will take priority over global variables**  
* Variables must be defined with **`<type>`** or variables previously defined will be overwritten  

`::<global>` - Use global variable even when local defined  

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### <u>Data Types</u>  

[Reference](https://cplusplus.com/doc/tutorial/variables/)  
[Type casting reference](https://cplusplus.com/doc/tutorial/typecasting/)  

`const <type> VAR = val;` - Variables declared `const` are constants and cannot be modified once initialised. Typically declare `VAR` in **capitals** to denote constant. Note this is different to `#define` constants which are preprocessor directives, `const` are program constants  

`static` [(storage specifier)](https://en.cppreference.com/w/cpp/language/storage_duration) - The storage for the object is allocated when the program begins and deallocated when the program ends. Only one instance of the object exists  

`sizeof(<type>)` - will return data type size in bytes 

`#include <limits.h>` - Library which contains functions such as `INT_MAX` and `LONG_MIN` to retrieve min and max values  

|Type|How to declare & define|Example|Note|Size (RAM used bytes)|MAX value(signed)|
|:--:|:--:|:--:|:--:|:--:|:--:|
|Char|char letter = 'b';|'a'|Must use single quotes<br>Can be used to store ascii values when assigned to a number|1|127 (ASCII)|
|String|std::string myName = "Andy";|"Dave"|Must use double quotes|24||
|Int|int age = 24;|5||4|2 147 483 647|
|Long Long|long long num = 2257483647;||long also availiable, but appears to behave similar to int|8|9 223 372 036 854 775 807|
|Float|float num = 3.14159;|||4||
|Double|double x = 5.234245252525;||longer number|8||
|Unsigned|unsigned int y = 2;||Unsigned cannot be negative, but allows for twice the largest value of the number type used<br>Assigning to -1 will return the largest value|||
|Boolean|bool old = false;|||1||

<br>

### <u>Aliases</u>  
[Reference](https://cplusplus.com/doc/tutorial/other_data_types/)  

`typedef <existing_type> <new_type_name>;`  
OR
`using <new_type_name> = <existing_type>;`  
* Identifying types by a different name  
* New aliase can be used same as regular types  

<br>  

### <u>#define (Macros)</u>  
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

##### <u>Conditional Inclusions</u>  

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

### <u>Pointers</u>  

[Reference](https://cplusplus.com/doc/tutorial/pointers/)  

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
`const int *p = &x;`  
* `p` points to x, but because it is declared `const`, it can read the value stored in `x`, but NOT modify it  

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

##### <u>Dynamic Memory</u>  

[Reference](https://cplusplus.com/doc/tutorial/dynamic/)  
[`<new>` Dynamic Memory Header Reference](https://cplusplus.com/reference/new/)  

`pointer = new type(val);`  
* Allocates memory to contain one single element of type `type` on the **heap**, you are responsible for memory management (a regular varaible would be allocated on the stack and memory management would be handled automatically)    
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

### <u>Smart Pointers</u>  

[Reference](https://cplusplus.com/reference/memory/)  

* Smart pointers manage memory allocation  

<br>  

##### <u>Unique Pointers</u>  

`#include <memory>`  

`std::unique_ptr<type> pointer_var = std::make_unique<type>(val/var);`  
* Creates a unique pointer  
* `val/var` is optional and only required if pointing to a specific pre-declared object or passing a specific value to the object constructor  
* Unique pointers are a one-to-one relationship and grants exclusive ownership  
* Unique pointers cannot be copied, although ownership can be moved:  
&emsp;`std::unique_ptr<type> pointer_var2 = std::move(original_pointer_var);`  
* The unique pointer will be deleted and freed once the object is deleted (such as exiting its scope)  

<br>  

##### <u>Shared Pointers</u>  

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

### <u>Maths</u>

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

### <u>Strings</u>  

[Library Reference](https://cplusplus.com/reference/string/)  
[Class Reference](https://cplusplus.com/reference/string/string/)  

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

`std::stoi(<string>);` Converts string to integer  

`#include <string>`  
`std::to_string(int_val);` Converts int to string  

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### <u>Control Statements & Flow</u>  

[Control tutorial](https://cplusplus.com/doc/tutorial/control/) 

##### <u>If Statement</u>


`if(<condition>){`  
&emsp;`<expression_true>;`  
`}else if(<condition2>){`  
&emsp;`<expression2_true>;`  
`}else{`  
&emsp;`<expression_false>;`  
`}`  

<br>

##### <u>Ternary Operator</u>  

`<variable> = <condition> ? expression_true : expression_false;`  

<br>

##### <u>Switch Statement</u>  

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

##### <u>Comparison & Logic Operators:</u>  
`==`  equals  
`>=`  greater than or equals  
`!=`  not equal  
`&&`  AND  
`||`  OR  

##### <u>Jump Statements</u>  

[Control tutorial](https://cplusplus.com/doc/tutorial/control/#jumps) 

`break;` - Leaves loop  

`continue;` - Skip current iteration  

`myLabel:`  
&emsp;`//code`  
&emsp;`(optional_condition) goto myLabel;` - Keyword `goto` jumps to label specified  

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### <u>Loops</u>  

[Control tutorial](https://cplusplus.com/doc/tutorial/control/#loops) 

##### <u>For</u>  

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

##### <u>For Each</u>  

`for(<type> <var> : <array>) {`  
&emsp;`std::cout << <var> << std::endl;`  
`}`  
* Outputs each element `<var>` of array  

##### <u>While</u>  

`while(<condition_true>){`  
&emsp;`// code`  
`}`  
* Executes loop while condition is true  
* May not execute at all  

##### <u>Do</u>  

`do{`  
&emsp;`// code`  
`} while (<condition_true>);`  
* Executes at least once, checks condition after executing  

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### <u>Functions</u>  

[Reference](https://cplusplus.com/doc/tutorial/functions/)  

* Can be good practice and **more efficient** to pass references to a function, rather than using parameters. This is due to parameters cause a copy to be made. 
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

##### <u>Function Overloading</u>  
* Define function multiple times with same function name but **<u>different parameters</u>** (**different number of params** and/or **different types**, can also have **different return type**)  
* Allows function to change behaviour when different arguments passed in (different numbers)  

<br>  

##### <u>Lambda Functions</u>  

`[capture_clause](parameters) -> return_type { method }`  
* Unnamed function - used once  
* `-> return_type` is optional and generally evaluated by the compiler so usually not required  
* `capture_clause`:  
&emsp;`[&]` : capture all external variables by reference  
&emsp;`[=]` : capture all external variables by value   
&emsp;`[a, &b]` : mixture, capture a by value and b by reference
&emsp;`[]` : Empty capture clause can only access variables which are local to it  

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### <u>Classes & Struts</u>  

[Reference](https://cplusplus.com/doc/tutorial/classes/)  
[Reference2](https://cplusplus.com/doc/tutorial/templates/)  

##### <u>Class Definition & Inline Methods</u>

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

##### <u>Normal (Not-inline) Methods</u>  

`<return_type> <Class_name>::<method_name>(<type optional_params>) {`  
&emsp;`//code`  
`}`  

`obj.method();` - Call function
* Defining a normal (not-inline) method outside the class.  
* Note **private members (attributes) ARE accessible** within this method  
* Can define multiple times for **method overloading**, however must declare all methods with the varying parameters/return types in the class  
* Best practice to refer to attributes with `this->attribute ...;` Not required, but protects against unexpected behaviour  

<br>  

##### <u>Constructor</u>  

[Reference](https://cplusplus.com/doc/tutorial/classes2/)  

**Define outside class:**  
`<Class_name>::<Class_name>(<type optional_params>) {`  
&emsp;`//code`  
`};`  
**OR define in class:**  
`class Example{`  
&emsp;&emsp;`int private_number_attribute;`  
&emsp;`public:`  
&emsp;&emsp;`std::string public_string_attribute;`  

&emsp;`// Constructor`
&emsp;`Example() {`  
&emsp;&emsp;`this->private_number_attribute = 5;`  
&emsp;`}`  
`};`  
* **Must declare in class** even if defining outside  
* Defines **constructor** which is automatically called whenever a new object of this class is created  
* Optional to include a constructor at all  
* Can define multiple times for **method overloading** (instantiate with parenthasis and parameters)  
* If no parameters, this will form the **default constructor**. Though note this is only called with:  
&emsp;`<Class_name> var;`  
If empty parenthesis are used, this **WILL NOT** call the default constructor  
* Best practice to refer to attributes with `this->attribute ...;` Not required, but protects against unexpected behaviour

<br>  

##### <u>Destructor</u>  

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
* Useful for cleanup (espcially if dynamic memory was used)  

<br>  

##### <u>Instantiation & Member Access</u>  

`<Class> <var>;` - Instantiate a class  

`<var>.<attribute> = <val>;` - Set a public attribute value  

`<var>.<attribute>;` - Access public attribute  
`pointer->attribute;` - Access attributes (members) of an object through a pointer to that object with the arrow operator `->`  

`Class(type var) : const_attribute(val) { //code }` - constant members can be set in constructor. Note `:` (member initiliser list) and is set between `()` and `{}`  

`Class(type var) : Parent(param), attribute(val) {this->another_way_attribute = val;}` - Calls parent constructor as well as sets own members `attribute` value (shown multiple ways) - This way of setting members (using the member initiliser list `': attr(val),...'` is **REQUIRED** <u>if using other objects inside a class</u>   

<br>  

##### <u>Inheritance</u>  

[Reference](https://cplusplus.com/doc/tutorial/inheritance/#inheritance)  

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

##### <u>Friend Functions</u>  

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

##### <u>Operator Overloading</u>  

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

##### <u>Templates</u>  

[Reference](https://cplusplus.com/doc/tutorial/functions2/#templates)  

`template <class T>`  
`T func_name(T var1, T var2) {`  
&emsp;`// body using var1 and var2`  
`}`  
* Avoids the need for multiple overloaded functions to define function to be used with different types but same body  
* `T` is a class name variable, and can be named as you wish, though `T` is common  

<br>  

### <u>Structs</u>  

[Reference](https://cplusplus.com/doc/tutorial/classes/#struct_and_union)  

`struct Struct_name {`  
&emsp;`// Code`  
`};`  
* Similar to classes, however by default, members have **public access** (where classes are private by default)  
* Generally used to declare plain data structures, can also be used to declare classes that have member functions  

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### <u>Enums</u>  

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
* Can be combined with switch or if statments  

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### <u>Error Handling</u>  

[Reference](https://cplusplus.com/doc/tutorial/exceptions/)  

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

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### <u>Time</u>  

[Library Reference](https://cplusplus.com/reference/ctime/)  
[Function Reference](https://cplusplus.com/reference/ctime/time)  

`#include <ctime>` - includes time library  
`time(0)` - number of seconds passed since 1st Jan 1970  


### <u>Random Numbers</u>  

`#include <cstdlib>` - includes standard library which includes random number gen  
`std::srand(<int>)` - Sets seed for random number gen  
`std::srand(time(0))` - sets seed to generate a different random number every second  
`std::rand()` - Generates random number  
`std::rand() % 10` - Defines random numbers between 0 and **9** (+ 1 if wanting 1 - 10)  
**Alternatively** use `<random>` library - [See here](https://cplusplus.com/reference/random/)

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### <u>Arrays</u>  

> To use dynamic arrays (with **variables as size**), see dynamic memory above  

`<type> <arr_var>[<size>] = {<item1>, <item2>, ...};` - Declare array and populate  
* Declaring size of array is optional  

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

##### <u>STL Arrays</u>  
[Library Reference](https://cplusplus.com/reference/array/)  
[Class Reference](https://cplusplus.com/reference/array/array/)  
* Standard template library arrays  
  
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


##### <u>STL Vectors</u>  
[Library Reference](https://cplusplus.com/reference/vector/)  
[Class Reference](https://cplusplus.com/reference/vector/vector/)  
* Vectors are like arrays but know their size  

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

`var.size();`  
* Returns vector length  

`var.resize(<new_size>)`  
* Resizes vector and initialises new items as 0  

`var.assign(<new_size>, <initialise_to_value>);`  
* Resizes vector to `new_size` and initialises each to value passed  

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

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### <u>Sets</u>  

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

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### <u>Tuples</u>  

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

### <u>Maps (Dictionaries)</u>  

[Library Reference](https://cplusplus.com/reference/map/)  
[Class Reference](https://cplusplus.com/reference/map/map)  

`#include <map>`  

`std::map<key_type, value_type> var = {`  
&emsp;`{key1, val},`  
&emsp;`{key2, val},`  
&emsp;`...`  - Last key/val pair is not followed by comma  
`};`    
* Map **keys** are **ordered** and **unique**  

`var.size();` - Returns number of key/value pairs  

`var[key];` - Access value, will output default value of 0 if does not exist  

`var[key] = val;` - Add new key value pair or change value  
`var.insert(std::pair<key_type, val_type>(key, val));` - First checks if key exists before inserting pair, does nothing if it does exist  

`var.erase(key);` - Destroys key/value pair reducing map size  

`var.clear();` - Destroys all key/value pairs  

`var.empty();` - Checks if map is empty, 0 = false, 1 = true  

`var.find(key);` - Searches container `var` for `key` and returns an iterator to it if found, otherwise returns iterator to `map::end` (theoretical  element that would follow the last element in the map container)  

`for(auto i = var.begin(); i != var.end(); i++) {`  
&emsp;`... i->first ...;` - Outputs map key, do something with it  
`}`  
* Iterates map **keys**  
* Iterate map **values** by changing `i->first` to **`i->second`**  
* `auto` deduces type, can be better to use `std::map<key_type, value_type>::iterator var` to control type used  

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### <u>Algorithms Library</u>  

[Reference](https://cplusplus.com/reference/algorithm/)  
* Collection of functions especially designed to be used on ranges of elements (sorting, merging, min/max, various tests ect.)  

<br>  

#### <u>Sort</u>  
[Sort reference](https://cplusplus.com/reference/algorithm/sort/)  

`std::sort(iterator_first, iterator_last, comparator);` - Sorts iterator (object pointing to some element in a range of elements) in ascending order from first to last  
e.g.
&emsp;`std::sort(vector.begin(), vector.end());`  
* Modifies original variable  
* `comparator` is **optional**, can be a function (incl lambdas) or strut/object  

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### <u>Working With Files</u>  

[Reference](https://cplusplus.com/doc/tutorial/files/)  

`#include <fstream>`  

`std::ofstream stream_var;`  
`stream_var.open("path.ext", mode);` - Opens file for **writting** (output)  
* Will create file if not exists  
* Will overwrite if already exists  
* Can put on same line as with `ifstream` below (optional)  
* `mode` is optional, **default** `ios::out`  
  
`std::ifstream stream_var("path.ext", mode);` - Opens file for **reading** (input)  
* Will not create file if does not exist  
* `mode` is optional, **default** `ios::in`  
    
`std::fstream stream_var("path.ext", mode);` - Opens file for **reading and writting**  
* `mode` is optional, **default** `ios::in | ios::out`

<br>    

`stream_var.close();` - **ALWAYS close file** once done  

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

##### <u>Modes</u>  

* Modes can be combined using `|`  

|Mode|Description|
|:--:|:--|
|std::ios::in|Open for input operations|
|std::ios::out|Open for output operations|
|std::ios::binary|Open in binary mode.|
|std::ios::ate|Set the initial position at the end of the file<br>If this flag is not set, the initial position is the beginning of the file|
|std::ios::app|All output operations are performed at the end of the file, appending the content to the current content of the file|
|std::ios::trunc|If the file is opened for output operations and it already existed, its previous content is deleted and replaced by the new one|

<br>

[⬆ Table of Contents ⬆](#cpp-notes)    

---  

### <u>Threads</u>  

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

[⬆ Table of Contents ⬆](#cpp-notes)    

---  