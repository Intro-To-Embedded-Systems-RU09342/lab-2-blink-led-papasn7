#include <msp430.h>				


/**
 * blink.c
 */
void main(void)
{
	WDTCTL = WDTPW | WDTHOLD;		// stop watchdog timer
	P1DIR = BIT0 | BIT6;					// configure P1.0 as output
	int i;

	while(1)
	{
		P1OUT ^= BIT0;              // toggle P1.0
		P1OUT ^= BIT6;				// toggle P1.6
		__delay_cycles(400);
		for(i=0; i<3500; i++)
		{
		    if(i%50 == 0)			// When the counter gets to a multiple of 50 it will toggle P1.6 again giving it a higher frequency 
		    {
		        P1OUT ^= BIT6;
		    }
		}
	}
}
