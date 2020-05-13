#include "address_map.h"

/* This program demonstrates the use of parallel ports in the DE1-SoC Computer
 * It performs the following: 
 * 	1. displays the SW switch values on the red lights LEDR
 * 	2. displays a rotating pattern on the HEX displays
 * 	3. if a KEY[3..0] is pressed, uses the SW switches as the pattern
*/
int main(void)
{
	/* Declare volatile pointers to I/O registers (volatile means that the locations
	 * will not be cached, even in registers) */
	volatile int * LED_ptr 				= (int *) PIO_0_LED_BASE;
	int LED_ptr = 0x0000000F;					// initial pattern for HEX displays
	volatile int delay_count;					// volatile so the C compiler doesn't remove the loop

	while (1)
	{
		/* rotate the pattern shown on the HEX displays */
		if (LED_ptr & 0x80000000)
			LED_ptr = (LED_ptr << 1) | 1;
		else
			LED_ptr = LED_ptr << 1;

		for (delay_count = 250000; delay_count != 0; --delay_count); // delay loop
	}
}
