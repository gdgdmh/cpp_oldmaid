#include "test_trump.hpp"

#include "../../trump/logic/trump.hpp"

/**
 * @brief Construct a new Test Scene Stack object
 *
 * @param output_console 出力クラス
 */
test_code::TestTrump::TestTrump(
    std::shared_ptr<mhl::IOutputConsole> output_console)
    : mhl::UnitTestBase(output_console) {}

/**
 * @brief Destroy the Test Scene Stack object
 *
 */
test_code::TestTrump::~TestTrump() {}

/**
 * @brief ユニットテスト実行
 *
 */
void test_code::TestTrump::ExecuteUnitTest() {
  GetSuitNoneJokerAll();
  GetSuitSpadeAll();
  GetSuitHeartAll();
  GetSuitDiamondAll();
  GetSuitClubAll();

  GetNumberAllSuit1();
  GetNumberAllSuit2();
  GetNumberAllSuit3();
  GetNumberAllSuit4();
  GetNumberAllSuit5();
  GetNumberAllSuit6();
  GetNumberAllSuit7();
  GetNumberAllSuit8();
  GetNumberAllSuit9();
  GetNumberAllSuit10();
  GetNumberAllSuit11();
  GetNumberAllSuit12();
  GetNumberAllSuit13();
  GetNumberJoker1();
  GetNumberJoker2();

  IsSpadeAllSpade();
  IsSpadeAllHeart();
  IsSpadeAllDiamond();
  IsSpadeAllClub();
  IsSpadeAllJoker();
  IsHeartAllSpade();
  IsHeartAllHeart();
  IsHeartAllDiamond();
  IsHeartAllClub();
  IsHeartAllJoker();
  IsDiamondAllSpade();
  IsDiamondAllHeart();
  IsDiamondAllDiamond();
  IsDiamondAllClub();
  IsDiamondAllJoker();
  IsClubAllSpade();
  IsClubAllHeart();
  IsClubAllDiamond();
  IsClubAllClub();
  IsClubAllJoker();

  GetSuitStringAllSpade();
  GetSuitStringAllHeart();
  GetSuitStringAllDiamond();
  GetSuitStringAllClub();
  GetSuitStringAllJoker();

  GetSuitShortStringAllSpade();
  GetSuitShortStringAllHeart();
  GetSuitShortStringAllDiamond();
  GetSuitShortStringAllClub();
  GetSuitShortStringAllJoker();

  GetPrefixStringAllSpade();
  GetPrefixStringAllHeart();
  GetPrefixStringAllDiamond();
  GetPrefixStringAllClub();
  GetPrefixStringAllJoker();

  GetShortPrefixStringAllSpade();
  GetShortPrefixStringAllHeart();
  GetShortPrefixStringAllDiamond();
  GetShortPrefixStringAllClub();
  GetShortPrefixStringAllJoker();

  GetSuffixStringAllSpade();
  GetSuffixStringAllHeart();
  GetSuffixStringAllDiamond();
  GetSuffixStringAllClub();
  GetSuffixStringAllJoker();
}

void test_code::TestTrump::GetSuitNoneJokerAll() {
  std::shared_ptr<trump::Trump> t(
      new trump::Trump(trump::Trump::SUIT::NONE, 1, true));
  AssertEquals(t->GetSuit() == trump::Trump::SUIT::NONE, "");
}
void test_code::TestTrump::GetSuitSpadeAll() {}
void test_code::TestTrump::GetSuitHeartAll() {}
void test_code::TestTrump::GetSuitDiamondAll() {}
void test_code::TestTrump::GetSuitClubAll() {}

void test_code::TestTrump::GetNumberAllSuit1() {}
void test_code::TestTrump::GetNumberAllSuit2() {}
void test_code::TestTrump::GetNumberAllSuit3() {}
void test_code::TestTrump::GetNumberAllSuit4() {}
void test_code::TestTrump::GetNumberAllSuit5() {}
void test_code::TestTrump::GetNumberAllSuit6() {}
void test_code::TestTrump::GetNumberAllSuit7() {}
void test_code::TestTrump::GetNumberAllSuit8() {}
void test_code::TestTrump::GetNumberAllSuit9() {}
void test_code::TestTrump::GetNumberAllSuit10() {}
void test_code::TestTrump::GetNumberAllSuit11() {}
void test_code::TestTrump::GetNumberAllSuit12() {}
void test_code::TestTrump::GetNumberAllSuit13() {}
void test_code::TestTrump::GetNumberJoker1() {}
void test_code::TestTrump::GetNumberJoker2() {}

void test_code::TestTrump::IsSpadeAllSpade() {}
void test_code::TestTrump::IsSpadeAllHeart() {}
void test_code::TestTrump::IsSpadeAllDiamond() {}
void test_code::TestTrump::IsSpadeAllClub() {}
void test_code::TestTrump::IsSpadeAllJoker() {}
void test_code::TestTrump::IsHeartAllSpade() {}
void test_code::TestTrump::IsHeartAllHeart() {}
void test_code::TestTrump::IsHeartAllDiamond() {}
void test_code::TestTrump::IsHeartAllClub() {}
void test_code::TestTrump::IsHeartAllJoker() {}
void test_code::TestTrump::IsDiamondAllSpade() {}
void test_code::TestTrump::IsDiamondAllHeart() {}
void test_code::TestTrump::IsDiamondAllDiamond() {}
void test_code::TestTrump::IsDiamondAllClub() {}
void test_code::TestTrump::IsDiamondAllJoker() {}
void test_code::TestTrump::IsClubAllSpade() {}
void test_code::TestTrump::IsClubAllHeart() {}
void test_code::TestTrump::IsClubAllDiamond() {}
void test_code::TestTrump::IsClubAllClub() {}
void test_code::TestTrump::IsClubAllJoker() {}

void test_code::TestTrump::GetSuitStringAllSpade() {}
void test_code::TestTrump::GetSuitStringAllHeart() {}
void test_code::TestTrump::GetSuitStringAllDiamond() {}
void test_code::TestTrump::GetSuitStringAllClub() {}
void test_code::TestTrump::GetSuitStringAllJoker() {}

void test_code::TestTrump::GetSuitShortStringAllSpade() {}
void test_code::TestTrump::GetSuitShortStringAllHeart() {}
void test_code::TestTrump::GetSuitShortStringAllDiamond() {}
void test_code::TestTrump::GetSuitShortStringAllClub() {}
void test_code::TestTrump::GetSuitShortStringAllJoker() {}

void test_code::TestTrump::GetPrefixStringAllSpade() {}
void test_code::TestTrump::GetPrefixStringAllHeart() {}
void test_code::TestTrump::GetPrefixStringAllDiamond() {}
void test_code::TestTrump::GetPrefixStringAllClub() {}
void test_code::TestTrump::GetPrefixStringAllJoker() {}

void test_code::TestTrump::GetShortPrefixStringAllSpade() {}
void test_code::TestTrump::GetShortPrefixStringAllHeart() {}
void test_code::TestTrump::GetShortPrefixStringAllDiamond() {}
void test_code::TestTrump::GetShortPrefixStringAllClub() {}
void test_code::TestTrump::GetShortPrefixStringAllJoker() {}

void test_code::TestTrump::GetSuffixStringAllSpade() {}
void test_code::TestTrump::GetSuffixStringAllHeart() {}
void test_code::TestTrump::GetSuffixStringAllDiamond() {}
void test_code::TestTrump::GetSuffixStringAllClub() {}
void test_code::TestTrump::GetSuffixStringAllJoker() {}
