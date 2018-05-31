//
// Created by Rostislav TULCHIY on 4/12/18.
//

#include "WhileSt.hpp"

///////////////// __ COPLIEN WhileSt ___

WhileSt::WhileSt()
{}

WhileSt::WhileSt(WhileSt const &copy)
{ *this = copy; }

WhileSt::~WhileSt()
{}

WhileSt &WhileSt::operator=(WhileSt const &r)
{ static_cast<void>(r); return *this; }


///////////////// __ GENERAL WhileSt ___

void 		WhileSt::execute(char* & cur_cell, std::deque<char> const & _deque, unsigned & index)
{
	unsigned counter = 0;

	if (!*cur_cell)
		do
		{
			if (_deque[index] == '[')
				++counter;
			else if (_deque[index] == ']')
				--counter;
			++index;
		} while (counter);
}
