#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8_1_6/lab_8_1_6.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test
{
	TEST_CLASS(Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char s[100] = { "ssssgonnalikerrrr" };
			char l[100] = { "**gonnalike**" };
			Change(s);
			Assert::AreEqual(s, l);
		}
	};
}
