#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8_1_5/lab_8_1_5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char s[101] = { "something like llll" };
			Assert::AreEqual(true, Include(s));
		}
	};
}
