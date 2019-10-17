#include <msp430.h> 

/**
 * main.c
 */
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    P1DIR |= BIT0;                          // Clear P1.0 output latch for a defined power-on state
    P1OUT |= BIT0;
    P9DIR |= BIT7;
    P9OUT |= BIT7;

    PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
                                            // to activate previously configured port settings

    while(1)
       {
        P1OUT ^= BIT0;						// toggle P1.0
        __delay_cycles(10000);
        P9OUT ^= BIT7;
        __delay_cycles(50000);				// toggle P1.7
        P9OUT ^= BIT7;
        __delay_cycles(10000);				// toggle P1.7
       }

    return 0;
}
