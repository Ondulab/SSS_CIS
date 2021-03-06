/**
  ******************************************************************************
  * @file           : cis.h
  * @brief          : Header for cis.c file.
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __CIS_H__
#define __CIS_H__

#include "config.h"
#include "main.h"

//#define CIS_SP_GPIO_Port ARD_D6_GPIO_Port
//#define CIS_SP_Pin ARD_D6_Pin

#define CIS_LED_R_GPIO_Port ARD_D10_GPIO_Port
#define CIS_LED_G_GPIO_Port ARD_D0_GPIO_Port
#define CIS_LED_B_GPIO_Port ARD_D11_GPIO_Port

#define CIS_LED_R_Pin ARD_D10_Pin
#define CIS_LED_G_Pin ARD_D0_Pin
#define CIS_LED_B_Pin ARD_D11_Pin

typedef enum
{
	CIS_BUFFER_OFFSET_NONE = 0,
	CIS_BUFFER_OFFSET_HALF,
	CIS_BUFFER_OFFSET_FULL,
}CIS_BUFF_StateTypeDef;

typedef enum
{
	CIS_RED = 0,
	CIS_GREEN,
	CIS_BLUE,
}CIS_Color_TypeDef;

typedef enum
{
	CIS_READ_CAL = 0,
	CIS_WRITE_CAL,
}CIS_FlashRW_TypeDef;

/* Includes ------------------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/

void cis_Init(void);
void cis_ImageProcessRGB(int32_t *cis_buff);
void cis_Start_capture(void);
void cis_Stop_capture(void);
void cis_LedsOff(void);
void cis_LedsOn(void);
void cis_StartCalibration(uint16_t iterationNb);

#endif /* __CIS_H__ */
