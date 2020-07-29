#ifndef OLDMAID_TRUMP_LOGIC_TRUMP_HPP_
#define OLDMAID_TRUMP_LOGIC_TRUMP_HPP_

namespace trump {

// トランプクラス
class Trump {
 public:
  //
  enum SUIT {
    NONE = 0x00,
    SPADE = 0x01,
    HEART = 0x02,
    DIAMOND = 0x04,
    CLUB = 0x08,
  };

  static const int MIN_NUMBER = 1;
  static const int MAX_NUMBER = 13;
  static const int MAX_JOKER = 2;

 public:
  /**
   * @brief Construct a new Trump object
   *
   * @param suit スート
   * @param number 番号
   */
  Trump(SUIT suit, int number);

  /**
   * @brief Destroy the Trump object
   *
   */
  virtual ~Trump();

  void Print();
  SUIT GetSuit();
  int GetNumber();
  bool isJoker() const;
  bool isSpade() const;
  bool isHeart() const;
  bool isDiamond() const;
  bool isClub() const;
  std::string GetSuitString();
  std::string GetSuitShortString();
  int GetSortNumber();

 private:
  SUIT suit_;
  int number_;

}  // namespace trump

#endif  // OLDMAID_TRUMP_LOGIC_TRUMP_HPP_
