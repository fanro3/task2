#include "pch.h"
#include "C:\Users\oma19\source\repos\ConsoleApplication10\ConsoleApplication10\Header.cpp"

TEST(TestCaseName, TestName) {
	vector<int> v1 = { 1, 2, 3, 4 };
	vector<int> v2 = { 3, 4, 5, 6 };
	for (int i = 0; i < v1.size(); ++i) {
		ASSERT_EQ(inc(v1, 2)[i], v2[i]);
	}

	v1 = { 0, 5, 2, 7, -26 };
	v2 = { -4, 1, -2, 3, -30 };
	for (int i = 0; i < v1.size(); ++i) {
		ASSERT_EQ(inc(v1, -4)[i], v2[i]);
	}

	v1 = { 1, -1, 4, -23567, 12 };
	v2 = v1;
	for (int i = 0; i < v1.size(); ++i) {
		ASSERT_EQ(inc(v1, 0)[i], v2[i]);
	}

	v1 = { -234, 84, 0, 1242, 12342 };
	v2 = { 234, 552, 468, 1710, 12810 };
	for (int i = 0; i < v1.size(); ++i) {
		ASSERT_EQ(inc(v1, 468)[i], v2[i]);
	}

	v1 = { 7 };
	v2 = { -25 };
	ASSERT_EQ(inc(v1, -32)[0], v2[0]);
}