#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 8.2/Source.cpp"
using namespace std;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(RemoveNonLettersTest)
        {
            string input = "Hello  World";
            string expectedoutput = "HELLO  WORLD";
            string actualOutput = ConvertToLowercase(input);
            
            Assert::AreEqual(actualOutput, expectedoutput);

        }
    };
}
