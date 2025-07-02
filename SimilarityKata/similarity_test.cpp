#include "gmock/gmock.h"
#include "similarity.cpp"

using namespace testing;

class SimilFixture : public Test {
public:
    Simil sml;
    void lenChk(int expected, string str1, string str2) {
        int ret = sml.lengthCheckScore(str1, str2);
        EXPECT_EQ(expected, ret);
    }
};

TEST_F(SimilFixture, LenChk1) {
    lenChk(60, "ASD", "DSA");
}

