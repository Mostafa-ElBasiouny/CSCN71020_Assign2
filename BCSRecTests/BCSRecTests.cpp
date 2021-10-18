#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);

extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecTests
{
	TEST_CLASS(BCSRecTests_Task_1)
	{
	public:
#pragma region getPerimeter unit test
		TEST_METHOD(getPerimeter_Valid_IfPerimeterIsCorrect)
		{
			int length = 32;
			int width = 8;
			int result = getPerimeter(&length, &width);
			Assert::AreEqual(80, result);
		}
#pragma endregion

#pragma region getArea unit test
		TEST_METHOD(getArea_Valid_IfAreaIsCorrect)
		{
			int length = 16;
			int width = 2;
			int result = getArea(&length, &width);
			Assert::AreEqual(32, result);
		}
#pragma endregion
	};

	TEST_CLASS(BCSRecTests_Task_2)
	{
	public:
#pragma region setLength unit tests
		TEST_METHOD(setLength_Valid_IfLenghtIsWithinRange)
		{
			int length = -1;
			setLength(48, &length);
			Assert::AreEqual(48, length);
		}

		TEST_METHOD(setLength_Invalid_IfLenghtIsAboveTheUpperLimit)
		{
			int length = -1;
			setLength(100, &length);
			Assert::AreNotEqual(100, length);
		}

		TEST_METHOD(setLength_Invalid_IfLenghtIsLowerThanLowerLimit)
		{
			int length = -1;
			setLength(0, &length);
			Assert::AreNotEqual(0, length);
		}
#pragma endregion

#pragma region setWidth unit tests
		TEST_METHOD(setWidth_Valid_IfLenghtIsWithinRange)
		{
			int length = -1;
			setWidth(48, &length);
			Assert::AreEqual(48, length);
		}

		TEST_METHOD(setWidth_Invalid_IfLenghtIsAboveTheUpperLimit)
		{
			int length = -1;
			setWidth(100, &length);
			Assert::AreNotEqual(100, length);
		}

		TEST_METHOD(setWidth_Invalid_IfLenghtIsLowerThanLowerLimit)
		{
			int length = -1;
			setWidth(0, &length);
			Assert::AreNotEqual(0, length);
		}
#pragma endregion
	};
}
