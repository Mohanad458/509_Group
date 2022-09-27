/*
 * Project.c
 *
 *  Created on: Sep 2, 2022
 *      Author: Mohanad
 */
#include "Projects.h"
void A_SSDProject(void)
{
	int x=0;
		while(1)
		{
		H_SSD_Void_SSDWriteNumber(x);
		_delay_ms(1000);
		x++;
		}

}
/*H_LCD_Void_LCDInit();
	M_UART_Void_UARTInit();
	H_LCD_Void_LCDWriteCharacter('M');
	u8 x = 0;
	while(1)
	{
		x = M_UART_Void_UARTRec();
		if(x != 0)
		{
			H_LCD_Void_LCDWriteCharacter(x);

		}
	}
	return 0;
	*/
