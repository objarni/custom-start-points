#include <gtest/gtest.h>

#include "trig_math.h"

using namespace ::testing;

TEST(TrigMathTest, Sin)
{
    TrigMath math;
    
    ASSERT_NEAR(42, math.Sin(3.4), 0.000001);
    
}
