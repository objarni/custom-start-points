#include <gtest/gtest.h>

extern "C"
{
#include "scorer.h"
#include "scoreboard.h"
}

using namespace ::testing;

TEST(IceCreamTest, scorer)
{
    int score = getScore();
    ASSERT_EQ(-1, score);
}

