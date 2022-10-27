#include "pch.h"
#include "CppUnitTest.h"
#include "../ADS_CA1_V2/Functions.h"
#include "../ADS_CA1_V2/Laptop.h"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ADSCA1TestV2
{
	TEST_CLASS(ADSCA1TestV2)
	{
	public:
		
		TEST_METHOD(testInterleaveArraysEqualLength)
		{
			//input
			int dataArrA[3] = { 1, 3, 5 };
			int lengthA = 3;

			int dataArrB[3] = { 2, 4, 6 };
			int lengthB = 3;

			//output
			int dataArrC[6] = { 0, 0, 0, 0, 0, 0 };  //should end as {1, 2, 3, 4, 5, 6}
			int lengthC = 6;

			// your code goes here.{1, 2, 3, 4, 5, 6}
			int expectedOutput[6] = { 1, 2, 3, 4, 5, 6 };
			interleave(dataArrA, lengthA, dataArrB, lengthB, dataArrC, lengthC);
			for (int i = 0; i < lengthC; i++)
			{
				Assert::AreEqual(expectedOutput[i], dataArrC[i]);
			}
			
		}

		TEST_METHOD(testInterleaveArraysDifferentLength)
		{
			//input
			int dataArrA[3] = { 1, 2, 5 };
			int lengthA = 3;

			int dataArrB[4] = { 7, 6, 4, 3 };
			int lengthB = 4;

			//output
			int dataArrC[7] = { 0, 0, 0, 0, 0, 0, 0 };  //should end as {1, 7, 2, 6, 5, 4, 3}
			int lengthC = 7;

			// your code goes here.
			int expectedOutput[7] = { 7, 1, 6, 2, 4, 5, 3 };//
			interleave(dataArrB, lengthB, dataArrA, lengthA, dataArrC, lengthC);
			for (int i = 0; i < lengthC; i++)
			{
				Assert::AreEqual(expectedOutput[i], dataArrC[i]);
			}

		}

		/************************************** Question 4 **************************************/

		TEST_METHOD(testLaptopInitalized)
		{
			//instanciate a new laptop object and test that the object is set correctly

			// your code goes here

			Laptop l1("HP", 444.99, 512, 5.5);
			string make = "HP";
			Assert::AreEqual(l1.make, make);
			Assert::AreEqual(l1.price, 444.99);
			Assert::AreEqual(l1.hdSize, 512);
			Assert::AreEqual(l1.processorSpeed, 5.5);





		}

		TEST_METHOD(testLaptopLessThan)
		{
			//instanciate two different and distinct Television objects and <= operator to test that one object is less than the other

			//your code goes here...
			Laptop l1("HP", 444.99, 512, 5.5);
			Laptop l2("HP", 444.99, 512, 5.2);
		
			Assert::IsTrue(l2 <= l1);
		}
	};
}
