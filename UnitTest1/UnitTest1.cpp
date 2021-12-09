#include "pch.h"
#include "CppUnitTest.h"
#include "../5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c = A(0, 1);
			Assert::AreEqual(2, c);

		}
	};
}
