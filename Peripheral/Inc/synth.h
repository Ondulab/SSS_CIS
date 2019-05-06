/*
 * synth.h
 *
 *  Created on: 24 avr. 2019
 *      Author: zhonx
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __SYNTH_H
#define __SYNTH_H

/* Includes ------------------------------------------------------------------*/

/* Private includes ----------------------------------------------------------*/

/* Exported types ------------------------------------------------------------*/
struct wave {
	float frequency;
	uint8_t octave;
	uint16_t aera_size;
	__IO uint16_t *start_ptr;
	__IO uint16_t *current_ptr;
};

/* Exported constants --------------------------------------------------------*/

/* Exported macro ------------------------------------------------------------*/

/* Exported functions prototypes ---------------------------------------------*/
int32_t synth_init(void);

/* Private defines -----------------------------------------------------------*/

#endif /* __SYNTH_H */
