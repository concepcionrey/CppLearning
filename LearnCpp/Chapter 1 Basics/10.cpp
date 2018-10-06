#include <iostream>
#define FOO 42 // Macro example where all calls to foo in the code are replaced
// Chp 10
// A first look at the preprocessor
//

// Preprocessor: a separate program that runs before the compiler.
// It's job is to scan code from top to bottom for directives.
// 
// Directives: specific instructions that start with a "#" & end with
// a "\n" character. The preprocessor isn't smart. All it does is manipulate
//  text before the compiler runs. The output of the preprocessor is then
//  relayed to the compiler. Note that the original code file is not 
//  modified but rather all text changes occur only in-memory.
//  
//  Three types of Directives:
//  1) Includes: the preprocessor copies the contents of the included file
//  into the including file at the point of the #include directive. 
//  1.1) It has two forms, <> & "". Where the preprocessor looks for the file
//  in a specific place in the system and the preprocessor looks in the 
//  directory of the source file calling the #include, respectively.
//  
//  2) Macros: a substitution/ redefintion of an input sequence into a
//  replacement output sequence. Avoid the use of function macros and prioritize
//  object like macros.
//  
//  3) Conditional compilation: directives that dictate what condition
//  certain instructions are compiled. These include:
//  a. #ifdef: if defined then do the ff
//  b. #ifndef: negation of of #ifdef
//  c. #endif: ends the conditional compilation

int main() {
	// An example of #ifdef condition
	#ifdef FOO
	std::cout << "Foo" << "\n";
	#endif

	// An example of #ifndef condition
	#ifndef ROSS
	std::cout << "Ross was not defined" << "\n";
	#endif

	// An example of a macro in action
	std::cout << FOO << "\n";
	return 0;
}

// NOTES
// 1) Macros only cause text substitution for normal code, if a variable
// for a macro was reused for another preprocessor directive, then it is ignored.
// 2) Directives are resolved before compilation, directives only come into play
// from the point of its definition to the end of the file that's defined it.