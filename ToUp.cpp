//
// Created by Rostislav TULCHIY on 4/12/18.
//

#include "ToUp.hpp"

///////////////// __ COPLIEN ToUp ___

ToUp::ToUp()
{}

ToUp::ToUp(ToUp const &copy)
{ *this = copy; }

ToUp::~ToUp()
{}

ToUp &ToUp::operator=(ToUp const &r)
{ static_cast<void>(r); return *this; }


///////////////// __ GENERAL ToUp ___

void 		ToUp::execute(char* & cur_cell, std::deque<char> const & _deque, unsigned & index)
{
	static_cast<void>(_deque);
	static_cast<void>(index);
	++*cur_cell;
}
