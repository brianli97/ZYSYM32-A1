#ifndef __KEYSCAN_H_
#define __KEYSCAN_H_

#include "main.h"

void keyscan(void); //按键扫描函数

#define BEEP_SET		HAL_GPIO_WritePin(BEEP_GPIO_Port, BEEP_Pin, GPIO_PIN_SET)
#define BEEP_RESET		HAL_GPIO_WritePin(BEEP_GPIO_Port, BEEP_Pin, GPIO_PIN_RESET)

#define LED_D3_SET		HAL_GPIO_WritePin(LED_D3_GPIO_Port, LED_D3_Pin, GPIO_PIN_SET)
#define LED_D3_RESET	HAL_GPIO_WritePin(LED_D3_GPIO_Port, LED_D3_Pin, GPIO_PIN_RESET)

#define LED_D4_SET		HAL_GPIO_WritePin(LED_D4_GPIO_Port, LED_D4_Pin, GPIO_PIN_SET)
#define LED_D4_RESET	HAL_GPIO_WritePin(LED_D4_GPIO_Port, LED_D4_Pin, GPIO_PIN_RESET)

#define KEY	 HAL_GPIO_ReadPin(KEY_GPIO_Port, KEY_Pin)

#endif
