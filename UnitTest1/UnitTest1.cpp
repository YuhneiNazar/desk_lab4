#include "pch.h"
#include "CppUnitTest.h"
#include "../desk_lab4/desk_lab4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(factorial(5), 120);
			Assert::AreEqual(factorial(0), 1);
			Assert::AreEqual(factorial(1), 1);
		}
	};
}
