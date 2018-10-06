#include <iostream>
// Chp 13
// Command line arguments

// For the past several chapters, main has been used without any function params but this is always not the case
// Assume that a progammer is writing a program that reads an image file and converts the image into a thumbnail
// There would not be a problem where the user of the program enters an image manually from the command line. However,
// problems could result when multiple images are run on this program
// OR
// Consider the case where you want to create thumbnails for all the image files in a given directory. How would you do that? 
// You could run this program as many times as there are images in the directory, typing out each filename by hand. However, 
// if there were hundreds of images, this could take all day! A good solution here would be to write a program that loops through each 
// filename in the directory, calling Thumbnail once for each file.

// command line arguments: optional string arguments that are passed to the OS when launched. The program can then choose to use them
// or ignore them


int main(int argc, char const *argv[]) { // updated main() that takes in 2 function parameters as command line arguments
	// argc (Argument count): # of arguments that will be passed to the program. This is always init to at least 1 since the program itself counts as 1
	// argv (Argument value): location where the argument values are stored, it is an array of C-style strings
	
	std::cout << "There are " <<argc << " arguments:\n";
	for(int i{0}; i < argc; ++i) {
		std::cout << i << " " << argv[i] << "\n";
	}

	// NOTE:
	// 1) dealing with numeric arguments is cumbersome since arguments passed are always treated as strings even if they are numeric in value
	// 2) OS parses command line arguments first

	return 0;
}

/* ====== SUMMARY ========
Command line arguments provide a great way for users or other programs to pass input data into a program at startup. Consider making any input data that a program 
requires at startup to operate a command line parameter. If the command line isn’t passed in, you can always detect that and ask the user for input. That way, your 
program can operate either way.
 */