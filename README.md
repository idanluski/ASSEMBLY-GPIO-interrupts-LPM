# GPIO-interrupts-LPM
The software architecture of the system is required to be based on FSM Simple (see explanation in section E) (which performs one
Out of four operations given an external interrupt request of pressing a button out of the four buttons 0PB 1, PB 2, PB 3, PB
Connected to the four controller legs 2.0P - 2.3P, the array of LEDs will be connected to 1PORT.
At the start of the program, the controller is in sleep mode

**By pressing the 0PB button (1=state):**
A binary count down starting from the value 0xFF to the value 0x00 must be lit on 8 LEDs
The count will be cyclical with a delay between the count values of 0.5 sec
The duration of the operation will be 10 seconds (while saving the writing value to the LEDs over time, so that in the next execution of
The stock will continue from where it left off).

**By pressing the 1PB button (2=state):**
It is required to turn on a single LED in cyclic jumps from right to left with a delay between the count values of 0.5 sec.
The duration of the operation will be 5 seconds (while saving the writing value to the LEDs over time, so that in the next execution of
The LED state will continue to skip from where it left off.

**By pressing the 2PB button (3=state):**
The program produces a PWM signal with a 2.7P leg output at a frequency of 2.5 kHz with 75% Duty Cycle (with maximum resolution -
Verify this by using scope).

**state - idle = 0:**
The controller turns off the LEDs and returns to sleep mode (Sleep Mode).
