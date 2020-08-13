#include "trump.hpp"

#include "../../mhl/util/string/std_string_formatter.hpp"

// static
const std::shared_ptr<std::string> trump::Trump::STR_NONE(
    new std::string("none"));
const std::shared_ptr<std::string> trump::Trump::STR_SPADE(
    new std::string("spade"));
const std::shared_ptr<std::string> trump::Trump::STR_HEART(
    new std::string("heart"));
const std::shared_ptr<std::string> trump::Trump::STR_DIAMOND(
    new std::string("diamond"));
const std::shared_ptr<std::string> trump::Trump::STR_CLUB(
    new std::string("club"));
const std::shared_ptr<std::string> trump::Trump::STR_JOKER(
    new std::string("joker"));

const std::shared_ptr<std::string> trump::Trump::STR_SHORT_NONE(
    new std::string("N"));
const std::shared_ptr<std::string> trump::Trump::STR_SHORT_SPADE(
    new std::string("S"));
const std::shared_ptr<std::string> trump::Trump::STR_SHORT_HEART(
    new std::string("H"));
const std::shared_ptr<std::string> trump::Trump::STR_SHORT_DIAMOND(
    new std::string("D"));
const std::shared_ptr<std::string> trump::Trump::STR_SHORT_CLUB(
    new std::string("C"));
const std::shared_ptr<std::string> trump::Trump::STR_SHORT_JOKER(
    new std::string("J"));

/**
 * @brief Construct a new Trump object
 *
 * @param suit スート
 * @param number 番号
 * @param is_joker ジョーカーか
 */
trump::Trump::Trump(trump::Trump::SUIT suit, int number, bool is_joker)
    : suit_(suit), number_(number), is_joker_(is_joker) {}

/**
 * @brief Destroy the Trump object
 *
 */
trump::Trump::~Trump() {}

/**
 * @brief トランプの出力
 *
 */
void trump::Trump::Print() {}

/**
 * @brief トランプの出力(ショート版)
 *
 */
void trump::Trump::ShortPrint() {}

/**
 * @brief スートの取得
 *
 * @return SUIT スート
 */
trump::Trump::SUIT trump::Trump::GetSuit() const { return suit_; }

/**
 * @brief トランプ番号の取得
 *
 * @return int トランプ番号
 */
int trump::Trump::GetNumber() const { return number_; }

/**
 * @brief ジョーカーか
 *
 * @return true ジョーカー
 * @return false ジョーカーではない
 */
bool trump::Trump::IsJoker() const {
  if (is_joker_) {
    return true;
  }
  return false;
}

/**
 * @brief スートがスペードか
 *
 * @return true スートがスペード
 * @return false スートがスペードではない
 */
bool trump::Trump::IsSpade() const {
  if (suit_ == trump::Trump::SUIT::SPADE) {
    return true;
  }
  return false;
}

/**
 * @brief スートがハート
 *
 * @return true スートがハート
 * @return false スートがハートではない
 */
bool trump::Trump::IsHeart() const {
  if (suit_ == trump::Trump::SUIT::HEART) {
    return true;
  }
  return false;
}

/**
 * @brief スートがダイヤ
 *
 * @return true スートがダイヤ
 * @return false スートがダイヤではない
 */
bool trump::Trump::IsDiamond() const {
  if (suit_ == trump::Trump::SUIT::DIAMOND) {
    return true;
  }
  return false;
}

/**
 * @brief スートがクラブ
 *
 * @return true スートがクラブ
 * @return false スートがクラブではない
 */
bool trump::Trump::IsClub() const {
  if (suit_ == trump::Trump::SUIT::CLUB) {
    return true;
  }
  return false;
}

/**
 * @brief スート文字列を取得する
 *
 * @return std::string スート文字列(Spade,Heart,Diamond,Club)
 */
std::string trump::Trump::GetSuitString() {
  if (is_joker_) {
    return (*trump::Trump::STR_NONE);
  }
  if (suit_ == trump::Trump::SUIT::SPADE) {
    return (*trump::Trump::STR_SPADE);
  }
  if (suit_ == trump::Trump::SUIT::HEART) {
    return (*trump::Trump::STR_HEART);
  }
  if (suit_ == trump::Trump::SUIT::DIAMOND) {
    return (*trump::Trump::STR_DIAMOND);
  }
  if (suit_ == trump::Trump::SUIT::CLUB) {
    return (*trump::Trump::STR_CLUB);
  }
  return (*trump::Trump::STR_NONE);
}

/**
 * @brief 短いスート文字列を取得する
 *
 * @return std::string 短いスート文字列(S,H,D,C,J)
 */
std::string trump::Trump::GetShortSuitString() {
  if (is_joker_) {
    return (*trump::Trump::STR_SHORT_NONE);
  }
  if (suit_ == trump::Trump::SUIT::SPADE) {
    return (*trump::Trump::STR_SHORT_SPADE);
  }
  if (suit_ == trump::Trump::SUIT::HEART) {
    return (*trump::Trump::STR_SHORT_HEART);
  }
  if (suit_ == trump::Trump::SUIT::DIAMOND) {
    return (*trump::Trump::STR_SHORT_DIAMOND);
  }
  if (suit_ == trump::Trump::SUIT::CLUB) {
    return (*trump::Trump::STR_SHORT_CLUB);
  }
  return (*trump::Trump::STR_SHORT_NONE);
}

/**
 * @brief 接頭辞を取得する
 *
 * @return std::string 接頭辞文字列(Joker,Spade,Heart,Diamond,Club)
 */
std::string trump::Trump::GetPrefixString() {
  if (is_joker_) {
    return (*trump::Trump::STR_JOKER);
  }
  if (suit_ == trump::Trump::SUIT::SPADE) {
    return (*trump::Trump::STR_SPADE);
  }
  if (suit_ == trump::Trump::SUIT::HEART) {
    return (*trump::Trump::STR_HEART);
  }
  if (suit_ == trump::Trump::SUIT::DIAMOND) {
    return (*trump::Trump::STR_DIAMOND);
  }
  if (suit_ == trump::Trump::SUIT::CLUB) {
    return (*trump::Trump::STR_CLUB);
  }
  return (*trump::Trump::STR_NONE);
}

/**
 * @brief 短い接頭辞を取得する
 *
 * @return std::string 短い接頭辞文字列(J,S,H,D,C)
 */
std::string trump::Trump::GetShortPrefixString() {
  if (is_joker_) {
    return (*trump::Trump::STR_SHORT_JOKER);
  }
  if (suit_ == trump::Trump::SUIT::SPADE) {
    return (*trump::Trump::STR_SHORT_SPADE);
  }
  if (suit_ == trump::Trump::SUIT::HEART) {
    return (*trump::Trump::STR_SHORT_HEART);
  }
  if (suit_ == trump::Trump::SUIT::DIAMOND) {
    return (*trump::Trump::STR_SHORT_DIAMOND);
  }
  if (suit_ == trump::Trump::SUIT::CLUB) {
    return (*trump::Trump::STR_SHORT_CLUB);
  }
  return (*trump::Trump::STR_SHORT_NONE);
}

/**
 * @brief 接尾辞を取得する
 *
 * @return std::string 接尾辞(1～13)
 */
std::string trump::Trump::GetSuffixString() {
  return mhl::StdStringFormatter::Format("%d", number_);
}

/**
 * @brief ソート用番号の取得
 *
 * @return int ソート用番号
 */
int trump::Trump::GetSortNumber() {
  // 仮
  return number_;
}