#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "LCD_INTERFACE.h"

#define A 0
#define B 1
#define C 2
#define D 3

#include <avr/delay.h>



void main(void)
{

	LCD_VidIntialize();
	LCD_SetCursor(2,1);
u8 arr[15]="DAKAMAWII";

LCD_VidsendDataString(arr);
LCD_VidsendIntger (300);
_delay_ms(2000);
LCD_Clear();
LCD_SetCursor(1,5);
LCD_VidsendIntger (300);
LCD_VidsendDataString(arr);





}


