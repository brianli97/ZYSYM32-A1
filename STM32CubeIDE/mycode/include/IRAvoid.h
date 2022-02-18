#ifndef __IRAVOID_H_
#define __IRAVOID_H_

#include "main.h"

//避障传感器
/*
 *   AVOID_LEFT  PA8
 *   AVOID_RIGHT PB1
 */

#define AVOID_RIGHT_IO 	HAL_GPIO_ReadPin(AVOID_RIGHT_GPIO_Port, AVOID_RIGHT_Pin)

#define AVOID_LEFT_IO	HAL_GPIO_ReadPin(AVOID_LFET_GPIO_Port,AVOID_LFET_Pin)

#define BARRIER_Y 0		//有障碍物
#define BARRIER_N 1		//无障碍物

#endif
