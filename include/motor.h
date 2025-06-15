#ifndef MOTOR_H
#define MOTOR_H

#include <stdint.h>
#include <stdbool.h>

void  motor_init(void);
void  motor_set_speed(uint8_t level); /* 0-based */
void  motor_stop(void);
bool  motor_is_running(void);

#endif /* MOTOR_H */
