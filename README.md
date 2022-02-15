# void main() vs main() in C/C++
In C, void main() **has no deifined (legit) usage**, and it can sometimes throw garbage results or an error. however, main() is used to denote the main function which takes no arguments and returns an int data type.

The definition is not and never has been C++, nor has it even been C. See the [ISO C++ standard 3.6.1[2]](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4296.pdf)

Here is the [link to the Geek for Geek C++ lessons](https://www.geeksforgeeks.org/c-plus-plus/?ref=shm).

```C++
void main() {
    // body
}
```

A conforming implementation accepts the formats given below:
```C++
int main() {
    // body
}
```
and 
```C++
int main() {
    // Body
}
```
A conforming implementation may provide more versions of main(), but they must all have return type int. 
The int returned by main() is a way for a program to return a value to "the system" that invokes it. On systems that don't provide such a fcility the return value is is ignored, but that doesn't make "void main( )" legal C++ or legal C.

What does this suppused to mean?

## C++ Data Types
All variables use data-type during declaration to restric the type of data to be stored. 
Thus, we can say that data types are used to tell the variables the type of data it can store.
Whenever, a variable is defined in C++, the compiler allocates some memory for that variable based on the data-type with which it is declared.
Every data type requires a different amount of memory.

Data types in C++ is mainly divided into three types:
1. **Primitive data type**: These date types are built-in or predefined data types and can be used directly by the user to declare variables. example:
    - Interger (Int)
    - Character (char) 
    - Boolean 
    - Floating Point
    - Double Floating Point
    - Valueless or Void
    - Wide Character

2. *Derived data type*: The data-types that are derived from the primitive or built-in datatypes are reffered to as Derived Data Types. These can be of four types namely:
    - Function
    - Array
    - Pointer
    - Reference
3. **Abstract or User Defined Data Types**: These data types are defined by user itself. Like, defining a class in C++ or a structure. C++ provides the following user-defined datatypes:
    - Class
    - Structure
    - Union
    - Enumeration
    - Typedef defined Data Type

This article discuss primitive data types available in C++.
- Integer: Keywords used for integer data types is **int**. Integers typically requires 4 bytes of memory space and ranges from -2147483648 to 2147483647.
- Character data type is used for storing characters. Keyword used for character type is **char**. Characters typically requires 1 byte of memory space and ranges from -128 to 127 or 0 to 255.
- Boolean data type is used for storing boolean or logical values. A boolean variable can store either *true* or *false*. Keyword used for boolean data type is **bool**.
- Floating Point data type is used for storing single precision floating point values or decimal values. Keyword used for floating point data type is **float**. Float variables typically requires 4 byte of memory space.
- Double Floating Point data type is used for storing double precision floating point values or decimal values. Keyword used for double floating point data type is **double**. Double variables typically requires 8 byte of memory space.
- void means without any value. void datatype represents a valueless entity. Void data type is used for those which does not returns a value. 
- Wide character data type is also a character data type but this data type has greater than the normal 8-bit datatype. Represented by **wchar_t** it is generally 2 or 4 byte long.

## Basic Input / Output in C++
C++ comes with libraries that provide us with many ways for performing input and output. In C++ input and output are performed in the form of a sequence of bytes or more commonly known as streams.
- Input Streams: If the direction of flow of bytes is from the device (for example, Keyboard) to the main memory the this process is called input.
- Output Stream: If the direction of flow of bytes is opposite, i.e.  from main memory to device (display screen) then this process is called output.

### Header files available in C++ for Input/Output operations are:
1. **iostream** stands for standard input-output stream. This header file contains definition objects like cin, cout, cerr, etc.
2. **inomanip** stands for input-output manipulators. The methods declared in these files are used for manipulating streams. This file contains definitions of setw, setprecision, etc.
3. **fstream**, this header file mainly describes the file stream. This header fiel is used to handle the data being read from a file as input or data being written into the file as output. 

The two instances **cout** and **cin** in C++ of iostream class are used very frequently for printing and taking input respectively. These two are the most basic methods of taking input adn printing output in C++. To use **cin** and **cout** in C+ one must include the header file **iostream** in the program.

This article mainly discuss the objects defined in the header file **iostream** like the **cin** and **cout**.
- **Standard output stream (cout)**: Usually the standard output device is the dispaly screen. The C++ **cout** statement is the instances of the **ostream class**. It is used to produce output on the standard output device which is usually the display screen.  The data needed to be displayed on the screen is inserted in the standard output stream (**cout**) using the insertion operator(**<<**).
```C++
#include <iostream>

using namespace std;

int main()
{
    char sample[] = "GeeksforGeeks";

    cout << smaple << " - A computer science portal for geeks";

    return 0;
}
```
**OUTPUT:**
```
GeeksforGeeks - A computer science portal for geeks
```
In the above programm, the insertion operator (<<) inserts the value of the string variable **sample** folowed by the string "A computer scienc portal for geeks" in the standard output stream **cout** which is then displayed on the screen. 
- **standard input stream (cin)**: Usually the input device in a computer is the keyboard. C++ cin statement is the instance of the class **istream** and is used to read input from the standard input device which is usually a keyboard. The extraction operator (>>) is used along with the object **cin** for reading inputs. The extraction operator extracts the data from the object **cin** which is entered using the keyboard.
```C++
#include <iostream>
using namespace std;

int main()
{
	int age;

	cout << "Enter your age:";
	cin >> age;
	cout << "\nYour age is: " << age;

	return 0;
}
```
**Input**
```
18
```
**Output**
```
Enter your age:
Your age is: 18
```
The above program asks the user to input the age. The object cin is connected to the input device. The age entered by the user is extracted from cin using the extraction operator (>>) and the extracted data is then stored in the variagble age present on the right side of the extraction operator. 
- **Un-buffered strandard error stream (cerr)**: The C++ cerr is the standard error stream that is used to output the errors. This is also an instance of the ostream that is used to output the errors. This is also an instance of the ostream class. As cerr in C++ is un-buffered so it is used when one needs to display the error message immediately. It does not have any buffer to store the error message and display it later.
- The main difference between cerr and cout comes when you would like to redirect output using "cout" that gets redirected to file, while if you use "cerr" the error doesn't get stored in file. (This is what un-buffered means.. it can't store the message)

