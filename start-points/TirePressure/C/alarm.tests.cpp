#include <gtest/gtest.h>

extern "C"
{
#include "alarm.h"
}

using namespace ::testing;

TEST(AlarmTest, AlarmIsOn)
{
    check();
    ASSERT_EQ(true, ALARM_ON);
}
