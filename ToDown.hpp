//
// Created by Rostislav TULCHIY on 4/12/18.
//

#ifndef EX03_TODOWN_HPP
#define EX03_TODOWN_HPP

#include <deque>
#include "IBrainfuckOperations.hpp"

class ToDown : public IBrainfuckOperations
{
public:
	ToDown();
	ToDown(ToDown const &copy);
	~ToDown();

	// exec
	void 		execute(char* & cur_cell, std::deque<char> const & _deque, unsigned & index);

	// overload
	ToDown&		operator=(ToDown const & r);
};

#endif //EX03_TODOWN_HPP