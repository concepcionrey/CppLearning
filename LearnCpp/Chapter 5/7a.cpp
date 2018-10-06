#include <iostream>
// Chp 7a
// A good description of control flow
// 

//   P1         P2      P3
for (int i{ 0 }; i < 10; /* Here */ ++i)
{
  // Code  
}
// More code
 
// Control flow of a for-loop (Where P* are the three parts of the for-loop's header, '_' marks the repeating part):
// 0: P1
//_1: if (P2) Go to (2) else Go to (5)
//_2: Code
//_3: P3
//_4: Go to (1)
// 5: More code
 
 
while (/* Here */ count < 10)
{
  // Code
}
// More code
 
// Control flow of a while-loop
// 0: if (condition) Go to (1) else Go to (3)
// 1: Code
// 2: Go to (0)
// 3: More code
