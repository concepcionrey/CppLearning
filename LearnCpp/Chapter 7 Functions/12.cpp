#include <iostream>
// Chp 12
// Handling errors,cerr & exit
// Refer to the chapter for majority of learning

int main() {
	// Sample of using cerr
	int *ptr = nullptr;

	if(!ptr){
		std::cerr << "Null pointer encountered\n"; // std::cerr is specifically used for printing error messages
	}
	return 0;
}