//
// Created by Rostislav TULCHIY on 4/12/18.
//

#ifndef EX03_TOPREV_HPP
#define EX03_TOPREV_HPP

#include <deque>
#include "IBrainfuckOperations.hpp"

class ToPrev : public IBrainfuckOperations
{
public:
	ToPrev();
	ToPrev(ToPrev const &copy);
	~ToPrev();

	// exec
	void 		execute(char* & cur_cell, std::deque<char> const & _deque, unsigned & index);

	// overload
	ToPrev&	operator = (ToPrev const & r);
};

#endif //EX03_TOPREV_HPP