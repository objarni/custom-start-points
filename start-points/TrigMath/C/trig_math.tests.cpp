#include <gtest/gtest.h>

extern "C" 
{   
#include "trig_math.h"
}

using namespace ::testing;

TEST(TrigMathTest, Sin)
{
    ASSERT_NEAR(42, Sin(3.4), 0.000001);
    
}
