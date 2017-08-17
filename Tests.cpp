#include <gtest/gtest.h>
#include <string.h>
#include "LCD.hpp"
#include "Digit.hpp"

TEST(DigitLCD, checkZero)
{
	LCD l(0);
	std::string zero = "._.\n|.|\n|_|\n";
	EXPECT_EQ(zero, l.print());
}


TEST(DigitLCD, checkOne)
{
	LCD l(1);
	std::string one = "...\n..|\n..|\n";
	EXPECT_EQ(one, l.print());
}

TEST(DigitLCD, checkOtherNum)
{
	LCD l(6);
	std::string six = "._.\n|_.\n|_|\n";
	EXPECT_EQ(six, l.print());
}

TEST(DigitLCD, checkBiggerThanTenNum)
{
	LCD l(16);
	std::string sixteen = "... ._.\n..| |_.\n..| |_|\n";
	EXPECT_EQ(sixteen, l.print());
}

