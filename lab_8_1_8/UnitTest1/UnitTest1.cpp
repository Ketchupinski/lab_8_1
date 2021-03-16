#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8_1_8/lab_8_1_8.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str = { "I'm gonnnn show yooooou" };
			string str2 = { "I'm go** show y**ou" };
			Change(str);
			Assert::AreEqual(str, str2);
		}
	};
}
