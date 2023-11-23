#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 13.2.1/math_operations.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest132
{
	TEST_CLASS(UnitTest132)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int test = CUBE(5);
			Assert::AreEqual(125, test);
		}
	};
}