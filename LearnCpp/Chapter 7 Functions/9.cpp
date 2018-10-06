#include <iostream>
// Chp 9
// The Stack and the heap

// For most information, simply refer to the web page itself
// https://www.learncpp.com/cpp-tutorial/79-the-stack-and-the-heap/

// the memory of a program is divided into multiple areas called segments
// 1) code segment: where the compiled program sits in memory, it should be read-only
// 2) heap: where dynamic memory variables are located from
// 3) stack: an area where function params, local variables, and other function-related information can be located
// 4) ... there are other ares but not as important to know currently

// heap: keeps track of the movement of dynamically allocated memory
// PRO: useful for storing large data structures like structs and classes
// CON: Accessing variabls from the heap is slow
// CON: Allocated memory stays allocated until it is deallocated
// CON: Dynamically allocated memory can only be accesed through a ptr, dereferencing it is slower than accessing it directly

// call stack: keeps track of all active functions from the start to current point of execution and handles allocation of all function params and local var
// It uses a stack data structure which is LIFO
// A good analogy of the call stack is a stack of mailboxes nailed on top of each other. Each mailbox empty during init and a marker exists to mark which mailboxes
// are filled or where the bottom-most empty mailbox is located.
// When a function/item is pushed to the call stack (known as a stack frame: items that contain all necessary information regarding the current funcion call)it is placed
// inside the mailbox where the marker currently is. Once this occurs, the marker is raised to +1 mailbox higher to indicate the next available mailbox. Anything that is on
// or above the marker signifies that it is not on the call stack while everything below it signifies it is
// When an item is popped, then the marker moves -1 to the most recent item in the call stack and removes the contents of the mailbox
// PRO: Allocating memory on the stack is relatively fast
// PRO: Memory allocated on the stack stays in-scope as long as it is in the stack
// PRO: All memory on the stack is known at compile time
// CON: The stack is small, on a windows OS, it's as small as 1mb, implying using the stack to store large heaps of information an undesirable action