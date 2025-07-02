#include "gmock/gmock.h"
#include "similarity.cpp"

using namespace testing;

class SimilFixture : public Test {
public:
    Simil sml;
};

TEST_F(SimilFixture, LenChk1) {
    int ret = sml.lengthCheckScore("ASD", "DSA");
    EXPECT_EQ(60, ret);
}