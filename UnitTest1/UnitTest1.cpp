#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3.3C/Money.h"
#include "../lab3.3C/Money.cpp"
#include "../lab3.3C/Object.h"
#include "../lab3.3C/Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Money b;
			+b;
			int t = b.getTotal();
			Assert::AreEqual(0, t);
		}
	};
}
