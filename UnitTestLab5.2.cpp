#include "pch.h"
#include "CppUnitTest.h"
#include "..\pr.5.2\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab52
{
	TEST_CLASS(UnitTestLab52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a=1;
		    A(1., 0., a);
			Assert::AreEqual(1., a);
		}
	};
}
