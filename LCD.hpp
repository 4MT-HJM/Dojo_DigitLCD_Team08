#pragma once
#include <vector>
#include "Digit.hpp"
#include <string>

class LCD
{
public:
	LCD(int p_num):m_num(p_num){};

	std::string print();

private:
	int m_num;
	std::vector<Digit> m_digits;
};
