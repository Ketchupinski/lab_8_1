#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8_1_4/lab_8_1_4.cpp"
#define _CRT_SECURE_NO_WARNINGS

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char s[10] = "groooot";
			char a[10] = "gr**t";
			char str[10];
			int d;
			d = 8; // довжина рядка str
			Change(s, str, 0, 0, d);
			Assert::AreEqual(s, a);
		}
	};
}
