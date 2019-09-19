#include <msp430.h>

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;               // Stop WDT

    // Configure GPIO
    P1DIR = 0x01;                          // Clear P1.0 output latch for a defined power-on state
    P9DIR = 0x80;
    //P1OUT |= BIT0;                          // Set P1.0 to output direction

    PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
                                            // to activate previously configured port settings

    while(1)
    {
        P1OUT ^= 0x01;                      // Toggle LED
        //P9OUT ^= 0X80;
        __delay_cycles(100000);
        /*P9OUT ^= 0X80;
        __delay_cycles(70000);*/


    }
}
