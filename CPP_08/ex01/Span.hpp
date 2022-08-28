#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <numeric>
# include <cmath>
# include <iostream>
# include <ctime>
# include <cstdlib>
# include <algorithm>

class Span {

private:
	unsigned int _N;
	std::vector<int> _intVector;

public:
	Span( void );
	Span( int vecLength );
	Span( const Span & );
	Span & operator=( const Span & );
	~Span( void );

	void addNumber( int num );
	int shortestSpan( void );
	int longestSpan( void );
	void addRandomNumbers( void );
	void addRangeNumbers( void );
	std::vector<int> * getVector( void );
};

#endif