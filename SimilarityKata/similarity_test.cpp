#include "gmock/gmock.h"
#include "similarity.cpp"

using namespace testing;

class LengthFixture : public Test {
public:
    void diag(int expected, string input1, string input2) {
        int ret = app.getResult(input1, input2);
        EXPECT_EQ(expected, ret);
    }

    LengthChecker app;
};

TEST_F(LengthFixture, TC1) {
    diag(60, "ABC", "UEI");
}

TEST_F(LengthFixture, TC2) {
    diag(0, "WERABC", "UEI");
}

TEST_F(LengthFixture, TC3) {
    diag(0, "WERBC", "UEWERREWWERI");
}

TEST_F(LengthFixture, TC4) {
    diag(20, "WERBC", "EWD");
}

TEST_F(LengthFixture, TC5) {
    diag(20, "WER", "EREWD");
}


