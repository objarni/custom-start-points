
Write tests to cover the "how_long_until_next_timer_expiry" function, then refactor it in preparation for adding the functionality explained below.

The "how_long_until_next_timer_expiry" function should work out the number of milliseconds until a timer will expire. It's used by another function that pauses execution of the program until then. (The calling code is not included in this exercise). The how_long_until_next_timer_expiry function goes through six timers, named:

- idt
- p88n
- Time Quota
- zb12
- dy9x
- Monitoring Time

It works out which of these timers are currently active, and how long until each one should expire. It returns the time left until the next one will expire, (via a parameter).

New functionality
-----------------

add a new timer named 'bti'. This timer should be enabled when duration measurements are active and the operational flag OPERATIONAL_FLAG_BTI_PRESENT is set. The timer should expire when the time since the last packet is equal to bti_time_interval. You can get the time of the last packet using the method get_time_of_last_pkt.
