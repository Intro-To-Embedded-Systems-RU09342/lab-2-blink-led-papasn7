# Button Blink
This project is an LED blink that is enabled and disabled by a button press. This is done by reading the button 
every time the LED is being toggled. The main issue with this method is that it is very easy for the input to bounce and be read multiple times.

The differences in the processor is that the G2553 has an internal pullup resistor default while the FR6989 does not, so you have to 
manually enable it. You also have to disable the GPIO's high impedance state for the FR6989.