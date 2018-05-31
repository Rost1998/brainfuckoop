//
// Created by Rostislav TULCHIY on 4/12/18.
//

#include "ToPrev.hpp"

///////////////// __ COPLIEN ToPrev ___

ToPrev::ToPrev()
{}

ToPrev::ToPrev(ToPrev const &copy)
{ *this = copy; }

ToPrev::~ToPrev()
{}

ToPrev&	ToPrev::operator = (ToPrev const & r)
{ static_cast<void>(r); return *this; }


///////////////// __ GENERAL ToPrev ___

void 		ToPrev::execute(char* & cur_cell, std::deque<char> const & _deque, unsigned & index)
{
	static_cast<void>(_deque);
	static_cast<void>(index);
	--cur_cell;
}
