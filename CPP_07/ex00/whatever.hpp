#ifndef WHATEVER_HPP
# define WHATEVER_HPP

//Swaps the values of two given arguments. Does not return anything.

template < typename T >
void swap (T & val1, T & val2) {
	T tmp = val1;
	val1 = val2;
	val2 = tmp;
	return;
}

//Compares the two values passed in its arguments and returns the smallest one.
// If the two of them are equal, then it returns the second one.

template < typename T >
T min (T & val1, T & val2) {
	if (val1 < val2)
		return val1;
	return val2;
}

//Compares the two values passed in its arguments and returns the greatest one.
//If the two of them are equal, then it returns the second one.

template < typename T >
T max (T & val1, T & val2) {
	if (val1 > val2)
		return val1;
	return val2;
}

#endif