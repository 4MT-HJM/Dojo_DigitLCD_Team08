#include "LCD.hpp"
#include "Digit.hpp"


LCD::LCD(int p_num):m_num(p_num)
{
	m_digits.emplace_back(p_num);

}



std::string LCD::print()
{
	return (m_digits[0].line0 + '\n' + m_digits[0].line1 + '\n' + m_digits[0].line2 +'\n'); 
}
