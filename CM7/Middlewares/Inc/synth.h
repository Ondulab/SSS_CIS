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
#include "config.h"
#include "stdint.h"
#include "synth.h"

/* Private includes ----------------------------------------------------------*/

/* Exported types ------------------------------------------------------------*/
extern DMA_HandleTypeDef hdma_sai1_a;
extern SAI_HandleTypeDef hsai_BlockA1;

struct wave {
	int16_t *start_ptr;
    uint16_t current_idx;
	uint16_t aera_size;
	uint16_t octave_coeff;
	int32_t current_volume;
#ifdef PRINT_FREQUENCY
	float frequency;
#endif
};

typedef enum {
	IFFT_MODE = 0,
	PLAY_MODE,
}synthModeTypeDef;

extern volatile uint32_t synth_process_cnt;

/* Exported constants --------------------------------------------------------*/

/* Exported macro ------------------------------------------------------------*/

/* Exported functions prototypes ---------------------------------------------*/
int32_t synth_IfftInit(void);
int32_t synth_PlayInit(void);
int32_t synth_GetAudioData(uint32_t index);
int32_t synth_GetImageData(uint32_t index);
int32_t synth_SetImageData(uint32_t index, uint16_t value);
void synth_AudioProcess(synthModeTypeDef mode);

/* Private defines -----------------------------------------------------------*/

#endif /* __SYNTH_H */
