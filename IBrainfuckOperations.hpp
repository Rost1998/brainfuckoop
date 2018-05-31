//
// Created by Rostislav TULCHIY on 4/12/18.
//

#ifndef EX03_IBRAINFUCKOPERATIONS_HPP
#define EX03_IBRAINFUCKOPERATIONS_HPP

class IBrainfuckOperations
{
public:
	virtual void 	execute(char* & cur_cell, std::deque<char> const & _deque, unsigned & index) = 0;
};

#endif // EX03_IBRAINFUCKOPERATIONS_HPP
