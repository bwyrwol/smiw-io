#ifndef TWI_H
#define TWI_H

#include <avr/io.h>

void TWI_init(void);
void TWI_start(void);
void TWI_stop(void);
void TWI_wait(void);
void TWI_write(uint8_t data);
uint8_t TWI_read(void);

#endif //TWI_H
