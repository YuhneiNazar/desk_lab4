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
			int n = 3;
			std::string expectedOutput = "123\n132\n213\n231\n312\n321\n";

			std::stringstream buffer;
			std::streambuf* oldCoutBuffer = std::cout.rdbuf(buffer.rdbuf());
			zav1(n);
			std::string actualOutput = buffer.str();
			std::cout.rdbuf(oldCoutBuffer);

			Assert::AreEqual(expectedOutput, actualOutput);
		}

		TEST_METHOD(TestMethod2)
		{
			int n = 4;
			int r = 2;
			std::string expectedOutput = "01\n02\n03\n12\n13\n23\n";

			std::stringstream buffer;
			std::streambuf* oldCoutBuffer = std::cout.rdbuf(buffer.rdbuf());
			zav2(n, r);
			std::string actualOutput = buffer.str();
			std::cout.rdbuf(oldCoutBuffer);

			Assert::AreEqual(expectedOutput, actualOutput);
		}
		TEST_METHOD(TestMethod3)
		{
			Assert::AreEqual(factorial(5), 120);
			Assert::AreEqual(factorial(0), 1);
			Assert::AreEqual(factorial(1), 1);
		}
	};
}
