#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <unistd.h>
#include <exception>

//randomly instanciates A, B or C and returns the instance as a Base pointer

Base * generate( void ) {

	srand(time(0));
	int first = rand();
	int second = rand();
	int third = rand();
	if( first >= second && first >= third )
		return new A;
	if( second >= first && second >= third )
		return new B;
	return new C ;
}

//prints the actual type of the object pointed to by p: "A", "B" or "C".

void identify(Base* p) {
	if ( dynamic_cast<A*>(p) ) {
		std::cout << "\033[32mThis is A pointer\033[0m" << std::endl;
		return;
	}
	if ( dynamic_cast<B*>(p) ) {
		std::cout << "\033[32mThis is B pointer\033[0m" << std::endl;
		return;
	}
	if ( dynamic_cast<C*>(p) ) {
		std::cout << "\033[32mThis is C pointer\033[0m" << std::endl;
		return;
	}
	std::cout << "\033[32mUnidentified pointer\033[0m" << std::endl;
	return;
}

//It prints the actual type of the object pointed to by p: "A", "B" or "C". Using a pointer
//inside this function is forbidden.

void identify(Base& p) {
	try {
		A & a = dynamic_cast<A&>(p);
		(void) a;
		std::cout << "\033[31mThis is A reference\033[0m" << std::endl;
	}
	catch (const std::exception & e) {}
	try {
		B & b = dynamic_cast<B&>(p);
		(void) b;
		std::cout << "\033[31mThis is B reference\033[0m" << std::endl;
	}
	catch (const std::exception & e) {}
	try {
		C & c = dynamic_cast<C&>(p);
		(void) c;
		std::cout << "\033[31mThis is C reference\033[0m" << std::endl;
	}
	catch (const std::exception & e) {}
	return;
}

int main( void ) {
	Base *tmp;
	for (int i = 0; i < 10; i++) {
		sleep(1);
		tmp = generate();
		identify(tmp);
		Base & tmp2 = *tmp;
		identify(tmp2);
	}
	tmp = NULL;
	identify(tmp);
//	Base & tmp2 = *tmp;
//	identify(tmp2);
}