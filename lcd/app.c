/* ---------------------------------------------------------------------------------------------------
[FILE NAME]	  : <app.c>
[AUTHOR]      : <Aisha Alabasiry>
[DATE CREATED]: <wed 7/1/2015>
[DESCRIPTION] : <Application layer for LCD>
--------------------------------------------------------------------------------------------------- */

/*--------------------------------------------- INCLUDES -------------------------------------------*/
#include "app.h"
/*------------------------------------------ Global Variables --------------------------------------*/

/*------------------------------------- FUNCTION Definitions ---------------------------------------*/


void APP_init(void)
{
	/* Initialize LCD Driver */
	LCD_init();
	_delay_us(1000);
}

void APP_start(void)
{
	LCD_goToRowColumn(0,2);
	LCD_sendString("Aisha");
	LCD_sendStringRowColumn(1,2,"Alabasiry");
	_delay_ms(3000); /* wait three seconds */
}