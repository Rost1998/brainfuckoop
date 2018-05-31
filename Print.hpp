//
// Created by Rostislav TULCHIY on 4/12/18.
//

#ifndef EX03_PRINT_HPP
#define EX03_PRINT_HPP

#include <deque>
#include "IBrainfuckOperations.hpp"

class Print : public IBrainfuckOperations
{
public:
	Print();
	Print(Print const &copy);
	~Print();

	// exec
	void 		execute(char* & cur_cell, std::deque<char> const & _deque, unsigned & index);

	// overload
	Print&	operator = (Print const & r);
};

#endif //EX03_PRINT_HPP