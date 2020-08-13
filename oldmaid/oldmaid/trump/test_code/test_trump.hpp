#ifndef TRUMP_TEST_CODE_TEST_TRUMP_HPP_
#define TRUMP_TEST_CODE_TEST_TRUMP_HPP_

#include <memory>

#include "../../mhl/test/unittest_base.hpp"

namespace test_code {

/**
 * @brief シーンスタックテスト
 *
 */
class TestTrump : public mhl::UnitTestBase {
 public:
  /**
   * @brief Construct a new Test Scene Stack object
   *
   * @param output_console 出力クラス
   */
  TestTrump(std::shared_ptr<mhl::IOutputConsole> output_console);

  /**
   * @brief Destroy the Test Scene Stack object
   *
   */
  virtual ~TestTrump();

  /**
   * @brief ユニットテスト実行
   *
   */
  void ExecuteUnitTest();

  void GetSuitNoneJokerAll();
  void GetSuitSpadeAll();
  void GetSuitHeartAll();
  void GetSuitDiamondAll();
  void GetSuitClubAll();

  void GetNumberAllSuit1();
  void GetNumberAllSuit2();
  void GetNumberAllSuit3();
  void GetNumberAllSuit4();
  void GetNumberAllSuit5();
  void GetNumberAllSuit6();
  void GetNumberAllSuit7();
  void GetNumberAllSuit8();
  void GetNumberAllSuit9();
  void GetNumberAllSuit10();
  void GetNumberAllSuit11();
  void GetNumberAllSuit12();
  void GetNumberAllSuit13();
  void GetNumberJoker1();
  void GetNumberJoker2();

  void IsSpadeAllSpade();
  void IsSpadeAllHeart();
  void IsSpadeAllDiamond();
  void IsSpadeAllClub();
  void IsSpadeAllJoker();
  void IsHeartAllSpade();
  void IsHeartAllHeart();
  void IsHeartAllDiamond();
  void IsHeartAllClub();
  void IsHeartAllJoker();
  void IsDiamondAllSpade();
  void IsDiamondAllHeart();
  void IsDiamondAllDiamond();
  void IsDiamondAllClub();
  void IsDiamondAllJoker();
  void IsClubAllSpade();
  void IsClubAllHeart();
  void IsClubAllDiamond();
  void IsClubAllClub();
  void IsClubAllJoker();

  void GetSuitStringAllSpade();
  void GetSuitStringAllHeart();
  void GetSuitStringAllDiamond();
  void GetSuitStringAllClub();
  void GetSuitStringAllJoker();

  void GetSuitShortStringAllSpade();
  void GetSuitShortStringAllHeart();
  void GetSuitShortStringAllDiamond();
  void GetSuitShortStringAllClub();
  void GetSuitShortStringAllJoker();

  void GetPrefixStringAllSpade();
  void GetPrefixStringAllHeart();
  void GetPrefixStringAllDiamond();
  void GetPrefixStringAllClub();
  void GetPrefixStringAllJoker();

  void GetShortPrefixStringAllSpade();
  void GetShortPrefixStringAllHeart();
  void GetShortPrefixStringAllDiamond();
  void GetShortPrefixStringAllClub();
  void GetShortPrefixStringAllJoker();

  void GetSuffixStringAllSpade();
  void GetSuffixStringAllHeart();
  void GetSuffixStringAllDiamond();
  void GetSuffixStringAllClub();
  void GetSuffixStringAllJoker();
};

}  // namespace test_code

#endif  // MHL_TEST_CODE_TESTSCENESTACK_HPP_
