#include <iostream>
#include "InterpretBrainfuck.hpp"

#include <map>
int		main(int argc, char **argv)
{
	if (argc != 2)
		return 1;

	InterpretBrainfuck	go;

	go.read_commands(argv[1]);
	go.exec();

//	std::map<char, int>		test;
//
//	test.insert(std::pair<char,int>('a',12));
//	test.insert(std::pair<char,int>('b',213));
//	test.insert(std::pair<char,int>('c',234234));

	return 0;
}
