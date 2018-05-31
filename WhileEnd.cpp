//
// Created by Rostislav TULCHIY on 4/12/18.
//

#include "WhileEnd.hpp"

///////////////// __ COPLIEN WhileEnd ___

WhileEnd::WhileEnd()
{}

WhileEnd::WhileEnd(WhileEnd const &copy)
{ *this = copy; }

WhileEnd::~WhileEnd()
{}

WhileEnd &WhileEnd::operator=(WhileEnd const &r)
{ static_cast<void>(r); return *this; }


///////////////// __ GENERAL WhileEnd ___

void 		WhileEnd::execute(char* & cur_cell, std::deque<char> const & _deque, unsigned & index)
{
	unsigned	counter = 0;

	if (*cur_cell)
		do
		{
			if (_deque[index] == ']')
				++counter;
			else if (_deque[index] == '[')
				--counter;
			--index;
		} while (counter);
}
