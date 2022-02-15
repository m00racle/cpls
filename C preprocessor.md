# C++ PREPROCESSOR
As the name suggests Preprocessors are programs that ***process our source code before compilation***. There are a number of steps involved between writing a program and executing a program in C/C++. Let's have a look at these steps before we actually start learning about preprocessors.  
The source code written by programmers is stored in the ***file program with extension .c*** . 
This file is then processed by the preprocessors and expanded source code file is generated named program. 
This expanded file is compiled by the compiler and an object code file is generated named program .obj.
Finally, the linker links this object code file to the object code of the library functions to generate the executable file program .exe.

Preprocessor programs provide preprocessors directives which tell the compiler to preprocess the source code before compiling. 
All of these proeprocessor directives begin with a $\#$ (***hash***) symbol. 
The $\#$ symbol indicates that, whatever statementstarts with $\#$, is going to the preprocessor program , and preprocessor program will execute this statement. 
Examples of some preprocessor directives are: ***#include, #define, #ifndef*** etc. Remember that $\#$ symbol only provides a path that it will go to the preprocessor, and command such as include is processed by preprocessor program. 
For example, include will include extra code to your program.
We can place these preprocessor directive anywhere in our program.  
Ther are 4 main types of preprocessor directives:
1. Macros
2. File inclusion
3. Conditinal Compilation
4. Other directives

Let's not learn about each of these directives in detail.
- **Macros** are piece of code in a program which is given some name. Whenever this name is encountered by the compiler the compiler replaces the name with the actual ppiece of code. The '***define***' directive is used to define a macro. Let's now understand the macro definition with the help of a program:
```C++
#include <iostream>

// macro definition
#define LIMIT 5
int main()
{
	for (int i = 0; i < LIMIT; i++) {
		std::cout << i << "\n";
	}

	return 0;
}
```
The output here is clear it will be integers 0,1,2,3,4.  
But the main thing to focus here is the macro definition '***#define LIMIT 5***'. 
Thus, when the compiler executes the word ***LIMIT*** it will replace it with int 5. 
The world '***LIMIT***' in the macro definition is called a macro template and '***5***" is macro expansion.

NOTE: There si no semi-colon(;) at the end of the macro definition. Macro definition do not need a semi-colon to end.

**MACROS with arguments: We can also pass arguments to macros. 
Macros defined with arguments works similarly as functions. 
Let's understand this with a program:
```C++
#include <iostream>

// macro with parameter
#define AREA(l, b) (l * b)
int main()
{
	int l1 = 10, l2 = 5, area;

	area = AREA(l1, l2);

	std::cout << "Area of rectangle is: " << area;

	return 0;
}
```
The output of this code is "Area of rectangle is: 50"..  
Once again focus on the macro definition with parameter '__#define AREA(l, b) (l \* b)__'. 
This will make whenever the compiler finds AREA(l, b) in the program it will replace it with the statement (l * b). Not only this, the values passed to the macro template AREA(l, b)will also be replaced in the statement (l * b). Therefore, AREA(10, 5) will be equal to 10*5.

- **File Iclusion**: This type of preprocessor directive tells the compiler to include a file in the source code program. There are two type of files which can be included by the user in the program:
    - **Header File or Standard Files**: These files contains definition of predefined functions like printf(), scanf(), etc. These files must be included for working with these functions. Different functions are declared 