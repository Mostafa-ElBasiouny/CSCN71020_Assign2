#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecTests
{
	TEST_CLASS(BCSRecTests)
	{
	public:
		TEST_METHOD(getPerimeter_Valid_IfPerimeterIsCorrect)
		{
			int length = 32;
			int width = 8;
			int result = getPerimeter(&length, &width);
			Assert::AreEqual(80, result);
		}

		TEST_METHOD(getArea_Valid_IfAreaIsCorrect)
		{
			int length = 16;
			int width = 2;
			int result = getArea(&length, &width);
			Assert::AreEqual(32, result);
		}
	};
}
