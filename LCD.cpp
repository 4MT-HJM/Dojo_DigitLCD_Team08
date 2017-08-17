#include "LCD.hpp"
#include "Digit.hpp"


LCD::LCD(int p_num):m_num(p_num)
{
	
	//int tempNum;
	if(p_num>10)
	{
		m_digits.emplace_back(p_num/10);
   		m_digits.emplace_back(p_num%10);
	}
	else
	{
		m_digits.emplace_back(p_num);
	}

}


std::string LCD::print()
{
	std::string temp0,temp1,temp2;
    for(auto it = m_digits.begin();it != m_digits.end();it++)
	{
       temp0 += it->line0 + ' ';
	   temp1 += it->line1 + ' ';
	   temp2 += it->line2 + ' ';
	}
	return   temp0.substr(0, temp0.size()-1) +'\n'
		   + temp1.substr(0, temp1.size()-1) +'\n'
		   + temp2.substr(0, temp2.size()-1) +'\n';
}
