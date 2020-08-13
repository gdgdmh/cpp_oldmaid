#include "test_trump_tests.hpp"

#include "../../mhl/test/unittest_execute_list.hpp"
#include "../../mhl/util/output/ioutput_console.hpp"
#include "../../mhl/util/output/output_console.hpp"
#include "test_trump.hpp"

/**
 * コンストラクタ
 */
test_code::TestTrumpTests::TestTrumpTests(
    std::shared_ptr<mhl::IOutputConsole> output_console)
    : UnitTestBase(output_console) {}

/**
 * デストラクタ
 */
test_code::TestTrumpTests::~TestTrumpTests() {}

void test_code::TestTrumpTests::ExecuteUnitTest() {
  mhl::UnitTestExecuteList list;
  std::shared_ptr<mhl::IOutputConsole> console(new mhl::OutputConsole());
  list.Add(
      std::shared_ptr<test_code::TestTrump>(new test_code::TestTrump(console)));
  if (!list.Execute()) {
    AssertEquals(false, "TestTrumpTests::ExecuteUnitTest failure");
  }
}
