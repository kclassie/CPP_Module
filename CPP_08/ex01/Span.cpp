#include "Span.hpp"

Span::Span( void ) {
	this->_N = 0;
	return;
}

Span::Span( int vecLength ) {
	if (vecLength < 0)
		throw std::out_of_range("\033[31mError: index out of range\033[0m");
	this->_N = ( unsigned int) vecLength;
	return;
}

Span::Span( const Span & ref) {
	*this = ref;
	return;
}

Span & Span::operator=( const Span & ref) {
	if (this != & ref) {
		this->_N = ref._N;
		copy(ref._intVector.begin(), ref._intVector.end(), back_inserter(this->_intVector));
	}
	return *this;
}

void Span::addNumber( int num ) {
	if (this->_N > this->_intVector.size())
		this->_intVector.push_back(num);
	else
		throw std::out_of_range("\033[31mError: not enough storage in vector!\033[0m");
	return;
}

int op_imod(int i) {
	return std::abs(i);
}

int Span::shortestSpan( void ) {
	if (this->_intVector.size() < 2)
		throw std::out_of_range("\033[31mError: not enough numbers in vector!\033[0m");
	std::vector<int> result1;
	adjacent_difference(this->_intVector.begin(), this->_intVector.end(),
					 std::back_inserter(result1));
	result1.erase(result1.begin());
	std::vector<int> result2;
	result2.resize(result1.size());
	std::transform(result1.begin(), result1.end(), result2.begin(), op_imod);
	return *std::min_element(result2.begin(), result2.end()) ;
}

int Span::longestSpan( void ) {
	if (this->_intVector.size() < 2)
		throw std::out_of_range("\033[31mError: not enough numbers in vector!\033[0m");
	std::vector<int> result1;
	adjacent_difference(this->_intVector.begin(), this->_intVector.end(),
						std::back_inserter(result1));
	result1.erase(result1.begin());
	std::vector<int> result2;
	result2.resize(result1.size());
	std::transform(result1.begin(), result1.end(), result2.begin(), op_imod);
	return *std::max_element(result2.begin(), result2.end()) ;
}

std::vector<int> * Span::getVector( void ) {
	return &this->_intVector;
}

int RandomNumber() {
	return (std::rand() % 100);
}

void Span::addRandomNumbers( void ) {
	int arr[this->_N];
	srand(time(0));
	for (int i = 0; i < (int)this->_N; i++)
		arr[i] = 1 + rand() % 100;
	this->_intVector.assign(arr, arr + this->_N);
//	for (int i = 0; i < (int)this->_N; i++) {
//		this->_intVector.push_back(RandomNumber());
//	}
	return;
}

void Span::addRangeNumbers( void ) {
	for (int i = 0; i < (int)this->_N; i++) {
		this->_intVector.push_back(i);
	}
	return;
}

Span::~Span( void ) {
	return;
}