#include <cgreen/cgreen.h>
#include "alarm.h"


Describe(alarm);
BeforeEach(alarm) {}
AfterEach(alarm) {}

Ensure(alarm, answers_42) {
    assert_that(ALARM_ON, is_equal_to(false));
}
