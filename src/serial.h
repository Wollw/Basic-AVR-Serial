#ifndef SERIAL_H
#define SERIAL_H

#define UBRR_ASYNC_NORMAL(br) ((F_CPU / (br * 16UL)) - 1)

void serial_init(uint32_t baudrate);   // Initializes Serial
void serial_write(char c); // Send a character over serial
char serial_read(void);  // Read a character from serial buffer (blocking)

#endif
