#include "motor.h"
#include "config.h"
#include <avr/io.h>

const uint8_t pwm_table[PWM_LEVEL_COUNT] = {85, 170, 255}; /* slow -> fast */

static bool motor_running = false;

void motor_init(void)
{
    /* PB0 = OC0A output */
    DDRB  |= (1 << MOTOR_PIN);

    /* Timer0: Phase-correct PWM, non-inverting on OC0A, prescaler 1 -> ~16 kHz */
    TCCR0A = (1 << COM0A1) | (1 << WGM00);
    TCCR0B = (1 << CS00);

    OCR0A  = 0; /* motor off */
}

void motor_set_speed(uint8_t level)
{
    if (level < PWM_LEVEL_COUNT) {
        OCR0A = pwm_table[level];
        motor_running = true;
    }
}

void motor_stop(void)
{
    OCR0A = 0;
    motor_running = false;
}

bool motor_is_running(void)
{
    return motor_running;
}
