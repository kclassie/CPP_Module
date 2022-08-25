#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <stdexcept>

template < class T >
class Array {

private:
	T * _array;
	unsigned int _arrayLength;

public:
	Array( void ) {
		this->_arrayLength = 0;
		this->_array = new T[0];
		return;
	}

	Array( int arrayLength ) {
		if (arrayLength < 0)
			throw std::out_of_range("\033[31mError: index out of range\033[0m");
		this->_arrayLength = ( unsigned int) arrayLength;
		this->_array = new T[arrayLength];
		return;
	}

	Array( const Array & arr) {
		*this = arr;
		return;
	}

	int size( void ) const {
		return (int)this->_arrayLength;
	}

	Array & operator=( const Array & arr) {
		if (this != & arr) {
			this->_arrayLength = arr._arrayLength;
			this->_array = new T[arr._arrayLength];
			for (int i = 0; i < (int)arr._arrayLength; i++)
				this->_array[i] = arr._array[i];
		}
		return *this;
	}

	T & operator[]( int index ) const {
		if ( index < 0 || index >= this->size())
			throw std::out_of_range("\033[31mError: index out of range\033[0m");
		return this->_array[index];
	}

	~Array( void ) {
		delete [] this->_array;
		return;
	}
};

#endif