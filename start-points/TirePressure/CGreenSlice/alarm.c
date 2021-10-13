
#include "alarm.h"
#include "sensor.h"

bool ALARM_ON;

void check()
{
    ALARM_ON = false;
    double psiPressureValue = popNextPressurePsiValue_ptr();

    if (psiPressureValue < 17 || 21 < psiPressureValue)
    {
        ALARM_ON = true;
    }
}