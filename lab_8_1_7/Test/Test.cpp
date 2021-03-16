#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include <string>
#include "../lab_8_1_7/lab_8_1_7.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace Test
{
	TEST_CLASS(Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const string s = { "rukazzzznoga" };
			Assert::AreEqual(true, Include(s));

		}
	};
}
