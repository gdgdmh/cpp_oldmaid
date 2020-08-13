#ifndef TRUMP_TEST_CODE_TEST_TRUMP_TESTS_HPP_
#define TRUMP_TEST_CODE_TEST_TRUMP_TESTS_HPP_

#include <memory>

#include "../../mhl/test/unittest_base.hpp"

namespace test_code {

// trumpテストクラス
class TestTrumpTests : public mhl::UnitTestBase {
 public:
  /**
   * コンストラクタ
   */
  TestTrumpTests(std::shared_ptr<mhl::IOutputConsole> output_console);

  /**
   * デストラクタ
   */
  virtual ~TestTrumpTests();

  void ExecuteUnitTest();
};

}  // namespace test_code

#endif  // TRUMP_TEST_CODE_TEST_TRUMP_LIB_HPP_
