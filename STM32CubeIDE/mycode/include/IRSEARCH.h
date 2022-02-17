#ifndef __IRSEARCH_H_
#define __IRSEARCH_H_

#include "stm32f1xx_hal.h"

void SearchRun(void);

//循迹光电对管
/*
 	 右循迹 	SEARCH_R_PIN	PA7
	左循迹	 	SEARCH_L_PIN	PB0
 */

#define SEARCH_R_IO HAL_GPIO_ReadPin(SEARCH_R_GPIO_Port, SEARCH_R_Pin)
#define SEARCH_L_IO HAL_GPIO_ReadPin(SEARCH_L_GPIO_Port, SEARCH_L_Pin)
#define BLACK_AREA 1
#define WHITE_AREA 0

//指令定义
#define COMM_STOP  'I'//停止
#define COMM_UP    'A'//前进
#define COMM_DOWN  'B'//后退
#define COMM_LEFT  'C'//左转
#define COMM_RIGHT 'D'//右转

#endif
