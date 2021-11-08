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
		
		// ==================================================  results in draw
		TEST_METHOD(T1_gameResult_drawTrue)
		{
			char a[5] = { 'R', 'o', 'c', 'k' };
			char b[5] = { 'R', 'o', 'c', 'k' };

			int gameResult = RockPaperScissors(a, b);
			Assert::AreEqual(5, gameResult);
		}
		// ==================================================  results in player2 winning as scissors and then player1 winning as paper
		TEST_METHOD(T1_gameResult_P1_Paper_P2_Scissors_P2win)
		{
			char a[6] = { 'P','a','p','e','r' };
			char b[9] = { 'S','c','i','s','s','o','r','s' };

			int gameResult = RockPaperScissors(a, b);
			Assert::AreEqual(2, gameResult);
		}	

		TEST_METHOD(T1_gameResult_P1_Paper_P2_Rock_P1win)
		{
			char a[6] = { 'P','a','p','e','r' };
			char b[5] = { 'R', 'o', 'c', 'k' };

			int gameResult = RockPaperScissors(a, b);
			Assert::AreEqual(1, gameResult);
		}

		// ==================================================  results in player2 winning as paper and then player1 winning as rock

		TEST_METHOD(T1_gameResult_P1_Rock_P2_Paper_P2win)
		{
			char a[5] = { 'R', 'o', 'c', 'k' };
			char b[6] = { 'P','a','p','e','r' };

			int gameResult = RockPaperScissors(a, b);
			Assert::AreEqual(2, gameResult);
		}

		TEST_METHOD(T1_gameResult_P1_Rock_P2_Scissors_P1win)
		{
			char a[5] = { 'R', 'o', 'c', 'k' };
			char b[9] = { 'S','c','i','s','s','o','r','s' };

			int gameResult = RockPaperScissors(a, b);
			Assert::AreEqual(2, gameResult);
		}

	};
}
