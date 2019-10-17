# Multiple Blink
The aim for this part is to toggle both LED's at different rates. This was done two different ways. With the G2 both LED's were toggled and then a counter
was started in a for loop. When the counter reaches a multiple of 50 it will toggle the second LED again. This will give it a greater frequency of toggling
For the 6989 the first LED was toggled, a delay was added, then the second LED was toggled, another delay was added and the second LED was toggled again.

The difference between the codes is you have to disable the high impedance state for the FR6989.