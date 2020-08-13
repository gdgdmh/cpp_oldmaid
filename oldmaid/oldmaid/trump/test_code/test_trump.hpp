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

#if 0
  /**
   * @brief スート文字列を取得する
   *
   * @return std::string スート文字列(Spade,Heart,Diamond,Club)
   */
  std::string GetSuitString();

  /**
   * @brief 短いスート文字列を取得する
   *
   * @return std::string 短いスート文字列(S,H,D,C)
   */
  std::string GetSuitShortString();

  /**
   * @brief 接頭辞を取得する
   *
   * @return std::string 接頭辞文字列(Joker,Spade,Heart,Diamond,Club)
   */
  std::string GetPrefixString();

  /**
   * @brief 短い接頭辞を取得する
   *
   * @return std::string 短い接頭辞文字列(J,S,H,D,C)
   */
  std::string GetPrefixShortString();

  /**
   * @brief 接尾辞を取得する
   *
   * @return std::string 接尾辞(1～13)
   */
  std::string GetSuffixString();

  /**
   * @brief ソート用番号の取得
   *
   * @return int ソート用番号
   */
  int GetSortNumber();

#endif  // if 0
};

}  // namespace test_code

#endif  // MHL_TEST_CODE_TESTSCENESTACK_HPP_
