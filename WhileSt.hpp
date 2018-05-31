//
// Created by Rostislav TULCHIY on 4/12/18.
//

#ifndef EX03_WHILEST_HPP
#define EX03_WHILEST_HPP

#include <deque>
#include "IBrainfuckOperations.hpp"

class WhileSt : public IBrainfuckOperations
{
public:
	WhileSt();
	WhileSt(WhileSt const &copy);
	~WhileSt();

	// exec
	void 		execute(char* & cur_cell, std::deque<char> const & _deque, unsigned & index);

	// overload
	WhileSt &operator=(WhileSt const &r);
};

#endif //EX03_WHILEST_HPP
