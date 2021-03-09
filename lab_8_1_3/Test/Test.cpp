#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8_1_3/lab_8_1_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			char s[10] = "groooot";
			Assert::AreEqual(true, Include(s, 0, 1));
		}
	};
}
