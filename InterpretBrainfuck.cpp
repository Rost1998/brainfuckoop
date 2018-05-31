//
// Created by Rostislav TULCHIY on 4/12/18.
//

#include <fstream>
#include "InterpretBrainfuck.hpp"
#include "ToNext.hpp"
#include "ToPrev.hpp"
#include "ToUp.hpp"
#include "ToDown.hpp"
#include "WhileSt.hpp"
#include "WhileEnd.hpp"
#include "Print.hpp"

///////////////// __ COPLIEN InterpretBrainfuck ___

InterpretBrainfuck::InterpretBrainfuck() : _ptr(new char [BRAINFUCK_FIELD])
{
	for (unsigned i = 0; i < BRAINFUCK_FIELD; ++i)
		_ptr[i] = 0;
	_cur_cell = _ptr;

	_dict.insert(std::pair<char, IBrainfuckOperations*>('.', new Print()));
	_dict.insert(std::pair<char, IBrainfuckOperations*>('>', new ToNext()));
	_dict.insert(std::pair<char, IBrainfuckOperations*>('<', new ToPrev()));
	_dict.insert(std::pair<char, IBrainfuckOperations*>('+', new ToUp()));
	_dict.insert(std::pair<char, IBrainfuckOperations*>('-', new ToDown()));
	_dict.insert(std::pair<char, IBrainfuckOperations*>('[', new WhileSt()));
	_dict.insert(std::pair<char, IBrainfuckOperations*>(']', new WhileEnd()));
}

InterpretBrainfuck::InterpretBrainfuck(InterpretBrainfuck const &copy) : _ptr(new char [BRAINFUCK_FIELD])
{ *this = copy; }

InterpretBrainfuck::~InterpretBrainfuck()
{ delete [] _ptr; }

InterpretBrainfuck&	InterpretBrainfuck::operator=(InterpretBrainfuck const &r)
{
	for (unsigned i = 0; i < BRAINFUCK_FIELD; ++i)
		_ptr[i] = r._ptr[i];
	_cur_cell = r._cur_cell;
	return *this;
}


///////////////// __ GENERAL InterpretBrainfuck ___

void		InterpretBrainfuck::read_commands(std::string filename)
{
	std::ifstream	file(filename);
	char 			buff = 0;

	if (!file.is_open())
		throw std::fstream::failure("file not open");

	while (!file.eof())
	{
		buff = file.get();
		if (buff == '\n')
			continue ;
		_queue.push_back(buff);
	}
	file.close();
}

void		InterpretBrainfuck::exec()
{
	IBrainfuckOperations*	oper;
	unsigned				index = 0;

	while (index < _queue.size())
	{
		if ((oper = _dict[_queue.at(index)]))
			oper->execute(_cur_cell, _queue, index);
		++index;
	}
}
