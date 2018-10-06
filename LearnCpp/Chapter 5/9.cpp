#include <iostream>
#include <cstdlib>
#include <ctime>
// Chp 9
// Random number generation
// 

// The ability to generate random numbers can be useful for many different kinds of programs. In particular,
// viodegames, statistics and scientific simulations require the need to model random events. Without random
// number generation, several simulations and events become predictable with no possibility of variance with every
// attempt. Unfortunately, this is what computers are. Computers are build by nature to be as predictable as possible without
// any hint of uncertainty existing in its system. 

// Computers are incapable of generating random numbers. Instead, they simulate randomness though PRNG built from complex
// algorithms.
// 

// PRNG (pseudo-random number generators): a program that takes a starting number (known as a seed) and peforms
// a series of mathematical computations to transfrom that number to a completely different and unrelated seed. This
// can be repeated continously to generate more numbers that appear to originate randomly.
// 

// a simple PRNG program
unsigned int samplePRNG() {
	static unsigned int seed{5323}; // the initial seed

	// Take the initial seed & generate a new value from it. It is difficult for one to predict what the next number will be
	seed = 8253729 * seed + 2396403;

	// Take the seed & return a value between 0 and 32767
	return seed % 32768;
} // However, observe the results from using this function continously generates the exact same sequence of random numbers.

// simple function to generate a random number between 2 arbitrary values
int getRandomNumber(int min, int max) {
	static const double fraction = 1.0/ (RAND_MAX + 1.0); // RAND_MAX : a macro that returns at least 32767 (max value of rand())
	// any value returned by rand will always return std::rand() * fraction a value between 0 & < 1
	// (max-min+1) generates the possible numbers that can returned (Eg. if max = 8 and min = 5, 4 possible values can be returned)
	// // min is added to shift the results to be within the designated range
	return min + static_cast<int>((max-min+1)* (std::rand() * fraction));
}

int main() {

	// srand(): tells the compiler to set the initial seed value to a value passed by the function caller/ always ca
	// std::srand(5323); // always located at the top of main()
	std::srand(static_cast<unsigned int>(std::time(0))); // sets the initial seed value to the system clock

	// Example 1: sample PRNG program
	for (int i{1}; i<=100; ++i) {
		std::cout << samplePRNG() << "\t";

		if (i % 5 == 0) {
			std::cout <<  "\n";
		}
	}

	// C & C++ have built-in pseudo random number generators via std::srand() & std::rand()
	// Example 2: using srand() and rand()
	for (int i{1}; i<= 100; ++i) {
		std::cout << std::rand() << "\t"; // srand(): generates the next random number in the sequence. This is pre-set to be an integer between 0 & RAND_MAX

		if (i % 5 == 0) {
			std::cout <<  "\n";
		}
	} // However, observe the results from using this function continously generates the exact same sequence of random numbers like samplePRNG().

	// Although the last two examples have simulated random numbers, it is predictable with every execution resulting in the same set of random numbers. To
	// overcome this, a seed needs to be randomized but that sounds like a catch-22! Instead, the seed doesn't technically need to be a random number but a different
	// number every time the program is executed.
	
	// example 3: simply change the srand() to use std::time() to simulate it
	std::cout << "\n";

	std::cout << getRandomNumber(0,9) << "\n"; // for in-depth explanation refer to guide online
	// the modolus operator is not used because it is biased to result in lower numbers
	return 0;

	// Sometimes, we want to generate random numbers between two arbitrary values (a min & a max)
}

// General guide to a good PRNG
// 1) The PRNG should generate each number with approximately the same probability (distribution uniformity)
// 2) The method by which the next number in the sequence is generated shouldn’t be obvious or predictable
// 3) The PRNG should have a good dimensional distribution of numbers
// 4) All PRNGs are periodic
// TLDR: Uniform, Black box, Dimensional, Sequence variation