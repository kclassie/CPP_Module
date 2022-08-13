#include <fstream>
#include <iostream>

std::string	replaceStr(std::string line, int pos, int len, std::string s2)
{
	std::string	before;
	std::string after;
	std::string newline;

	before = line.substr(0, pos);
	after = line.substr(pos + len, line.length() - pos + len);
	newline = before + s2 + after;
	return (newline);
}


int main(int argc, char* argv[]) {

	if (argc != 4) {
		std::cerr << "Error: wrong arguments" << std::endl;
		exit(1);
	}

	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	std::string	line;
	size_t pos;

	std::ifstream fin(filename);
	if (!fin.is_open()) {
		std::cerr << "Error: this file cannot be opened!" << std::endl;
		exit(1);
	}

	std::ofstream fout (filename + ".replace");
	if (!fout)
	{
		std::cerr << "Error: " << filename + ".replace"
			<< "cannot be opened for writing!" << std::endl;
		exit(1);
	}
	while (std::getline(fin, line))
	{
		while ((pos = line.find(s1, pos)) != std::string::npos)
			line = replaceStr(line, pos, s1.length(), s2);
		fout << line << std::endl;
		pos = 0;
	}
}

