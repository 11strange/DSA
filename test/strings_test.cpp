#include <gtest/gtest.h>
#include <string>
#include "../src/strings.cpp"

class PermutationTest : public ::testing::Test {
protected:
    void SetUp() override {}
    void TearDown() override {}
};

TEST_F(PermutationTest, EmptyString) {
    char input[] = "";
    testing::internal::CaptureStdout();
    Permutation(input, 0);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "");
}

TEST_F(PermutationTest, SingleCharacter) {
    char input[] = "a";
    testing::internal::CaptureStdout();
    Permutation(input, 0);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "a");
}

TEST_F(PermutationTest, TwoCharacters) {
    char input[] = "ab";
    testing::internal::CaptureStdout();
    Permutation(input, 0);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("ab") != std::string::npos);
    EXPECT_TRUE(output.find("ba") != std::string::npos);
}

TEST_F(PermutationTest, ThreeCharacters) {
    char input[] = "abc";
    testing::internal::CaptureStdout();
    Permutation(input, 0);
    std::string output = testing::internal::GetCapturedStdout();
    std::vector<std::string> expected = {"abc", "acb", "bac", "bca", "cab", "cba"};
    for(const auto& perm : expected) {
        EXPECT_TRUE(output.find(perm) != std::string::npos);
    }
}

TEST_F(PermutationTest, RepeatedCharacters) {
    char input[] = "aaa";
    testing::internal::CaptureStdout();
    Permutation(input, 0);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("aaa") != std::string::npos);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
