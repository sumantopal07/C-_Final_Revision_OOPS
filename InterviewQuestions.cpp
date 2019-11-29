ques: What is the difference b / w struct & union ?
ans : union has only one memory space.

==================
ques : What is the difference between #include <filename> and #include “filename” ?
Ans : The difference is in the location where the preprocessor searches for the included file.

For #include "filename" the preprocessor searches in the same directory as the file containing the directive.This method is normally used to include programmer - defined header files.

For #include <filename> the preprocessor searches in an implementation dependent manner, normally in search directories pre - designated by the compiler / IDE.This method is normally used to include standard library header files.

==================
Ques:Difference between dangling pointer and memory leak
Ans : If a pointer is pointing to memory that is not owned by your program(except the null pointer) or an invalid memory, the pointer is called a dangling pointer.
a memory leak occurs when you forget to deallocate the allocated memory.
==================== =
Ques : What is the difference between static and extern in C ?
Ans : The static storage class is used to declare an identifier that is a local variable either to a function or a file and that exists and retains its value after control passes from where it was declared.This storage class has a duration that is permanent.A variable declared of this class retains its value from one call of the function to the next.The scope is local.A variable is known only by the function it is declared within or if declared globally in a file, it is known or seen only by the functions within that file.This storage class guarantees that declaration of the variable also initializes the variable to zero or all bits off.

The extern storage class is used to declare a global variable that will be known to the functions in a file and capable of being known to all functions in a program.This storage class has a duration that is permanent.Any variable of this class retains its value until changed by another assignment.The scope is global.A variable can be known or seen by all functions within a program.
========== =
Ques : int(*ptr)[10];
Ans: int* ptr[10];

This is an array of 10 int* pointers, not as you would assume, a pointer to an array of 10 ints

int(*ptr)[10];

This is a pointer to an array of 10 int

It is I believe the same as int* ptr; in that both can point to an array, but the given form can ONLY point to an array of 10 ints
===============
Ques: Describe static and dynamic binding of functions.
Ans:
	Static Binding :
By default, matching of function call with the correct function definition happens at compile time.This is called static binding or early binding or compile - time binding.Static binding is achieved using function overloading and operator overloading.Even though there are two or more functions with same name, compiler uniquely identifies each function depending on the parameters passed to those functions.

Dynamic Binding :
C++ provides facility to specify that the compiler should match function calls with the correct definition at the run time; this is called dynamic binding or late binding or run - time binding.Dynamic binding is achieved using virtual functions.Base class pointer points to derived class object.And a function is declared virtual in base class, then the matching function is identified at run - time using virtual table entry.



