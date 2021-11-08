#include "pch.h"
#include "CppUnitTest.h"

extern "C"
{
#include "rps.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissorsTest
{
	TEST_CLASS(RockPaperScissorsTest)
	{
	public:
		
		TEST_METHOD(T1_gameResult_drawTrue)
		{
			char a[5] = { 'R', 'o', 'c', 'k' };
			char b[5] = { 'R', 'o', 'c', 'k' };

			int gameResult = RockPaperScissors(a, b);
			Assert::AreEqual(0, gameResult);
		}
	};
}
