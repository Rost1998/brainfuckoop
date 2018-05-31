//
// Created by Rostislav TULCHIY on 4/12/18.
//

#include "ToNext.hpp"

///////////////// __ COPLIEN ToNext ___

ToNext::ToNext()
{}

ToNext::ToNext(ToNext const &copy)
{ *this = copy; }

ToNext::~ToNext()
{}

ToNext&	ToNext::operator = (ToNext const &r)
{ static_cast<void>(r); return *this; }


///////////////// __ GENERAL ToNext ___

void 		ToNext::execute(char* & cur_cell, std::deque<char> const & _deque, unsigned & index)
{
	static_cast<void>(_deque);
	static_cast<void>(index);
	++cur_cell;
}
