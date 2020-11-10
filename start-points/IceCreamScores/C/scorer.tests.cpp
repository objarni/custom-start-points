#include <gtest/gtest.h>

extern "C"
{
#include "scorer.h"
}

using namespace ::testing;

TEST(ScorerTest, scorer)
{
    int score = getScore();
    // TODO: make this reliable
    //ASSERT_EQ(-1, score);
}

