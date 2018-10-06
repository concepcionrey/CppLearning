#include <iostream>
#include <cstdarg>
// Chp 14
// Using Ellipsis (and why not use them!)

// Sample code
double findAverage(int count, ...)
{
    double sum = 0;
 
    // We access the ellipsis through a va_list, so let's declare one
    va_list list;
 
    // We initialize the va_list using va_start.  The first parameter is
    // the list to initialize.  The second parameter is the last non-ellipsis
    // parameter.
    va_start(list, count);
 
    // Loop through all the ellipsis arguments
    for (int arg=0; arg < count; ++arg)
         // We use va_arg to get parameters out of our ellipsis
         // The first parameter is the va_list we're using
         // The second parameter is the type of the parameter
         sum += va_arg(list, int);
 
    // Cleanup the va_list when we're done.
    va_end(list);
 
    return sum / count;
}

// Don't do it because type checking is suspended which can create situations for users to pass arguments that don't match with the expectations of the function
// such as passing a double when the function expects an int
// It also doesn't know how many parameters were passed in the ellipsis
int main() {
	std::cout << findAverage(5, 1, 2, 3, 4, 5) << '\n';
	int value = 7;
	std::cout << findAverage(6, 1.0, 2, "Hello, world!", 'G', &value, &findAverage) << '\n';
	return 0;
}

/* ==== SUMMARY ======
First, if possible, do not use ellipsis at all! Oftentimes, other reasonable solutions are available, even if they require slightly more work. For example, i
n our findAverage() program, we could have passed in a dynamically sized array of integers instead. This would have provided both strong type checking (to make 
sure the caller doesn’t try to do something nonsensical) while preserving the ability to pass a variable number of integers to be averaged.

Second, if you do use ellipsis, do not mix expected argument types within your ellipsis if possible. Doing so vastly increases the possibility of the caller 
inadvertently passing in data of the wrong type and va_arg() producing a garbage result.

Third, using a count parameter or decoder string as part of the argument list is generally safer than using a sentinel as an ellipsis parameter. This forces the user to 
pick an appropriate value for the count/decoder parameter, which ensures the ellipsis loop will terminate after a reasonable number of iterations even if it produces a 
garbage value.
 */