#include "button.h"
#include "config.h"
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

static volatile bool int_flag = false;

void button_init(void)
{
    /* Input with pull-up */
    DDRB  &= ~(1 << BUTTON_PIN);
    PORTB |=  (1 << BUTTON_PIN);

    /* INT0 on falling edge (button press) */
    MCUCR  = (1 << ISC01);
    GIMSK |= (1 << INT0);
}

bool button_is_pressed(void)
{
    return !(PINB & (1 << BUTTON_PIN));
}

bool button_was_pressed(void)
{
    if (int_flag) {
        int_flag = false;
        return true;
    }
    return false;
}

ISR(INT0_vect)
{
    int_flag = true;
}
