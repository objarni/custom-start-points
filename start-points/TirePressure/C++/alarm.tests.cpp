#include "alarm.hpp"
#include <gtest/gtest.h>

using namespace ::testing;

TEST(Alarm, FooBar)
{
    Alarm *alarm = new Alarm();
    ASSERT_EQ(false, alarm->isAlarmOn());
}
