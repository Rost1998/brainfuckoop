//
// Created by Rostislav TULCHIY on 4/12/18.
//

#ifndef EX03_TOUP_HPP
#define EX03_TOUP_HPP

#include <deque>
#include "IBrainfuckOperations.hpp"

class ToUp : public IBrainfuckOperations
{
public:
	ToUp();
	ToUp(ToUp const &copy);
	~ToUp();

	// exec
	void 		execute(char* & cur_cell, std::deque<char> const & _deque, unsigned & index);

	// overload
	ToUp&	operator = (ToUp const &r);
};

#endif //EX03_TOUP_HPP