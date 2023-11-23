#include <avr/io.h>

int main(void)
{
	DDRB = 0xFF;
	PORTA = 0xFF;
	
    while(1)
    {
        PORTB = 0x00;
		
		if (!(PINA&(1<<PINA0)))
		PORTB = (1<<PB0);
				if (!(PINA&(1<<PINA1)))
				PORTB = (1<<PB1);
						if (!(PINA&(1<<PINA2)))
						PORTB = (1<<PB2);
								if (!(PINA&(1<<PINA3)))
								PORTB = (1<<PB3);
										if (!(PINA&(1<<PINA4)))
										PORTB = (1<<PB4);
												if (!(PINA&(1<<PINA5)))
												PORTB = (1<<PB5);
														if (!(PINA&(1<<PINA6)))
														PORTB = (1<<PB6);
																if (!(PINA&(1<<PINA7)))
																PORTB = (1<<PB7);
    }
}