#ifndef BUTTON_H
#define BUTTON_H

#include <stdbool.h>

void  button_init(void);
bool  button_is_pressed(void);   /* live level – active low    */
bool  button_was_pressed(void);  /* latched by INT0 ISR        */

#endif /* BUTTON_H */
