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
void test_code::TestTrump::ExecuteUnitTest() {}
