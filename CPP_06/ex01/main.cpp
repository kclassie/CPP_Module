#include <string>
#include <iostream>
#include <stdint.h>

struct Data
{
	int         intVal;
	char        charVal;
	std::string strVal;
	float       floatVal;
};

//takes a pointer and converts it to the unsigned integer type uintptr_t

uintptr_t serialize( Data * ptr ) {
	return( reinterpret_cast< uintptr_t >( ptr ) );
}

//takes an unsigned integer parameter and converts it to a pointer to Data.
Data * deserialize( uintptr_t raw ) {
	return( reinterpret_cast< Data * > ( raw ) );
}

int main() {
	Data * newData = new Data;
	Data * newData2;
	uintptr_t cast;
	newData->charVal = 's';
	newData->floatVal = 21.21;
	newData->intVal = 21;
	newData->strVal = "School 21";
	cast = serialize(newData);
	std::cout << "uintptr_t return after firs cast: "<< cast << std::endl;
	std::cout <<"memory: " << newData << " char: "<< newData->charVal << " int: "
			<< newData->intVal << " float: " << newData->floatVal << " string: " <<
			newData->strVal << std::endl;
	newData2 = deserialize(cast);
	std::cout <<"memory: " << newData2 << " char: "<< newData2->charVal
			<< " int: " << newData2->intVal << " float: " << newData2->floatVal
			<< " string: " << newData2->strVal << std::endl;
	delete newData;
	return 0;
}