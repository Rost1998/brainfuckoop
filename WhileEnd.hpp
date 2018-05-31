//
// Created by Rostislav TULCHIY on 4/12/18.
//

#ifndef EX03_WHILEEND_HPP
#define EX03_WHILEEND_HPP

#include <deque>
#include "IBrainfuckOperations.hpp"

class WhileEnd : public IBrainfuckOperations
{
public:
	WhileEnd();
	WhileEnd(WhileEnd const &copy);
	~WhileEnd();

	// exec
	void 		execute(char* & cur_cell, std::deque<char> const & _deque, unsigned & index);

	// overload
	WhileEnd&	operator=(WhileEnd const & r);
};

#endif //EX03_WHILEEND_HPP