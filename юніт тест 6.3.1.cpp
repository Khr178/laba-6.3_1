#include "pch.h"
#include "CppUnitTest.h"
#include "../лаба 6.3.1/лаба 6.3.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace юніттест631
{
	TEST_CLASS(юніттест631)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int s[1] = { 1 };
			int b;
			b = Sum(s, 0);
			Assert::AreEqual(b, 0);
		}
	};
}
