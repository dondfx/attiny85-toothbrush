#include "motor.h"
#include "button.h"
#include "power.h"
#include "config.h"
#include <avr/interrupt.h>
#include <util/delay.h>

int main(void)
{
  motor_init();
  button_init();
  sei(); /* global interrupts on */

  uint8_t speed_idx = 0;

    for (;;) {
        if (button_was_pressed()) {

            _delay_ms(DEBOUNCE_MS);

            /* Measure hold duration */
            uint16_t ms = 0;
            while (button_is_pressed()) {
                _delay_ms(1);
                if (++ms >= LONG_PRESS_MS) break;
            }
            bool long_press = (ms >= LONG_PRESS_MS);

            if (long_press) {                 /* start / stop */
                if (motor_is_running())
                    motor_stop();
                power_enter_sleep();          /* deepest sleep */
            } else {                          /* short press */
                if (!motor_is_running())
                    motor_set_speed(speed_idx = 0);
                else {
                    speed_idx = (speed_idx + 1) % PWM_LEVEL_COUNT;
                    motor_set_speed(speed_idx);
                }
            }
        }
    }
}
