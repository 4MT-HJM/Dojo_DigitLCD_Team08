#include <gtest/gtest.h>
#include <string.h>
#include "LCD.hpp"

TEST(DigitLCD, checkZero)
{
	LCD l(0);
	std::string zero = "._.\n|.|\n|_|\n";
	EXPECT_EQ(zero, l.print());
}
