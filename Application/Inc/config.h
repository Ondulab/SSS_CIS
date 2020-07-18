/* config.h */

#ifndef __CONFIG_H__
#define __CONFIG_H__

/**************************************************************************************/
/********************              STM32 definitions               ********************/
/**************************************************************************************/
#define ADC_VOLTAGE						(3300)                    //STM32 ADC peripheral reference is 3300mV
#define ADC_COEFF 						((ADC_VOLTAGE) / (4095))  //ADC value/mV

/**************************************************************************************/
/********************              debug definitions               ********************/
/**************************************************************************************/
#define PRINT_FREQUENCY
#define DEBUG_SYNTH
#define DEBUG_CIS
//#define DEBUG_SAMPLE_RATE

/**************************************************************************************/
/********************                     math                     ********************/
/**************************************************************************************/
#define PI								(3.14159265359)

/**************************************************************************************/
/********************              Synth definitions               ********************/
/**************************************************************************************/
#define SAMPLING_FREQUENCY 				(44100)	  	//in hertz

/**************************************************************************************/
/********************              DAC definitions                 ********************/
/**************************************************************************************/
#define DAC_TIME_FREQ 					(SAMPLING_FREQUENCY)

/**************************************************************************************/
/********************           Generation definitions             ********************/
/**************************************************************************************/
#define SENSIVITY_THRESHOLD 			(0)		    //threshold for detection

/**************************************************************************************/
/********************              CIS definitions                 ********************/
/**************************************************************************************/
#define CIS_BW

#define CIS_CLK_FREQ					(1500000)

#define CIS_PIXELS_NB					((CIS_PIXEX_AERA_STOP)-(CIS_PIXEX_AERA_START))		//5530 active pixels

#define CIS_SP_OFF						(10)
#define CIS_LED_ON						(79)
#define CIS_BLACK_PIX_AERA_START		(99)
#define CIS_DEAD_ZONE_AERA_START		(157)
#define CIS_PIXEX_AERA_START			(280) //166

#ifdef CIS_BW
#define CIS_LED_RED_OFF					(3600 / 3)
#define CIS_LED_GREEN_OFF				(3100 / 3)
#define CIS_LED_BLUE_OFF				(1600 / 3)
#else
#define CIS_LED_RED_OFF					(3600)
#define CIS_LED_GREEN_OFF				(3100)
#define CIS_LED_BLUE_OFF				(1600)
#endif

#define CIS_PIXEX_AERA_STOP				(5320) //5333
#define CIS_END_CAPTURE 				(5696)

/**************************************************************************************/
/********************         Wave generation definitions          ********************/
/**************************************************************************************/
#define WAVE_AMP_RESOLUTION 			(65535)   	//in decimal
#define START_FREQUENCY     			(40)
#define MAX_OCTAVE_NUMBER   			(12)
#define SEMITONE_PER_OCTAVE 			(12)
#define COMMA_PER_SEMITONE  			(9)
#define PIXEL_PER_COMMA     			(6)

#define NUMBER_OF_NOTES     			((CIS_PIXELS_NB) / (PIXEL_PER_COMMA))

#endif // __CONFIG_H__

