#include "iter.hpp"

int main ( void ) {

	int  intArray[5] = {1, 2, 3, 4, 5};
	char charArray[5] = "iter";
	std::string strArray[5] = {"one", "two", "three", "four", "five"};

	iter(intArray, 5, printArrayElem);
	iter(charArray, 4, printArrayElem);
	iter(strArray, 5, printArrayElem);

	return 0;
}