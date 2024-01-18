# <center>CPP Notes</center>

[Reference](https://cplusplus.com/reference/)  

---  

### <u>Compile</u>

`g++ <filename> -o <output_name>`  
* gcc can be used instead of g++  
* Output name is optional, default is a.exe (extension does not need specifying)  
* If compiling **multiple files**, list all in same place `<filename>`. Note **only c++** files require compiling (not header files)  

`.\<filename>`  
* Runs compiled file
* Can compile and run in one line using `&&`  

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

---  

### <u>Namespaces</u>  

[Reference](https://cplusplus.com/doc/tutorial/namespaces/)  

`using namespace std;`
* Can be included as shown at top of file, however **more common to use `std::`** in front of `cout` and `endl`, as `using namespace std;` **can cause issues** if libraries are also using the namespace  

<u>Custom Namespaces</u>  

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

---  

### <u>Scopes</u>  

[Reference](https://cplusplus.com/doc/tutorial/namespaces/)  

`Global` - Variables defined outside functions at top of file are accessible anywhere within the file  
`Local` - Variables defined within a function are only accessible within that function, these **will take priority over global variables**  
* Variables must be defined with **`<type>`** or variables previously defined will be overwritten  

`::<global>` - Use global variable even when local defined  

---  

### <u>Data Types</u>  

[Reference](https://cplusplus.com/doc/tutorial/variables/)  
[Type casting reference](https://cplusplus.com/doc/tutorial/typecasting/)  

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

---  

### <u>Strings</u>  

[String reference documentation](https://cplusplus.com/reference/string/)  
[String class](https://cplusplus.com/reference/string/string/)  

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

---  

### <u>Control Statements & Flow</u>  

[Control tutorial](https://cplusplus.com/doc/tutorial/control/) 

#### <u>If Statement</u>


`if(<condition>){`  
&emsp;`<expression_true>;`  
`}else if(<condition2>){`  
&emsp;`<expression2_true>;`  
`}else{`  
&emsp;`<expression_false>;`  
`}`  

<br>

#### <u>Ternary Operator</u>  

`<variable> = <condition> ? expression_true : expression_false;`  

<br>

#### <u>Switch Statement</u>  

`switch(expression) {`  
&emsp;`case constant1:`  
&emsp;&emsp;`group-of-statments-1;`  
&emsp;&emsp;`break;`  
&emsp;`case constant2:`  
&emsp;&emsp;`group-of-statments-2;`  
&emsp;&emsp;`break;`  
&emsp;`.`  
&emsp;`.`  
&emsp;`default:`  
&emsp;&emsp;`default-group-of-statments;`  
* Note switch is limited to compare its evaluated expression against labels that are **constant expressions**. It is <u>not possible to use variables</u> as labels or ranges  
* `expression` must be an int  
* `default` is optional  
  
<br>

#### <u>Comparison & Logic Operators:</u>  
`==`  equals  
`>=`  greater than or equals  
`!=`  not equal  
`&&`  AND  
`||`  OR  

#### <u>Jump Statements</u>  

[Control tutorial](https://cplusplus.com/doc/tutorial/control/) 

`break;` - Leaves loop  

`continue;` - Skip current iteration  

`myLabel:`  
&emsp;`//code`  
&emsp;`(optional_condition) goto myLabel;` - Keyword `goto` jumps to label specified  

---  

### <u>Loops</u>  

[Control tutorial](https://cplusplus.com/doc/tutorial/control/) 

#### <u>For</u>  

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

#### <u>For Each</u>  

`for(<type> <var> : <array>) {`  
&emsp;`std::cout << <var> << std::endl;`  
`}`  
* Outputs each element `<var>` of array  

#### <u>While</u>  

`while(<condition_true>){`  
&emsp;`// code`  
`}`  
* Executes loop while condition is true  
* May not execute at all  

#### <u>Do</u>  

`do{`  
&emsp;`// code`  
`} while (<condition_true>);`  
* Executes at least once, checks condition after executing  


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

#### <u>Function Overloading</u>  
* Define function multiple times with same function name but **<u>different parameters</u>** (**different number of params** and/or **different types**, can also have **different return type**)  
* Allows function to change behaviour when different arguments passed in (different numbers)  

<br>  

#### <u>Lambda Functions</u>  

`[capture_clause](parameters) -> return_type { method }`  
* Unnamed function - used once  
* `-> return_type` is optional and generally evaluated by the compiler so usually not required  
* `capture_clause`:  
&emsp;`[&]` : capture all external variables by reference  
&emsp;`[=]` : capture all external variables by value   
&emsp;`[a, &b]` : mixture, capture a by value and b by reference
&emsp;`[]` : Empty capture clause can only access variables which are local to it  

---  

### <u>Classes</u>  

[Reference](https://cplusplus.com/doc/tutorial/classes/)  
[Reference2](https://cplusplus.com/doc/tutorial/templates/)  

##### <u>Class Definition & Inline Methods</u>

`Class <Class_name>{`  
&emsp;&emsp;`<type> <attribute>;` - Define private attribute  
&emsp;`private:`  
&emsp;&emsp;`<type> <attribute>;`  - Another way to define private attribute  
&emsp;`public:`  
&emsp;&emsp;`<type> <attribute>;`  - Define public attribute  
&emsp;&emsp;`<return_type> <method_name>(<type optional_params>) { return <code>;}`  - Declare public inline method  
&emsp;&emsp;`<return_type> <method_name>(<type optional_params>);`  - Declare public **normal (not-inline)** method  
`} object_names;` - Object_names are optional  
* Defines a class with public and private attributes  
* `public` attributes can be accessed from anywhere the class is visible  
* `private` attributes can only be accessed from inside the class (or by other members of the class)  
* If access specifier is not specified or members (attributes) are declared before the specifier, then those members will be `private` by default  
* Inline methods are good for simple methods, otherwise better to use normal not-inline methods where only the declaration is included and the actual definition comes later outside the class (see below)  
  
<br>  

##### <u>Normal (Not-inline) Methods</u>  

`<return_type> <Class_name>::<method_name>(<type optional_params>) {`  
&emsp;`//code`  
`}`  
* Defining a normal (not-inline) method outside the class.  
* Note **private members (attributes) ARE accessible** within this method  
* Can define multiple times for **method overloading**, however must declare all methods with the varying parameters/return types in the class  
* Best practice to refer to attributes with `this->attribute ...;` Not required, but protects against unexpected behaviour  

<br>  

##### <u>Constructor</u>  

**Define outside class:**  
`<Class_name>::<Class_name>(<type optional_params>) {`  
&emsp;`//code`  
`}`  
**OR define in class:**  
`class Example{`  
&emsp;&emsp;`int private_number_attribute;`  
&emsp;`public:`  
&emsp;&emsp;`std::string public_string_attribute;`  

&emsp;`// Constructor`
&emsp;`Example() {`  
&emsp;&emsp;`this->private_number_attribute = 5;`  
&emsp;`}`  
`}`  
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

[Reference](https://cplusplus.com/doc/tutorial/classes2/)  

**Define outside class:**  
`<Class_name>::~<Class_name>() {`  
&emsp;`//code`  
`}`  
**OR define in class:**  
`class Example{`  
&emsp;&emsp;`...`  

&emsp;`// Constructor`  
&emsp;&emsp;`...`  

&emsp;`// Destructor`
&emsp;`~Example() {`  
&emsp;&emsp;`// code`  
&emsp;`}`  
`}`  
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


---  

### <u>Enums</u>  

[Reference](https://cplusplus.com/doc/tutorial/other_data_types/)  

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

---  

### <u>Error Handling</u>  

[Reference](https://cplusplus.com/doc/tutorial/exceptions/)  

`throw <exception>` - Throws an exception. Exception can be an int, string or other  

`try {`  
&emsp;`// Code`  
`} catch (<type> <err_variable>) {`  
&emsp;`// Handle error`  
`}`  

`// Other code`  
* Catch block is run if error occurs in try block  
* Can chain catch blocks for different error types  
* `catch(...)` can be used to catch all (majority) of errors, but bad practice  

---  

### <u>Time</u>  

[Reference](https://cplusplus.com/reference/ctime/time)  

`#include <ctime>` - includes time library  
`time(0)` - number of seconds passed since 1st Jan 1970  


### <u>Random Numbers</u>  

`#include <cstdlib>` - includes standard library which includes random number gen  
`std::srand(<int>)` - Sets seed for random number gen  
`std::srand(time(0))` - sets seed to generate a different random number every second  
`std::rand()` - Generates random number  
`std::rand() % 10` - Defines random numbers between 0 and **9** (+ 1 if wanting 1 - 10)  

---  

### <u>Arrays</u>  

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

#### <u>STL Arrays</u>  
[Reference](https://cplusplus.com/reference/array/array/)  
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


#### <u>STL Vectors</u>  
[Reference](https://cplusplus.com/reference/vector/vector/)  
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

---  

### <u>Sets</u>  

[Reference](https://cplusplus.com/reference/set/set/)  

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

---  

### <u>Tuples</u>  

[Reference](https://cplusplus.com/reference/tuple/tuple)  

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

---  

### <u>Maps (Dictionaries)</u>  

[Reference](https://cplusplus.com/reference/map/map/)  

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
