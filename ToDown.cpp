//
// Created by Rostislav TULCHIY on 4/12/18.
//

#include "ToDown.hpp"

///////////////// __ COPLIEN ToDown ___

ToDown::ToDown()
{}

ToDown::ToDown(ToDown const &copy)
{ *this = copy; }

ToDown::~ToDown()
{}

ToDown &ToDown::operator=(ToDown const &r)
{ static_cast<void>(r); return *this; }


///////////////// __ GENERAL ToDown ___

void 		ToDown::execute(char* & cur_cell, std::deque<char> const & _deque, unsigned & index)
{
	static_cast<void>(_deque);
	static_cast<void>(index);
	--*cur_cell;
}
