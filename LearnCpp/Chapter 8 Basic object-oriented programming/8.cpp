#include <iostream>
// Chp 8
// Hidden "this" pointer

// a common question raised when one learns about OOP for the first time is, how does C++ keep track of knowing which
// object that was called on? C++ achieves this behaviour through using a hidden pointer known as "this"

// consider this class
class Simple
{
private:
	int m_id;
public:
	Simple(int id){
		setID(id);
	}
	void setID(int id) {
		m_id = id;
	}
	int getID() {
		return m_id;

	}
	// To explicitly refer to this hidden "this" ptr
	void doSomething() {
		std::cout << this->m_id << "\n"; //Recommendation: Do not add this-> to all uses of your class members. Only do so when you have a specific reason to.
	}
	//~Sample();
	
};
int main(int argc, char const *argv[]) {

    Simple simple(1);
    simple.setID(2);
    std::cout << simple.getID() << '\n'; // when this is called, C++ knows this should operate on object simple

    /*
    When simple.setID(2) is called & the compiler finishes compiling it, it is read as setID(&simple, 2) where simple
    changed from an object prefix to become an argument/ reference 

    When the compiler compiles a normal member function, it implicitly adds a new parameter to the function named 
    this”. The this pointer is a hidden const pointer that holds the address of the object the member function was called on

    Putting it all together:
	1) When we call simple.setID(2), the compiler actually calls setID(&simple, 2).
	2) Inside setID(), the *this pointer holds the address of object simple.
	3) Any member variables inside setID() are prefixed with “this->”. So when we say m_id = id, the compiler is actually executing 
	this->m_id = id, which in this case updates simple.m_id to id.
     */
    
    simple.doSomething();

	return 0;
}

/* ==== SUMMARY ======
	The “this” pointer is a hidden parameter implicitly added to any non-static member function. Most of the time, you will not need to access it directly, 
	but you can if needed. It’s worth noting that “this” is a const pointer -- you can change the value of the underlying object it points to, but you can not 
	make it point to something else!

By having functions that would otherwise return void return *this instead, you can make those functions chainable. This is most often used when overloading 
operators for your classes (something we’ll talk about more in chapter 9).
 */