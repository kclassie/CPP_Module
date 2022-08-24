#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
template < typename T>
void  printArrayElem( T const & elem ) {
	std::cout << elem << std::endl;
	return ;
}

template < typename T>
void iter( T *array, int length, void( *func )(T const &elem) ) {
	for (int i = 0; i < length; i++) {
		func(array[i]);
	}
	return ;
}

#endif