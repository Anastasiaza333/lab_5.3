#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.3/Source.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{ 
			double a;
			a = s(0);
			Assert::AreEqual(a, 2.);
		}
	};
}
