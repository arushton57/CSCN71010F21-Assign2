#include "pch.h"
#include "CppUnitTest.h"

extern "C"
{
#include "../BCSRec/main.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(Test1_getPerimeter_twentyfour)
		{
			//Arrange
			int length = 2;
			int width = 10;
			int expect = 24;
			int actual;

			//Act
			actual = getPerimeter(&length, &width);

			//Assert
			Assert::AreEqual(expect, actual);
		}



		TEST_METHOD(Test2_getArea_thirtysix)
		{
			//Arrange
			int length = 6;
			int width = 6;
			int expect = 36;
			int actual;

			//Act
			actual = getArea(&length, &width);

			//Assert
			Assert::AreEqual(expect, actual);
		}


		TEST_METHOD(Test3_setLength_normal_ten)
		{
			//Arrange
			int NewLength = 10;
			int length = 5;
			int expect = 10;

			//Act
			setLength(NewLength, &length);

			//Assert
			Assert::AreEqual(expect, length);
		}


		TEST_METHOD(Test4_setLength_negatives_nine)
		{//Testing to see if function will accept a negative, it shouldnt
			//Arrange
			int inputlen = -9;
			int length = 7;

			//Act
			setLength(inputlen, &length);

			//Assert
			Assert::IsTrue(inputlen = length);
		}


		TEST_METHOD(Test5_setLength_positive_1)
		{
			//Arrange
			int inputlen = 1;
			int length = 16;

			//Act
			setLength(inputlen, &length);

			//Assert
			Assert::IsTrue(inputlen = length);
		}

		TEST_METHOD(Test6_setWidth_twenty)
		{
			//Arrange
			int inputwid = 20;
			int width = 2;
			int expect = 20;

			//Act
			setWidth(inputwid, &width);

			//Assert
			Assert::AreEqual(expect, width);
		}


		TEST_METHOD(Test7_setWidth_100)
		{//input will be greater than 99, should not accept
			//Arrange
			int inputwid = 100;
			int width = 9;

			//Act
			setWidth(inputwid, &width);

			//Assert
			Assert::IsTrue(inputwid = width);
		}


		TEST_METHOD(Test8_setWidth_decimal_four)
		{//testing if function accepts decimals, wants int so it should not run
			//Arrange
			double inputwid = 4.4;
			int width = 4;
			

			//Act
			setWidth(inputwid, &width);

			//Assert
			Assert::IsTrue(inputwid= width);
		}

	};
}