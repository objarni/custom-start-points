#include <gtest/gtest.h>

extern "C"
{
#include "scoreboard.h"
}

using namespace ::testing;

TEST(ScoreboardTest, scorer)
{
    printScoreboard();
}

