#include <avr/io.h>

// #define F_CPU 1000000UL  // 12 MHz
#include <util/delay.h>

int main() {
	DDRB |= 1; // LED on PB0

	while(1) {
		PORTB |= 1; // Turn LED on
		_delay_ms(100);
		PORTB &= ~1; // Turn LED off
		_delay_ms(900);
	}

	return 1;
}
