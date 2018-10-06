#include <iostream>
#include <chrono>
#include <vector>
// Chp 16
// Timing our Code

// It is important to check the performance of how written code by testing how past it runs.

// C++ has a <chrono> library and its possible to generate the following...
class Timer
{
private:
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1> >;

	std::chrono::time_point<clock_t> m_beg;

public:
	Timer(): m_beg(clock_t::now()){}

	void reset() {
		m_beg = clock_t::now();
	}

	double elapsed() const {
		return std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
	}

};

int main(int argc, char const *argv[]) {
	Timer t;
	std::vector<int> v;

	for(int i = 0; i < 100; ++i) {
		v.push_back(i+1);
	}
/*
	for(auto& n:v) 
		std::cout << n << "\n";
*/
	std::cout << "Time elapsed: " << t.elapsed() << " seconds\n";
	return 0;
}

/* How to do timing
1) Be sure to test with a release build target over a debug build target, Debug build targets, usually have their optimization turned off.
2) Timing results will also be influenced by other programs in the background. Therefore, be sure the computer isn't doing
anything CPU/ memory extensive
3) Meaure at least 3 times. 
	3.1) If they are all similar, take the average
	3.2) If one is an outlier, keep testing to determine which one is the outlier
4) note that results are only valid for your machine’s architecture, OS, compiler, and system specs. You may get different results on other 
systems that have different strengths and weaknesses.

 */