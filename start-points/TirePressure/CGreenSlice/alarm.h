#ifndef ALARM_INCLUDED
#define ALARM_INCLUDED

#include <stdbool.h>

extern bool ALARM_ON;

void check();

typedef float (*popNextPressurePsiValue_T)();
extern popNextPressurePsiValue_T popNextPressurePsiValue_ptr;
    
#endif