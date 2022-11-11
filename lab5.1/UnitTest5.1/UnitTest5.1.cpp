#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double test1;
			test1 = f(0, 1, 2);
			Assert::AreEqual(test1, 0.0);

		}
	};
}
