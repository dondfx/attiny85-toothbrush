#ifndef CONFIG_H
#define CONFIG_H

#include <stdint.h>

/* -------- GPIO mapping (ATtiny85, 8 MHz internal RC) -------- */
#define MOTOR_PIN        PB0      /* OC0A – MOSFET gate */
#define BUTTON_PIN       PB2      /* INT0 – tactile switch */

/* -------- Behaviour tweaks -------- */
#define PWM_LEVEL_COUNT  3
#define LONG_PRESS_MS    2000U    /* ≥ → start / stop */
#define DEBOUNCE_MS      20U      /* button debounce */

/* -------- External lookup -------- */
extern const uint8_t pwm_table[PWM_LEVEL_COUNT];

#endif /* CONFIG_H */
