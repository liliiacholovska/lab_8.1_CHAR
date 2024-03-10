#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab8.1(3)/lab8.1(3).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestFindThirdDotIndex)
        {
            char str1[] = "++-+!!!!!!,,...";
            char str2[] = "...";
            char str3[] = "abc";

            Assert::AreEqual(14, FindThirdDotIndex(str1));
            Assert::AreEqual(2, FindThirdDotIndex(str2));
            Assert::AreEqual(-1, FindThirdDotIndex(str3));
        }

        TEST_METHOD(TestReplaceEveryFourthCharWithDot)
        {
            char str1[] = "abcdefghijklmnopqrstuvwxyz";
            char* modifiedStr1 = ReplaceEveryFourthCharWithDot(str1);
            char expectedResult1[] = "abc.efg.hij.klm.nop.qrs.tuv.wxy.z";

            char str2[] = "abc";
            char* modifiedStr2 = ReplaceEveryFourthCharWithDot(str2);
            char expectedResult2[] = "abc";

            Assert::AreEqual(-1, strcmp(expectedResult1, modifiedStr1));
            Assert::AreEqual(0, strcmp(expectedResult2, modifiedStr2));

            delete[] modifiedStr1;
            delete[] modifiedStr2; 
        }
	};
}