#include <gtest/gtest.h>
#include "../include/laba_1.h"

TEST(RemoveVowelsTest, InputStrings) {
    EXPECT_EQ(removeVowels("GoogleTest groups the test results by test suites."), "GglTst grps th tst rslts b tst sts.");
    EXPECT_EQ(removeVowels("Write your code in this editor and press Run."), "Wrt r cd n ths dtr nd prss Rn.");
    EXPECT_EQ(removeVowels("Bella."), "Bll.");
    EXPECT_EQ(removeVowels("Auaui pools."), " pls.");
    EXPECT_EQ(removeVowels("Availability: Linux, Windows, Mac."), "vlblt: Lnx, Wndws, Mc.");    
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}