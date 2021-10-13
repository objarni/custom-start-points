#include <cgreen/cgreen.h>
#include "alarm.h"


Describe(alarm);
BeforeEach(alarm) {}
AfterEach(alarm) {}

float stub_pressure;

float stub() {
    return stub_pressure;
}

popNextPressurePsiValue_T popNextPressurePsiValue_ptr = stub;

Ensure(alarm, WhenPressureNormal_AlarmIsOff) {
    stub_pressure = 20;
    check();
    assert_that(ALARM_ON, is_equal_to(false));
}

Ensure(alarm, WhenPressureHigh_AlarmIsOn) {
    stub_pressure = 23;
    check();
    assert_that(ALARM_ON, is_equal_to(true));
}

Ensure(alarm, WhenPressureLow_AlarmIsOn) {
    stub_pressure = 16.5;
    check();
    assert_that(ALARM_ON, is_equal_to(true));
}