/* ---------------------------------------------------------------------------------------------------
[FILE NAME]   : app.h
[AUTHOR]      : Aisha Alabasiry
[DATE CREATED]: 7/1/2015
[DESCRIPTION] : Application layer header file for LCD
--------------------------------------------------------------------------------------------------- */


#ifndef APP_H_
#define APP_H_

#include "lcd.h"


/***************************************************************************************************************/
/* ---------------------------------------------------------------------------------------------------------------
[Function Name] : APP_init
[Description] 	: This function is responsible for initialization led and button
[Args]		    : void
[Returns] 		: This return shall indicate void
--------------------------------------------------------------------------------------------------------------- */
void APP_init(void);

/***************************************************************************************************************/
/* ---------------------------------------------------------------------------------------------------------------
[Function Name] : APP_start
[Description]   : This function is responsible for  Toggle the led in case the curent state of the switch is pressed
	              and the previous state is released 
[Args] 			: void
[Returns] 		: This return shall indicate void
--------------------------------------------------------------------------------------------------------------- */
void APP_start(void);


#endif /* APP_H_ */