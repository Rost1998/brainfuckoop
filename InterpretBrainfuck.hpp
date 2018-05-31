//
// Created by Rostislav TULCHIY on 4/12/18.
//

#ifndef EX03_INTERPRETBRAINFUCK_HPP
#define EX03_INTERPRETBRAINFUCK_HPP

#include <string>
#include <map>
#include <deque>
#include "IBrainfuckOperations.hpp"

#define BRAINFUCK_FIELD 1000

class InterpretBrainfuck
{
private:
	std::map<char, IBrainfuckOperations*>	_dict;
	std::deque<char>						_queue;
	char * const							_ptr;
	char *									_cur_cell;

public:
	InterpretBrainfuck();
	InterpretBrainfuck(InterpretBrainfuck const &copy);
	~InterpretBrainfuck();

	void					read_commands(std::string name);
	void					exec();

	// overload
	InterpretBrainfuck&		operator = (InterpretBrainfuck const & r);
};

#endif // EX03_INTERPRETBRAINFUCK_HPP
