#include <gtest/gtest.h>

extern "C"
{
#include "scorer.h"
}

using namespace ::testing;

TEST(ScorerTest, scorer)
{
    int score = getScore();
    ASSERT_EQ(-1, score);
}

