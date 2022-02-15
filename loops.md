# C++ loop.md
Loop in programming come into use when we need to repeatedly execute a block of statemens.
There are two types of loop:
1. **Entry Controlled Loops:** In this type of loops the test condition is tested before entering the loop body. **For Loop** and **While Loop** are entry controlled loops.
2. **Exit Controlled Loops:** In this type of loops the test condition is tested or evaluated at the end of loop body. Therefore, the loop body will execute at least once, irrespective of whether in test condition is true or false. **do-while loop** is exit controlled loop.

![c++-loops](./images/Cpp-loops.png)

**Syntax**:
```c++
for (initialization expr; test expr; update expr)
{
    // body of the loop
    // statements we want to execute
}
```
here is the practical example:
```c++
// C program to illustrate for loop 
#include <stdio.h> 

int main() 
{ 
	int i=0; 
	
	for (i = 1; i <= 10; i++) 
	{ 
		printf( "Hello World\n");	 
	} 

	return 0; 
} 
```
It will print Hello world for 10 times.

For while loop is much simpler but you have to make sure to include update expression in the loop body!!
Also the initialization expression must be stated outside the loop body.
Here is the practical example:
```c++
// C program to illustrate while loop 
#include <stdio.h> 

int main() 
{ 
	// initialization expression 
	int i = 1; 

	// test expression 
	while (i < 6) 
	{ 
		printf( "Hello World\n");	 

		// update expression 
		i++; 
	} 

	return 0; 
} 
```
It will print "Hello World" 5 times.

Now for a different kind of loop this is the do-while loop. Please don't mistaken this as while loop:
```c++
initialization_expression;
do
{
   // statements

   update_expression;
} while (test_expression);
```
Here is the practical example:
```c++
// C program to illustrate do-while loop 
#include <stdio.h> 

int main() 
{ 
	int i = 2; // Initialization expression 

	do
	{ 
		// loop body 
		printf( "Hello World\n");	 

		// update expression 
		i++; 

	} while (i < 1); // test expression 

	return 0; 
} 
```
notice this will still print "Hello World" once even the initializing expression failed to meet the test expression. 

Final warning: beware of the risk creating infinite loop! Always make sure to have invariants and converging variables inside the loop to ensure finite loop!

