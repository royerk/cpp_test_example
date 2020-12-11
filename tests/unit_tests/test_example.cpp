#include "gtest/gtest.h"
#include "base/common.h"

TEST(Example, Equals) {
EXPECT_EQ(1, 1);
}

TEST(laFonction_test, valid)
{
    int a = 10;
    laFonction(a);

    for (int i = 0; i < a; ++i)
    {
        EXPECT_EQ(entiers[i], i * a);
    }
    EXPECT_EQ(entiers.size(), a);
}

TEST(laFonction_test, invalid)
{
    int a = 100;
    laFonction(a);

    for (int i = 0; i < a; ++i)
    {
        EXPECT_TRUE(entiers[i] == i * a);
    }
    EXPECT_EQ(entiers.size(), a);
}
