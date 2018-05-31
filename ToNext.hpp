//
// Created by Rostislav TULCHIY on 4/12/18.
//

#ifndef EX03_TONEXT_HPP
#define EX03_TONEXT_HPP

#include <deque>
#include "IBrainfuckOperations.hpp"

class ToNext : public IBrainfuckOperations
{
public:
	ToNext();
	ToNext(ToNext const &copy);
	~ToNext();

	// exec
	void 		execute(char* & cur_cell, std::deque<char> const & _deque, unsigned & index);

	// overload
	ToNext&		operator = (ToNext const & r);
};

#endif //EX03_ToNext_HPP