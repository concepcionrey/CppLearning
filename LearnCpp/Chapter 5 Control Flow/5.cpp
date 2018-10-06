#include <iostream>
// Chp 5
// While statements
// 

// A while statement is the most basic form of looping that exists in C++. It is similar to an if statement but instead
// of moving to the next block once it finishes excuting a statement it jumps back to the while call and repeats
// the process till the expression within the while block has become false
// 
// It makes use of the "while" keyword where 

void simpleWhileLoop() {
	int count{0};
	while (count < 10) { // every single execution of a loop is called an iteration
		std::cout << count << " ";
		++count;
	}
	std::cout << "Simple while loop has finished! \n";
}

void sampleInfiniteLoop() {
	unsigned int count{15}; // unless static, any variable defined within a while loop has automatic duration for every iteration
	while (count ==0) {
		if (count == 0) {
			std::cout << "Blast off! \n";
		} else {
			std::cout << count << " ";
			--count;
		}
	}
}

void coolUseOfLoop() {
	int count{1};
	while(count <= 50) {
		if (count < 10) {
			std::cout << "0" << count << " ";
		} else {
			std::cout << count << " ";
		}
		if (count % 10 == 0) {
			std::cout << "\n";
		}
		++count;
	}
}

void quiz2() {
	char currLetter{65};
	while (currLetter <= 90 ) {
		std::cout << currLetter << " in interger is " << static_cast<int>(currLetter) << "\n";
		currLetter++;
	}
}

void quiz3() {
	int outer{5};
	while(outer > 0) {
		int inner{outer};
		while (inner >= 1) {
			std::cout << inner-- << " ";
			}
		std::cout << "\n";
		--outer;
	}
}

void quiz4() {
	int outer{1};
	while(outer <= 5) {
		int inner{5};
		while(inner >= 1) {
			if (inner <= outer) {
				std::cout << inner << " ";
			} else {
				std::cout << "  ";
			}
			--inner;
		}
		std::cout << "\n";
		++outer;
	}
}

void quiz44() {
	int outer{5};
		while (outer >= 1) {
			int inner{1};
			int resolver{0};
			while(inner <= 5) {
				int foo{5-resolver};
				if (inner >= outer) {
					std::cout << foo  << " ";
				} else {
					std::cout << "  ";
				}
				++resolver;
				++inner;
			}
			std::cout << "\n";
			--outer;
		}
}
int main() {
	simpleWhileLoop();
	//sampleInfiniteLoop();
	coolUseOfLoop();
	quiz2();
	quiz3();
	quiz4();
	quiz44();
	return 0;
}

// Quiz	
// 1) For very iteration of the outer loop, the inner loop resets to 1. If it was declared right after outer, then for every outer loop iteration
// inner will never change
// 2)