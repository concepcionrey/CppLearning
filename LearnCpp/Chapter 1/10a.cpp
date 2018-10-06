#include <iostream>
#include "math.h"
#include "geometry.h"
// Chp 10a
// Header guards

int main () {
	return 0;
}

/*
Case 1: Improper use (no conditional compilers)
The result of using #include directives in the code

int getSquareSides()  // from math.h
{
    return 4;
}
 
int getSquareSides() // from geometry.h
{
    return 4;
}
 
int main()
{
    return 0;
}

 */

/*
Case 2: proper use (has conditional compilers in math.h)
The result of using #include directives in the code

Here, preprocessor sees that MATH_H hasn't been defined yet so it
copies the contents of math.h into 10a.cpp & MATH_H is define. Once
it evaluates to geometry.h, it will understand that MATH_H has been
defined, therefore content between the header guards is ignored.

int getSquareSides()  // from math.h
{
    return 4;
}
 
int main()
{
    return 0;
}
 */

// Header guards do not prevent a header from being included once into 
// different code files. This is good behaviour when executed with proper
// header usage where it is a goal for every file to reference the contents
// of the header.
// 

// #pragma once: a type of header guard that serves the same purpose
// with being the advantage of being shorter and less error-prone. It is 
// not however, an official part of C++.
// 

// QUIZ:
/*
#ifndef GEOMETRY_H
#define GEOMETRY_H

#include "math.h"
 */