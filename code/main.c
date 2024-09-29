#include <stdint.h>
#include "arduino/interrupts.h"
#include <avr/io.h>
#include <util/delay.h>

int main(void){
    uint8_t sreg = SREG;
    /* *
    * Since we need the reset pin, PC6 is unavailable. Reset also means we need the
    * SREG reference to handle the interrupt.
    * */
    DDRB |= (1 << 5);
    while(1){
        PORTB |= (1 << 5);
        _delay_ms(500);
        PORTB &= ~(1 << 5);
        _delay_ms(500);
    };

    return 0;
}