## Response on exceeding valid range of data types
$$
f(x)
\begin{cases}
    1 & \text{if } x > 0,\\
    0 & \text{otherwise}
\end{cases}
$$

Consider below programs.
1. Program to show what happens when we cross range of 'char':
```C++
// C++ program to demonstrate
// the problem with 'char'
#include <iostream>

using namespace std;

int main()
{
	for (char a = 0; a <= 225; a++)
		cout << a;
	return 0;
}
```
**a** is declared as char. Here the loop is working from 0 to 255. So, it should print 0 to 255, then stop. 
But it will generate a infinite loop.
The reason for this is the valid range of character datatype is -128 to 127. 
When **a** becomes 128 thorough ***a++***, the range is exceeded and as a result the first number from negative side of the range (i.e. -128) gets assigned toa ***a***.
As a result of this ***a*** will never reach a point 255. So it will print the infinite series of characters.

2. Program to show what happens when we cross range of ***bool***:
```C++
// C++ program to demonstrate
// the problem with 'bool'
#include <iostream>

using namespace std;

int main()
{
	// declaring Boolean
	// variable with true value
	bool a = true;

	for (a = 1; a <= 5; a++)
		cout << a;

	return 0;
}
```
This code will pring '1' infinite time because hera 'a' is declared as 'bool' adn it's valid range is 0 and 1. And for a Boolean variable anything else than 0 is 1 (or true). When 'a' tries to become 2 (through 1++), 1 gets assigned to 'a'. The condition a<=5 is satisfied and the control remains with in the loop.

3. Program to show what happens when we cross range of 'shorts':  
Note that short is short for short int. They are synonymous, short, short int, signed short, and signed short int, signed short, and signed short int are all the same data type.
```C++
// C++ program to demonstrate
// the problem with 'short'
#include <iostream>

using namespace std;

int main()
{
	// declaring short variable
	short a;

	for (a = 32767; a < 32770; a++)
		cout << a << "\n";

	return 0;
}
```
Will this code print 'a' till it becomes 32770? Well the answer is indefinite loop, because here 'a' is declared as a short and its valid range is -32768 to 32767. When 'a' tries to reach 32768 through ***a++***, the range is exceeded and as a result the first number from negative side in the range (-32768) is gets assigned to ***a***. Hence the condition $a<32770$ is satisfied thus it will becomes infinite loop.  
4. Program to show what happens when we cross range of 'unsigned short':
```C++
// C++ program to demonstrate
// the problem with 'unsigned short'
#include <iostream>

using namespace std;

int main()
{
	unsigned short a;

	for (a = 65532; a < 65536; a++)
		cout << a << "\n";

	return 0;
}
```
The same as above this will be the same as above which is infinite loop state.  
Reason range value supported for ***unsigned short*** data type is between 0 to 65535.  
Similar when ***a++*** reach 65336 it will converted to the first number in the range which is 0.
Thus it will satisfied the condition $a < 65536$ and the infinite loop happens.

TLDR;  
The main caveat here is to always vigilant on the data type used in the code. C++ is a static typed language thus stating proper data type is important in the C++ programming.