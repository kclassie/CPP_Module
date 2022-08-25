#include "Array.hpp"
#include <iostream>

int main( void ) {

	std::cout << "\n\033[32m*** ARRAY OF CHARS ***\033[0m\n" << std::endl;
	Array<char> emptyArray;
	std::cout << "\033[32mEmptyArray: " << &emptyArray << " EmptyArray length = "
		<< emptyArray.size() << "\033[0m" << std::endl;
	for (int i = 0; i < emptyArray.size(); i++) {
		std::cout << emptyArray[i] << std::endl;
	}
	try {
		Array<char> wrongArray(-1);
	}
	catch (const std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	Array<char> charArray(5);
	for (int i = 0; i < charArray.size(); i++)
		std::cout << i << ": " << charArray[i] << std::endl;
	for (int i = 0; i < charArray.size(); i++)
		charArray[i] = '$';
	for (int i = 0; i < charArray.size(); i++)
		std::cout << i << ": " << charArray[i] << std::endl;

	std::cout << "\n\033[32m*** ARRAY OF INTS ***\033[0m\n" << std::endl;
	Array<int> intArray(5);
	std::cout << "\033[32mIntArray: " << &intArray << " IntArray length = "
		<< intArray.size() << "\033[0m" << std::endl;
	for (int i = 0; i < intArray.size(); i++) {
		std::cout << intArray[i] << std::endl;
	}
	intArray[2] = 666;
	std::cout << intArray[2] << std::endl;
	for (int i = 0; i < intArray.size(); i++) {
		std::cout << intArray[i] << std::endl;
	}
	Array<int> newArray = intArray;
	std::cout << "\033[32mNewArray: " << &newArray << " NewArray length = "
		<< newArray.size() << "\033[0m" << std::endl;
	for (int i = 0; i < newArray.size(); i++) {
		std::cout << newArray[i] << std::endl;
	}
	try {
		std::cout << intArray[8] << std::endl;
	}
	catch (const std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}