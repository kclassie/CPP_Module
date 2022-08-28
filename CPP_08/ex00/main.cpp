#include "easyfind.hpp"
#include <vector>
#include <array>

int main( void ) {
	std::vector<int> vecArray;
	vecArray.push_back(100);
	vecArray.push_back(2);
	vecArray.push_back(-1);
	vecArray.push_back(42);
	vecArray.push_back(5);

	try {
		easyfind( vecArray, -1 );
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
	try {
		easyfind(vecArray, -100);
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
	std::array<int, 6> numbers = { 1, 2, 3, 4, 5, 6 };
	try {
		easyfind( numbers, -1 );
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
	try {
		easyfind(numbers, 6);
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
}