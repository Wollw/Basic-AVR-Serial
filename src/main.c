/*
    A minimal example of serial communication for the ATMega328P.
*/

#include <avr/io.h>
#include <util/delay.h>
#include "serial.h"

void setup(void) {

}

int main (void) {
    serial_init(9600);

    for(;;) {
        serial_write(serial_read());
    }
   
    return 0;
}

