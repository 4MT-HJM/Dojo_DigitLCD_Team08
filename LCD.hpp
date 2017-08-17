#pragma once
#include <vector>
#include <string>

class Digit;

class LCD
{
public:
	LCD(int p_num);

	std::string print();

private:
	int m_num;
	std::vector<Digit> m_digits;
};
