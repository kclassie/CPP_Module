#include <iostream>

//types of value: char, int, float, double, +/-inf, nan

void checkValue(std::string value) {
	try {
		stoi(value);
	}
	catch (const std::exception & e) {
		std::cerr << "\033[31mERROR: wrong argument!\033[0m" << std::endl;
		exit(1);
	}
}

void convertChar(std::string value) {
	char *ch = new char[value.length() + 1];
	strcpy(ch, value.c_str());
	std::cout << "\033[32mchar: " << *ch << std::endl;
	std::cout << "int: " << static_cast<int>(*ch) << std::endl;
	std::cout << "float: " << static_cast<float>(*ch) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(*ch) << ".0\033[0m" << std::endl;
	delete [] ch;
	return;
}

void convertInt(std::string value) {
	int num = stoi(value);
	if ((num>= 0 && num <= 31) || num == 127) {
		std::cout << "\033[32mchar: " << "Non displayable" << std::endl;
	}
	else if (num < 0 || num > 126) {
		std::cout << "\033[32mchar: " << "impossible" << std::endl;
	}
	else {
		std::cout << "\033[32mchar: " << static_cast<char>(num) << std::endl;
	}
	std::cout << "int: " << num << std::endl;
	std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(num)<< ".0\033[0m" << std::endl;
	return;
}

void convertNan(std::string value) {
	(void)value;
	std::cout << "\033[32mchar: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << "nanf" << std::endl;
	std::cout << "double: " << "nan\033[0m" << std::endl;
	return;
}

void convertInf(std::string value) {
	std::cout << "\033[32mchar: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << value[0] << "inff" << std::endl;
	std::cout << "double: " << value[0] << "inf\033[0m" << std::endl;
	return;
}

void convertFloatDouble(std::string value) {
	float num = stof(value);
	std::cout << "\033[32mchar: " << "impossible" << std::endl;
	std::cout << "int: " << static_cast<int>(num) << std::endl;
	if (num - static_cast<int>(num) == 0)
		std::cout << "float: " << num << ".0f" << std::endl;
	else
		std::cout << "float: " << num << "f" << std::endl;
	if ((num - static_cast<int>(num)) == 0)
		std::cout << "double: " << static_cast<double>(num) << ".0\033[0m" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(num) << "\033[0m" << std::endl;
	return;
}

void convert(std::string value) {
	if (value.length() == 1) {
		char *ch = new char[value.length() + 1];
		strcpy(ch, value.c_str());
		if (!(*ch >= 48 && *ch <= 57)) {
			delete [] ch;
			return convertChar(value);
		}
		else {
			delete [] ch;
			return convertInt(value);
		}
	}
	else if (value == "nan" || value == "nanf")
		return convertNan(value);
	else if (value == "-inf" || value == "+inf" || value == "-inff" || value == "+inff")
		return convertInf(value);
	else {
		if ((int)value.find_last_of('f') == (int)value.length() - 1) {
			checkValue(value);
			return convertFloatDouble(value);
		}
		if ((int)value.find('.') > -1) {
			checkValue(value);
			return convertFloatDouble(value);
		}
	}
	checkValue(value);
	return convertInt(value);
}

int main( int argc, char ** argv ) {
	if ( argc != 2 ) {
		std::cerr << "\033[31mERROR: wrong argument!\033[0m" << std::endl;
		exit(1);
	}
	std::string str(argv[1]);
	convert(str);
}