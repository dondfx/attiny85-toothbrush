#include "power.h"
#include <avr/io.h>
#include <avr/sleep.h>
#include <avr/interrupt.h>

static void peripherals_disable(void)
{
    ADCSRA &= ~(1 << ADEN);             /* ADC off  */
    PRR     =  (1 << PRADC) |           /* shut unused IPs */
              (1 << PRUSI) |
              (1 << PRTIM1);
}

void power_enter_sleep(void)
{
    peripherals_disable();
    set_sleep_mode(SLEEP_MODE_PWR_DOWN);
    sleep_enable();
    sei();      /* ensure wake-up possible */
    sleep_cpu();/* zzz… */
    sleep_disable();
}
