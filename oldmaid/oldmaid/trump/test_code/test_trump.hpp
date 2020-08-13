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

  void GetSuitNone();
  void GetSuitSpade();
  void GetSuitHeart();
  void GetSuitDiamond();
  void GetSuitClub();
  void GetSuitJoker();

  void GetNumberSpade1();
  void GetNumberHeart2();
  void GetNumberDiamond3();
  void GetNumberClub4();
  void GetNumberJoker1();
  void GetNumberJoker2();
  void GetNumberHeart5();
  void GetNumberClub6();
  void GetNumberDiamond7();
  void GetNumberSpade8();
  void GetNumberClub9();
  void GetNumberSpade10();
  void GetNumberHeart11();
  void GetNumberDiamond12();
  void GetNumberClub13();

#if 0

  /**
   * @brief ジョーカーか
   *
   * @return true ジョーカー
   * @return false ジョーカーではない
   */
  bool isJoker() const;

  /**
   * @brief スートがスペードか
   *
   * @return true スートがスペード
   * @return false スートがスペードではない
   */
  bool isSpade() const;

  /**
   * @brief スートがハート
   *
   * @return true スートがハート
   * @return false スートがハートではない
   */
  bool isHeart() const;

  /**
   * @brief スートがダイヤ
   *
   * @return true スートがダイヤ
   * @return false スートがダイヤではない
   */
  bool isDiamond() const;

  /**
   * @brief スートがクラブ
   *
   * @return true スートがクラブ
   * @return false スートがクラブではない
   */
  bool isClub() const;

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
