#include "gmock/gmock.h"
#include "similarity.cpp"

using namespace testing;

class SimilFixture : public Test {
};

TEST_F(SimilFixture, TC1) {
    EXPECT_EQ(1, 1);
}