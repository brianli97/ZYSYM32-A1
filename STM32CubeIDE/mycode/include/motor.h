#ifndef __MOTOR_H_
#define __MOTOR_H_

#include "main.h"

void SetMotorSpeed(unsigned char ucChannel,signed char cSpeed);

void ZYSTM32_run(signed char speed,int time);       //前进函数
void ZYSTM32_brake(int time);               //刹车函数
void ZYSTM32_Left(signed char speed,int time);      //左转函数
void ZYSTM32_Spin_Left(signed char speed,int time); //左旋转函数
void ZYSTM32_Right(signed char speed,int time);     //右转函数
void ZYSTM32_Spin_Right(signed char speed,int time); //右旋转函数
void ZYSTM32_back(signed char speed,int time);       //后退函数

//电机驱动IO定义
/*
LEFT_MOTOR_GO	  PB7	左电机方向控制
LEFT_MOTOR_PWM	PB8		左电机PWM

RIGHT_MOTOR_GO	PA4                  右电机方向控制
RIGHT_MOTOR_PWM	PB9	 	右电机PWM
 */
#define LEFT_MOTOR_GO_SET 		HAL_GPIO_WritePin(LEFT_MOTOR_GO_GPIO_Port, LEFT_MOTOR_GO_Pin, GPIO_PIN_SET)
#define LEFT_MOTOR_GO_RESET		HAL_GPIO_WritePin(LEFT_MOTOR_GO_GPIO_Port, LEFT_MOTOR_GO_Pin, GPIO_PIN_RESET)

#define LEFT_MOTOR_PWM_SET		HAL_GPIO_WritePin(LEFT_MOTOR_PWM_GPIO_Port, LEFT_MOTOR_PWM_Pin, GPIO_PIN_SET)
#define LEFT_MOTOR_PWM_RESET	HAL_GPIO_WritePin(LEFT_MOTOR_PWM_GPIO_Port, LEFT_MOTOR_PWM_Pin, GPIO_PIN_RESET)

#define RIGHT_MOTOR_GO_SET		HAL_GPIO_WritePin(RIGHT_MOTOR_GO_GPIO_Port, RIGHT_MOTOR_GO_Pin, GPIO_PIN_SET)
#define RIGHT_MOTOR_GO_RESET	HAL_GPIO_WritePin(RIGHT_MOTOR_GO_GPIO_Port, RIGHT_MOTOR_GO_Pin, GPIO_PIN_RESET)

#define RIGHT_MOTOR_PWM_SET		HAL_GPIO_WritePin(RIGHT_MOTOR_PWM_GPIO_Port, RIGHT_MOTOR_PWM_Pin, GPIO_PIN_SET)
#define RIGHT_MOTOR_PWM_RESET	HAL_GPIO_WritePin(RIGHT_MOTOR_PWM_GPIO_Port, RIGHT_MOTOR_PWM_Pin, GPIO_PIN_RESET)

#endif
