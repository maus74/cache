// Copyright 2018 Your Name <your_email>

#include <gtest/gtest.h>

TEST(Example, EmptyTest) {
    EXPECT_TRUE(true);
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}