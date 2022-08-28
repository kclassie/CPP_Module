#include "Span.hpp"
#include <iostream>
#include <exception>
#include <numeric>

int main()
{
	std::cout << std::endl;
	std::cout << "\033[32m***** TEST 1 *****\033[0m" << std::endl;
	std::cout << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try {
		sp.addNumber(22);
	} catch ( const std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "Vector contains: " ;
	std::copy(sp.getVector()->begin(), sp.getVector()->end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;
	std::cout << "\033[32m***** TEST 2 *****\033[0m" << std::endl;
	std::cout << std::endl;
	Span sp2 = Span(5);
	sp2.addNumber(6);
	try {
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (const std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\033[32m***** TEST 3 *****\033[0m" << std::endl;
	std::cout << std::endl;
	Span sp3 = Span(10000);
	sp3.addRandomNumbers();
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;

	Span sp4 = Span(10000);
	sp4.addRangeNumbers();
	std::cout << sp4.shortestSpan() << std::endl;
	std::cout << sp4.longestSpan() << std::endl;

	return 0;
}
