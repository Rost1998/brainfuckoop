//
// Created by Rostislav TULCHIY on 4/12/18.
//

#include <iostream>
#include "Print.hpp"

///////////////// __ COPLIEN Print ___

Print::Print()
{}

Print::Print(Print const &copy)
{ *this = copy; }

Print::~Print()
{}

Print &Print::operator = (Print const &r)
{ static_cast<void>(r); return *this; }


///////////////// __ GENERAL Print ___

void 		Print::execute(char* & cur_cell, std::deque<char> const & _deque, unsigned & index)
{
	static_cast<void>(_deque);
	static_cast<void>(index);
	std::cout << *cur_cell;
}
