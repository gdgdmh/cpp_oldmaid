#ifndef OLDMAID_TRUMP_LOGIC_TRUMP_HPP_
#define OLDMAID_TRUMP_LOGIC_TRUMP_HPP_

#include <memory>
#include <string>

namespace trump {

// トランプクラス
class Trump {
 public:
  // スート
  enum class SUIT : int {
    NONE = 0x00,     // なし
    SPADE = 0x01,    // スペード
    HEART = 0x02,    // ハート
    DIAMOND = 0x04,  // ダイヤモンド
    CLUB = 0x08,     // クラブ
  };

  static const int MIN_NUMBER = 1;   // 数値の最小値
  static const int MAX_NUMBER = 13;  // 数値の最大値
  static const int MAX_JOKER = 2;    // ジョーカーの最大枚数

 private:
  static const std::shared_ptr<std::string> STR_NONE;
  static const std::shared_ptr<std::string> STR_SPADE;
  static const std::shared_ptr<std::string> STR_HEART;
  static const std::shared_ptr<std::string> STR_DIAMOND;
  static const std::shared_ptr<std::string> STR_CLUB;
  static const std::shared_ptr<std::string> STR_JOKER;
  static const std::shared_ptr<std::string> STR_SHORT_NONE;
  static const std::shared_ptr<std::string> STR_SHORT_SPADE;
  static const std::shared_ptr<std::string> STR_SHORT_HEART;
  static const std::shared_ptr<std::string> STR_SHORT_DIAMOND;
  static const std::shared_ptr<std::string> STR_SHORT_CLUB;
  static const std::shared_ptr<std::string> STR_SHORT_JOKER;

 public:
  /**
   * @brief Construct a new Trump object
   *
   * @param suit スート
   * @param number 番号
   * @param is_joker ジョーカーか
   */
  Trump(SUIT suit, int number, bool is_joker);

  /**
   * @brief Destroy the Trump object
   *
   */
  virtual ~Trump();

  /**
   * @brief トランプの出力
   *
   */
  void Print();

  /**
   * @brief トランプの出力(ショート版)
   *
   */
  void PrintShort();

  /**
   * @brief スートの取得
   *
   * @return SUIT スート
   */
  SUIT GetSuit() const;

  /**
   * @brief トランプ番号の取得
   *
   * @return int トランプ番号
   */
  int GetNumber() const;

  /**
   * @brief ジョーカーか
   *
   * @return true ジョーカー
   * @return false ジョーカーではない
   */
  bool IsJoker() const;

  /**
   * @brief スートがスペードか
   *
   * @return true スートがスペード
   * @return false スートがスペードではない
   */
  bool IsSpade() const;

  /**
   * @brief スートがハート
   *
   * @return true スートがハート
   * @return false スートがハートではない
   */
  bool IsHeart() const;

  /**
   * @brief スートがダイヤ
   *
   * @return true スートがダイヤ
   * @return false スートがダイヤではない
   */
  bool IsDiamond() const;

  /**
   * @brief スートがクラブ
   *
   * @return true スートがクラブ
   * @return false スートがクラブではない
   */
  bool IsClub() const;

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

 private:
  SUIT suit_;
  int number_;
  bool is_joker_;
};

}  // namespace trump

#endif  // OLDMAID_TRUMP_LOGIC_TRUMP_HPP_
