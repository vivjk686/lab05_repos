#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_5.1/LAB_5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:

		TEST_METHOD(TestT_Zero)
		{
			// t(0) = 0/2 - 0/24 - 1 = -1
			Assert::AreEqual(-1.0, t(0), 1e-9);
		}

		TEST_METHOD(TestT_Two)
		{
			// t(2) = 4/2 - 16/24 - 1 = 1/3
			Assert::AreEqual(1.0 / 3.0, t(2), 1e-9);
		}
	};
}