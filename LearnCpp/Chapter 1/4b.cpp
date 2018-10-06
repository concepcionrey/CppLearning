#include <iostream>
// Chp 4b
// Why functions are useful, and how to use them effectively
// 
// 5 REASONS TO USE FUNCTIONS:
// 1)Organization: As programs grow in complexity, having all functionality
// inside a singular main function creates complications. This makes it harder
// to reason about the code and understand what is going on. 
// 
// 2)Reusability: Once a function's been written, it can be reused elsewhere
// in the system. This prevents the nasty habit of copy-pasting code and minimizing
// the overall length of the system.
// 
// 3)Testing: It's a common task of a programmer to debug and validate
// their code to adhere to a certain standard and follow a specfic sequence
// of behaviour. It becomes impossible to test if everything resides in a single
// aarea in the system.
// 
// 4)Extensibility: When we desire to add additional functionality,  it's easier
// to add it via a new function without drastically changing a lot of the current code
// base.
// 
// 5)Abstraction: Functions create a simplication of understanding in what a program or
// component of a program does. It reduces the time it takes to understand and apply what's
// given.
// 
// C++ has 3 primary goals for a program:
// 1) Reading inputs from the user
// 2) Calculating a value from the inputs
// 3) Printing the calculated value