#include <gtest/gtest.h>

// TEST(UserLibraryTest, Test1) {
//     double expected = 1.0;
//     double actual = 1.0;

//     ASSERT_EQ(expected, actual);
// }

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
