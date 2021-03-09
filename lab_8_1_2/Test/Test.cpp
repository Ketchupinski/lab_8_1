#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8_1_2/lab_8_1_2.cpp"
#define _CRT_SECURE_NO_WARNINGS

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test
{
	TEST_CLASS(Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char s[10] = "groooot";
			char a[10] = "gr**t";
			Change(s);
			Assert::AreEqual(s, a);
		}
	};
}
