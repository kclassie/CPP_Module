#include "MutantStack.hpp"


int main()
{
	std::cout << std::endl;
	std::cout << "\033[32m***** MUTANT STACK *****\033[0m" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "MStack top :" << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "MStack top :" <<  mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "MStack contains:" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;
	std::cout << "\033[32m***** STL STACK *****\033[0m" << std::endl;
	std::stack<int> s(mstack);
	std::cout << s.top() << std::endl;
	s.pop();
	std::cout << "Start size: " << (int)s.size() << std::endl;

	for (int i = 0; i <= (int)s.size() + 2; i++)
	{
		std::cout << s.top() << std::endl;
		s.pop();
	}
	std::cout << "Final size: " << s.size() << std::endl;
	std::cout << "Is empty?? " << s.empty() << std::endl;
	return 0;
}